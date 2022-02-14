
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i2c_client {int addr; } ;
struct em28xx {size_t def_i2c_bus; scalar_t__ em28xx_sensor; TYPE_1__* intf; struct i2c_client* i2c_client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_client*,int) ;
 scalar_t__* VAR_7 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_8)
{
 int VAR_9, VAR_10;
 char *VAR_11;
 u16 VAR_12;

 struct i2c_client *VAR_13 = &VAR_8->i2c_client[VAR_8->def_i2c_bus];

 VAR_8->em28xx_sensor = VAR_3;
 for (VAR_10 = 0; VAR_7[VAR_10] != VAR_6; VAR_10++) {
  VAR_13->addr = VAR_7[VAR_10];

  VAR_9 = FUNC_2(VAR_13, 0x00);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_5)
    FUNC_0(&VAR_8->intf->dev,
     "couldn't read from i2c device 0x%02x: error %i\n",
           VAR_13->addr << 1, VAR_9);
   continue;
  }
  VAR_12 = FUNC_3(VAR_9);

  VAR_9 = FUNC_2(VAR_13, 0xff);
  if (VAR_9 < 0) {
   FUNC_0(&VAR_8->intf->dev,
    "couldn't read from i2c device 0x%02x: error %i\n",
    VAR_13->addr << 1, VAR_9);
   continue;
  }

  if (VAR_12 != FUNC_3(VAR_9))
   continue;

  switch (VAR_12) {
  case 0x1222:
   VAR_11 = "MT9V012";
   break;
  case 0x1229:
   VAR_11 = "MT9V112";
   break;
  case 0x1433:
   VAR_11 = "MT9M011";
   break;
  case 0x143a:
   VAR_11 = "MT9M111";
   VAR_8->em28xx_sensor = VAR_1;
   break;
  case 0x148c:
   VAR_11 = "MT9M112";
   break;
  case 0x1511:
   VAR_11 = "MT9D011";
   break;
  case 0x8232:
  case 0x8243:
   VAR_11 = "MT9V011";
   VAR_8->em28xx_sensor = VAR_2;
   break;
  case 0x8431:
   VAR_11 = "MT9M001";
   VAR_8->em28xx_sensor = VAR_0;
   break;
  default:
   FUNC_1(&VAR_8->intf->dev,
     "unknown Micron sensor detected: 0x%04x\n",
     VAR_12);
   return 0;
  }

  if (VAR_8->em28xx_sensor == VAR_3)
   FUNC_1(&VAR_8->intf->dev,
     "unsupported sensor detected: %s\n", VAR_11);
  else
   FUNC_1(&VAR_8->intf->dev,
     "sensor %s detected\n", VAR_11);

  return 0;
 }

 return -VAR_4;
}
