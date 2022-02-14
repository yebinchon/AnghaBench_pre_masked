
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int apply_crop; int apply_cfg; int mipi_lanes; int bus_type; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct s5k6aa*) ;
 int FUNC_2 (struct s5k6aa*,int ,int ) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 struct s5k6aa* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_6(VAR_1);
 struct s5k6aa *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 VAR_3->apply_crop = 1;
 VAR_3->apply_cfg = 1;
 FUNC_0(100);

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_2(VAR_3, VAR_3->bus_type,
      VAR_3->mipi_lanes);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;
 FUNC_0(20);

 return FUNC_1(VAR_3);
}
