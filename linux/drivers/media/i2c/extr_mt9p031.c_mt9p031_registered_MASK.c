
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9p031 {int dummy; } ;
struct i2c_client {int addr; int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct mt9p031*) ;
 int FUNC_3 (struct mt9p031*) ;
 scalar_t__ FUNC_4 (struct i2c_client*,int ) ;
 struct mt9p031* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_3);
 struct mt9p031 *VAR_5 = FUNC_5(VAR_3);
 s32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->dev, "MT9P031 power up failed\n");
  return VAR_7;
 }


 VAR_6 = FUNC_4(VAR_4, VAR_1);
 FUNC_2(VAR_5);

 if (VAR_6 != VAR_2) {
  FUNC_0(&VAR_4->dev, "MT9P031 not detected, wrong version "
   "0x%04x\n", VAR_6);
  return -VAR_0;
 }

 FUNC_1(&VAR_4->dev, "MT9P031 detected at address 0x%02x\n",
   VAR_4->addr);

 return 0;
}
