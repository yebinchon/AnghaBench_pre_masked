
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3);

  if (VAR_6 >= 0)
   return 0;

  FUNC_4(VAR_1, "Write: retry ... %d\n", VAR_5);
  FUNC_1(10);
 }
 FUNC_2(VAR_1, "TVP7002 write error %d\n", VAR_6);
 return VAR_6;
}
