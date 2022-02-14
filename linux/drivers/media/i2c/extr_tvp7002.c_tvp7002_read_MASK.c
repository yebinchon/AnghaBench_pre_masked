
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);

  if (VAR_6 >= 0) {
   *VAR_3 = (u8)VAR_6;
   return 0;
  }

  FUNC_1(10);
 }
 FUNC_2(VAR_1, "TVP7002 read error %d\n", VAR_6);
 return VAR_6;
}
