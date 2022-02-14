
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_client {int addr; } ;
struct em28xx {size_t def_i2c_bus; scalar_t__ em28xx_sensor; TYPE_1__* intf; struct i2c_client* i2c_client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_client*,int) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;
 u8 VAR_10;
 u16 VAR_11;
 struct i2c_client *VAR_12 = &VAR_6->i2c_client[VAR_6->def_i2c_bus];

 VAR_6->em28xx_sensor = VAR_0;




 for (VAR_8 = 0; VAR_5[VAR_8] != VAR_4; VAR_8++) {
  VAR_12->addr = VAR_5[VAR_8];

  VAR_10 = 0x1c;
  VAR_7 = FUNC_2(VAR_12, VAR_10);
  if (VAR_7 < 0) {
   if (VAR_7 != -VAR_3)
    FUNC_0(&VAR_6->intf->dev,
     "couldn't read from i2c device 0x%02x: error %i\n",
     VAR_12->addr << 1, VAR_7);
   continue;
  }
  VAR_11 = VAR_7 << 8;
  VAR_10 = 0x1d;
  VAR_7 = FUNC_2(VAR_12, VAR_10);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_6->intf->dev,
    "couldn't read from i2c device 0x%02x: error %i\n",
    VAR_12->addr << 1, VAR_7);
   continue;
  }
  VAR_11 += VAR_7;

  if (VAR_11 != 0x7fa2)
   continue;

  VAR_10 = 0x0a;
  VAR_7 = FUNC_2(VAR_12, VAR_10);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_6->intf->dev,
    "couldn't read from i2c device 0x%02x: error %i\n",
    VAR_12->addr << 1, VAR_7);
   continue;
  }
  VAR_11 = VAR_7 << 8;
  VAR_10 = 0x0b;
  VAR_7 = FUNC_2(VAR_12, VAR_10);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_6->intf->dev,
    "couldn't read from i2c device 0x%02x: error %i\n",
    VAR_12->addr << 1, VAR_7);
   continue;
  }
  VAR_11 += VAR_7;

  switch (VAR_11) {
  case 0x2642:
   VAR_9 = "OV2640";
   VAR_6->em28xx_sensor = VAR_1;
   break;
  case 0x7648:
   VAR_9 = "OV7648";
   break;
  case 0x7660:
   VAR_9 = "OV7660";
   break;
  case 0x7673:
   VAR_9 = "OV7670";
   break;
  case 0x7720:
   VAR_9 = "OV7720";
   break;
  case 0x7721:
   VAR_9 = "OV7725";
   break;
  case 0x9648:
  case 0x9649:
   VAR_9 = "OV9640";
   break;
  case 0x9650:
  case 0x9652:
   VAR_9 = "OV9650";
   break;
  case 0x9656:
  case 0x9657:
   VAR_9 = "OV9655";
   break;
  default:
   FUNC_1(&VAR_6->intf->dev,
     "unknown OmniVision sensor detected: 0x%04x\n",
    VAR_11);
   return 0;
  }

  if (VAR_6->em28xx_sensor == VAR_0)
   FUNC_1(&VAR_6->intf->dev,
     "unsupported sensor detected: %s\n", VAR_9);
  else
   FUNC_1(&VAR_6->intf->dev,
     "sensor %s detected\n", VAR_9);

  return 0;
 }

 return -VAR_2;
}
