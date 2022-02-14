
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct ov7670_info {TYPE_1__ sd; int hdl; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct ov7670_info* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct ov7670_info *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 FUNC_5(&VAR_2->hdl);
 FUNC_1(&VAR_2->sd.entity);
 FUNC_2(VAR_1);
 return 0;
}
