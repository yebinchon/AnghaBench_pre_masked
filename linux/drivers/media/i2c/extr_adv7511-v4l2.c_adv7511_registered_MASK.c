
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct adv7511_state {int cec_adap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 struct adv7511_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct adv7511_state *VAR_1 = FUNC_2(VAR_0);
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->cec_adap, &VAR_2->dev);
 if (VAR_3)
  FUNC_0(VAR_1->cec_adap);
 return VAR_3;
}
