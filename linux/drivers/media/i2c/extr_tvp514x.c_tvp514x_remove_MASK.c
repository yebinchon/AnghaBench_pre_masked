
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct tvp514x_decoder {int hdl; TYPE_1__ sd; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct tvp514x_decoder* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct tvp514x_decoder *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(&VAR_2->sd);
 FUNC_1(&VAR_2->sd.entity);
 FUNC_4(&VAR_2->hdl);
 return 0;
}
