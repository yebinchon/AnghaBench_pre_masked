
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6, v4l2_std_id *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 & VAR_0)
  *VAR_7 &= VAR_9 & VAR_1 ? VAR_4 : VAR_3;
 else
  *VAR_7 = VAR_5;

 return 0;
}
