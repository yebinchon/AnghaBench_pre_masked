
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int class; int retries; TYPE_3__ dev; int name; int * algo; int owner; } ;
struct i2c_device {unsigned long smba; TYPE_1__ adapter; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 struct i2c_device* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct i2c_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct i2c_device*) ;
 int FUNC_7 (struct resource*) ;
 int VAR_11 ;
 int FUNC_8 (int ,int,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_12)
{
 int VAR_13;
 struct i2c_device *VAR_14;
 struct resource *VAR_15;

 VAR_14 = FUNC_2(&VAR_12->dev, sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_0;

 FUNC_4(&VAR_14->adapter, VAR_14);
 VAR_14->adapter.owner = VAR_10;
 VAR_14->adapter.class = VAR_7 | VAR_8;
 VAR_14->adapter.algo = &VAR_11;

 VAR_15 = FUNC_5(VAR_12, VAR_9, 0);
 if (!VAR_15)
  return -VAR_1;

 VAR_14->smba = (unsigned long)FUNC_1(&VAR_12->dev,
        VAR_15->start,
        FUNC_7(VAR_15));
 if (!VAR_14->smba)
  return -VAR_0;

 FUNC_6(VAR_12, VAR_14);

 VAR_14->features |= VAR_4;
 VAR_14->features |= VAR_3;
 VAR_14->features |= VAR_5;
 VAR_14->features |= VAR_2;




 VAR_14->adapter.dev.parent = &VAR_12->dev;


 VAR_14->adapter.retries = 3;


 FUNC_8(VAR_14->adapter.name, sizeof(VAR_14->adapter.name), "Fake SMBus I801 adapter");

 VAR_13 = FUNC_3(&VAR_14->adapter);
 if (VAR_13) {
  FUNC_0(&VAR_14->adapter.dev, "Failed to add SMBus adapter\n");
  return VAR_13;
 }

 return 0;
}
