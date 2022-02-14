
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_1 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_4);
 u16 VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (VAR_8 < 0 || VAR_7 != VAR_3) {
  FUNC_1(VAR_4, "FW version check failed!\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_1, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3(VAR_4, "chip found FW ver: 0x%x, HW rev: 0x%x\n",
      VAR_7, VAR_6);
 return 0;
}
