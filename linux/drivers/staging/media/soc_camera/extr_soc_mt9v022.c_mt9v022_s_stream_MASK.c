
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v022 {int chip_control; int chip_version; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_4 (struct i2c_client*,int ,int) ;
 struct mt9v022* FUNC_5 (struct i2c_client*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_3);
 struct mt9v022 *VAR_6 = FUNC_5(VAR_5);

 if (VAR_4) {

  VAR_6->chip_control &= ~0x10;
  if (FUNC_0(VAR_6->chip_version) ||
      FUNC_1(VAR_6->chip_version)) {




   if (FUNC_2(VAR_5, VAR_2, 0x204))
    return -VAR_0;
  }
 } else {

  VAR_6->chip_control |= 0x10;
  if (FUNC_0(VAR_6->chip_version) ||
      FUNC_1(VAR_6->chip_version)) {





   if (FUNC_3(VAR_5, VAR_2, 0x204))
    return -VAR_0;
  }
 }

 if (FUNC_4(VAR_5, VAR_1, VAR_6->chip_control) < 0)
  return -VAR_0;
 return 0;
}
