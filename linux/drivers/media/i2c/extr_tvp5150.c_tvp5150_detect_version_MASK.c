
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dev; } ;
struct tvp5150 {int dev_id; int rom_ver; int regmap; struct v4l2_subdev sd; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct tvp5150 *VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_2->sd;
 struct i2c_client *VAR_4 = FUNC_4(VAR_3);
 u8 VAR_5[4];
 int VAR_6;





 VAR_6 = FUNC_2(VAR_2->regmap, VAR_0, VAR_5, 4);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev, "reading ID registers failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_2->dev_id = (VAR_5[0] << 8) | VAR_5[1];
 VAR_2->rom_ver = (VAR_5[2] << 8) | VAR_5[3];

 FUNC_1(VAR_3->dev, "tvp%04x (%u.%u) chip found @ 0x%02x (%s)\n",
    VAR_2->dev_id, VAR_5[2], VAR_5[3], VAR_4->addr << 1,
    VAR_4->adapter->name);

 if (VAR_2->dev_id == 0x5150 && VAR_2->rom_ver == 0x0321) {
  FUNC_1(VAR_3->dev, "tvp5150a detected.\n");
 } else if (VAR_2->dev_id == 0x5150 && VAR_2->rom_ver == 0x0400) {
  FUNC_1(VAR_3->dev, "tvp5150am1 detected.\n");


  FUNC_3(VAR_2->regmap, VAR_1, 0);
 } else if (VAR_2->dev_id == 0x5151 && VAR_2->rom_ver == 0x0100) {
  FUNC_1(VAR_3->dev, "tvp5151 detected.\n");
 } else {
  FUNC_1(VAR_3->dev, "*** unknown tvp%04x chip detected.\n",
     VAR_2->dev_id);
 }

 return 0;
}
