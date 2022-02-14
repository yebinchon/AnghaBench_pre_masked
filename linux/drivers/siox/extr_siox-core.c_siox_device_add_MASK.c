
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct siox_master {size_t setbuf_len; size_t getbuf_len; size_t buf_len; int devices; int num_devices; int dev; int * buf; int busno; } ;
struct TYPE_4__ {int sd; } ;
struct TYPE_5__ {TYPE_1__ kobj; int * type; int * bus; int * parent; } ;
struct siox_device {char const* type; size_t inbytes; size_t outbytes; TYPE_2__ dev; void* connected_kn; void* watchdog_errors_kn; void* watchdog_kn; void* status_errors_kn; int node; struct siox_master* smaster; int statustype; } ;


 int VAR_0 ;
 struct siox_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct siox_device*) ;
 int * FUNC_5 (int *,size_t,int ) ;
 struct siox_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct siox_master*) ;
 int FUNC_9 (struct siox_master*) ;
 void* FUNC_10 (int ,char*) ;

__attribute__((used)) static struct siox_device *FUNC_11(struct siox_master *VAR_4,
        const char *VAR_5, size_t VAR_6,
        size_t VAR_7, u8 VAR_8)
{
 struct siox_device *VAR_9;
 int VAR_10;
 size_t VAR_11;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->type = VAR_5;
 VAR_9->inbytes = VAR_6;
 VAR_9->outbytes = VAR_7;
 VAR_9->statustype = VAR_8;

 VAR_9->smaster = VAR_4;
 VAR_9->dev.parent = &VAR_4->dev;
 VAR_9->dev.bus = &VAR_2;
 VAR_9->dev.type = &VAR_3;

 FUNC_8(VAR_4);

 FUNC_2(&VAR_9->dev, "siox-%d-%d",
       VAR_4->busno, VAR_4->num_devices);

 VAR_11 = VAR_4->setbuf_len + VAR_6 +
  VAR_4->getbuf_len + VAR_7;
 if (VAR_4->buf_len < VAR_11) {
  u8 *VAR_12 = FUNC_5(VAR_4->buf, VAR_11, VAR_1);

  if (!VAR_12) {
   FUNC_1(&VAR_4->dev,
    "failed to realloc buffer to %zu\n", VAR_11);
   VAR_10 = -VAR_0;
   goto err_buf_alloc;
  }

  VAR_4->buf_len = VAR_11;
  VAR_4->buf = VAR_12;
 }

 VAR_10 = FUNC_3(&VAR_9->dev);
 if (VAR_10) {
  FUNC_1(&VAR_4->dev, "failed to register device: %d\n", VAR_10);

  goto err_device_register;
 }

 VAR_4->num_devices++;
 FUNC_7(&VAR_9->node, &VAR_4->devices);

 VAR_4->setbuf_len += VAR_9->inbytes;
 VAR_4->getbuf_len += VAR_9->outbytes;

 VAR_9->status_errors_kn = FUNC_10(VAR_9->dev.kobj.sd,
           "status_errors");
 VAR_9->watchdog_kn = FUNC_10(VAR_9->dev.kobj.sd,
      "watchdog");
 VAR_9->watchdog_errors_kn = FUNC_10(VAR_9->dev.kobj.sd,
             "watchdog_errors");
 VAR_9->connected_kn = FUNC_10(VAR_9->dev.kobj.sd,
       "connected");

 FUNC_9(VAR_4);

 return VAR_9;

err_device_register:


err_buf_alloc:
 FUNC_9(VAR_4);

 FUNC_4(VAR_9);

 return FUNC_0(VAR_10);
}
