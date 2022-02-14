
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int clk_lane_reg1; } ;
struct mipid02_dev {TYPE_1__ r; struct v4l2_subdev* s_subdev; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct mipid02_dev*,struct v4l2_subdev*) ;
 int FUNC_3 (struct mipid02_dev*,struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct mipid02_dev *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->i2c_client;
 struct v4l2_subdev *VAR_3 = VAR_1->s_subdev;
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_3(VAR_1,
              VAR_3);
  if (!VAR_4) {
   FUNC_1(&VAR_2->dev, "Failed to get link frequency");
   return -VAR_0;
  }
 }

 FUNC_0(&VAR_2->dev, "detect link_freq = %d Hz", VAR_4);
 VAR_1->r.clk_lane_reg1 |= (2000000000 / VAR_4) << 2;

 return 0;
}
