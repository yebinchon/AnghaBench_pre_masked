
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {TYPE_1__* platform_data; } ;
struct i2c_client {TYPE_2__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;
struct ak881x {int lines; void* revision; TYPE_1__* pdata; int subdev; } ;
struct TYPE_6__ {int flags; } ;


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
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int,void*) ;
 int FUNC_3 (int *,char*) ;
 struct ak881x* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 void* FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_11->adapter;
 struct ak881x *VAR_14;
 u8 VAR_15, VAR_16;

 if (!FUNC_5(VAR_13, VAR_9)) {
  FUNC_3(&VAR_13->dev,
    "I2C-Adapter doesn't support I2C_FUNC_SMBUS_WORD\n");
  return -VAR_5;
 }

 VAR_14 = FUNC_4(&VAR_11->dev, sizeof(*VAR_14), VAR_8);
 if (!VAR_14)
  return -VAR_7;

 FUNC_8(&VAR_14->subdev, VAR_11, &VAR_10);

 VAR_16 = FUNC_6(VAR_11, VAR_0);

 switch (VAR_16) {
 case 0x13:
 case 0x14:
  break;
 default:
  FUNC_1(&VAR_11->dev,
   "No ak881x chip detected, register read %x\n", VAR_16);
  return -VAR_6;
 }

 VAR_14->revision = FUNC_6(VAR_11, VAR_1);
 VAR_14->pdata = VAR_11->dev.platform_data;

 if (VAR_14->pdata) {
  if (VAR_14->pdata->flags & VAR_2)
   VAR_15 = 4;
  else
   VAR_15 = 0;

  switch (VAR_14->pdata->flags & VAR_3) {
  case 130:
   VAR_15 |= 1;
   break;
  case 129:
   VAR_15 |= 2;
   break;
  case 128:
  default:
   break;
  }

  FUNC_0(&VAR_11->dev, "IF mode %x\n", VAR_15);






  FUNC_7(VAR_11, VAR_4, VAR_15 | (20 << 3));
 }


 VAR_14->lines = 480;

 FUNC_2(&VAR_11->dev, "Detected an ak881x chip ID %x, revision %x\n",
   VAR_16, VAR_14->revision);

 return 0;
}
