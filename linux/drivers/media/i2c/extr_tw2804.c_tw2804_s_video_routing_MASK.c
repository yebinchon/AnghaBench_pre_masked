
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct tw2804 {int channel; int input; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 struct tw2804* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct i2c_client*,int,int,int) ;
 scalar_t__ FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4, u32 VAR_5, u32 VAR_6,
 u32 VAR_7)
{
 struct tw2804 *VAR_8 = FUNC_3(VAR_4);
 struct i2c_client *VAR_9 = FUNC_4(VAR_4);
 int VAR_10;

 if (VAR_7 && VAR_7 - 1 != VAR_8->channel) {
  if (VAR_7 > 4) {
   FUNC_1(&VAR_9->dev,
    "channel %d is not between 1 and 4!\n", VAR_7);
   return -VAR_0;
  }
  VAR_8->channel = VAR_7 - 1;
  FUNC_0(&VAR_9->dev, "initializing TW2804 channel %d\n",
   VAR_8->channel);
  if (VAR_8->channel == 0 &&
    FUNC_6(VAR_9, VAR_3, 0) < 0) {
   FUNC_1(&VAR_9->dev,
    "error initializing TW2804 global registers\n");
   return -VAR_1;
  }
  if (FUNC_6(VAR_9, VAR_2, VAR_8->channel) < 0) {
   FUNC_1(&VAR_9->dev,
    "error initializing TW2804 channel %d\n",
    VAR_8->channel);
   return -VAR_1;
  }
 }

 if (VAR_5 > 1)
  return -VAR_0;

 if (VAR_5 == VAR_8->input)
  return 0;

 VAR_10 = FUNC_2(VAR_9, 0x22, VAR_8->channel);

 if (VAR_10 >= 0) {
  if (VAR_5 == 0)
   VAR_10 &= ~(1 << 2);
  else
   VAR_10 |= 1 << 2;
  VAR_10 = FUNC_5(VAR_9, 0x22, VAR_10, VAR_8->channel);
 }

 if (VAR_10 >= 0)
  VAR_8->input = VAR_5;
 else
  return VAR_10;
 return 0;
}
