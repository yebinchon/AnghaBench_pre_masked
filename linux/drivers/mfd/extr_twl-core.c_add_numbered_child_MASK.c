
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twl_client {TYPE_2__* client; } ;
struct resource {int start; int flags; } ;
struct device {int * parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {struct twl_client* twl_modules; TYPE_1__* twl_map; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,void*,unsigned int) ;
 int FUNC_6 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_7 (char const*,int) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (char*,int ,unsigned int) ;
 unsigned int FUNC_10 () ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct device *
FUNC_12(unsigned VAR_5, const char *VAR_6, int VAR_7,
  void *VAR_8, unsigned VAR_9,
  bool VAR_10, int VAR_11, int VAR_12)
{
 struct platform_device *VAR_13;
 struct twl_client *VAR_14;
 int VAR_15, VAR_16;

 if (FUNC_11(VAR_5 >= FUNC_10())) {
  FUNC_9("%s: invalid module number %d\n", VAR_0, VAR_5);
  return FUNC_0(-VAR_2);
 }
 VAR_16 = VAR_4->twl_map[VAR_5].sid;
 VAR_14 = &VAR_4->twl_modules[VAR_16];

 VAR_13 = FUNC_7(VAR_6, VAR_7);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_13->dev.parent = &VAR_14->client->dev;

 if (VAR_8) {
  VAR_15 = FUNC_5(VAR_13, VAR_8, VAR_9);
  if (VAR_15 < 0) {
   FUNC_1(&VAR_13->dev, "can't add platform_data\n");
   goto put_device;
  }
 }

 if (VAR_11) {
  struct resource VAR_17[2] = {
   { .start = VAR_11, .flags = VAR_3, },
   { .start = VAR_12, .flags = VAR_3, },
  };

  VAR_15 = FUNC_6(VAR_13, VAR_17, VAR_12 ? 2 : 1);
  if (VAR_15 < 0) {
   FUNC_1(&VAR_13->dev, "can't add irqs\n");
   goto put_device;
  }
 }

 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15)
  goto put_device;

 FUNC_3(&VAR_13->dev, VAR_10);

 return &VAR_13->dev;

put_device:
 FUNC_8(VAR_13);
 FUNC_2(&VAR_14->client->dev, "failed to add device %s\n", VAR_6);
 return FUNC_0(VAR_15);
}
