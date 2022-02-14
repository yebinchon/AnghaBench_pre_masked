
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct s2250 {int input; int std; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct s2250* FUNC_0 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3, v4l2_std_id VAR_4)
{
 struct s2250 *VAR_5 = FUNC_0(VAR_3);
 struct i2c_client *VAR_6 = FUNC_1(VAR_3);
 u16 VAR_7;

 VAR_7 = (VAR_5->input == 1) ? 0x040 : 0x020;
 if (VAR_4 & VAR_0) {
  FUNC_3(VAR_6, VAR_1);
  FUNC_3(VAR_6, VAR_2);
  FUNC_2(VAR_6, 0x20, VAR_7);
 } else {
  FUNC_3(VAR_6, VAR_1);
  FUNC_2(VAR_6, 0x20, VAR_7 | 1);
 }
 VAR_5->std = VAR_4;
 return 0;
}
