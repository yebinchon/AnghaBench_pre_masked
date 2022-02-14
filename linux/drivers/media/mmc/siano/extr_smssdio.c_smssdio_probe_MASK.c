
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smssdio_device {int coredev; struct sdio_func* func; } ;
struct smsdevice_params_t {int buffer_size; int num_buffers; scalar_t__ device_type; int flags; int sendrequest_handler; int devpath; struct smssdio_device* context; int * device; } ;
struct sdio_func {int dev; } ;
struct sdio_device_id {int driver_data; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct smssdio_device*) ;
 struct smssdio_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct smsdevice_params_t*,int ,int) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*,int ) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;
 char* FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*,int ) ;
 int FUNC_11 (struct sdio_func*,struct smssdio_device*) ;
 TYPE_1__* FUNC_12 (int) ;
 int FUNC_13 (struct smsdevice_params_t*,int *,int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_18(struct sdio_func *VAR_9,
    const struct sdio_device_id *VAR_10)
{
 int VAR_11;

 int VAR_12;
 struct smssdio_device *VAR_13;
 struct smsdevice_params_t VAR_14;

 VAR_12 = VAR_10->driver_data;

 VAR_13 = FUNC_1(sizeof(struct smssdio_device), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->func = VAR_9;

 FUNC_2(&VAR_14, 0, sizeof(struct smsdevice_params_t));

 VAR_14.device = &VAR_9->dev;
 VAR_14.buffer_size = 0x5000;
 VAR_14.num_buffers = 22;
 VAR_14.context = VAR_13;

 FUNC_17(VAR_14.devpath, sizeof(VAR_14.devpath),
   "sdio\\%s", FUNC_7(VAR_9));

 VAR_14.sendrequest_handler = VAR_8;

 VAR_14.device_type = FUNC_12(VAR_12)->type;

 if (VAR_14.device_type != VAR_6)
  VAR_14.flags |= VAR_5;
 else {



  VAR_11 = -VAR_0;
  goto free;
 }

 VAR_11 = FUNC_13(&VAR_14, &VAR_13->coredev, VAR_2, ((void*)0));
 if (VAR_11 < 0)
  goto free;

 FUNC_14(VAR_13->coredev, VAR_12);

 FUNC_3(VAR_9);

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  goto release;

 VAR_11 = FUNC_10(VAR_9, VAR_4);
 if (VAR_11)
  goto disable;

 VAR_11 = FUNC_4(VAR_9, VAR_7);
 if (VAR_11)
  goto disable;

 FUNC_11(VAR_9, VAR_13);

 FUNC_8(VAR_9);

 VAR_11 = FUNC_15(VAR_13->coredev);
 if (VAR_11 < 0)
  goto reclaim;

 return 0;

reclaim:
 FUNC_3(VAR_9);
 FUNC_9(VAR_9);
disable:
 FUNC_5(VAR_9);
release:
 FUNC_8(VAR_9);
 FUNC_16(VAR_13->coredev);
free:
 FUNC_0(VAR_13);

 return VAR_11;
}
