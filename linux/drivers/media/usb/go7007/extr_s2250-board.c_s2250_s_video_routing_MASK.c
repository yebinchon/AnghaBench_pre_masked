
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct s2250 {scalar_t__ std; int input; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct s2250* FUNC_0 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, u32 VAR_3, u32 VAR_4,
     u32 VAR_5)
{
 struct s2250 *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 VAR_8 = (VAR_6->std == VAR_1) ? 0x01 : 0x00;
 if (VAR_3 == 0) {

  FUNC_2(VAR_7, 0x20, 0x020 | VAR_8);
  FUNC_2(VAR_7, 0x21, 0x662);
  FUNC_2(VAR_7, 0x140, 0x060);
 } else if (VAR_3 == 1) {

  FUNC_2(VAR_7, 0x20, 0x040 | VAR_8);
  FUNC_2(VAR_7, 0x21, 0x666);
  FUNC_2(VAR_7, 0x140, 0x060);
 } else {
  return -VAR_0;
 }
 VAR_6->input = VAR_3;
 return 0;
}
