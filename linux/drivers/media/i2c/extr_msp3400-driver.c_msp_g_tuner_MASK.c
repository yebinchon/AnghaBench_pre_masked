
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ type; int capability; int audmode; int rxsubchans; } ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {scalar_t__ opmode; int audmode; int rxsubchans; int radio; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*) ;
 struct msp_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, struct v4l2_tuner *VAR_6)
{
 struct msp_state *VAR_7 = FUNC_1(VAR_5);
 struct i2c_client *VAR_8 = FUNC_2(VAR_5);

 if (VAR_6->type != VAR_1)
  return 0;
 if (!VAR_7->radio) {
  if (VAR_7->opmode == VAR_0)
   FUNC_0(VAR_8);
  VAR_6->rxsubchans = VAR_7->rxsubchans;
 }
 VAR_6->audmode = VAR_7->audmode;
 VAR_6->capability |= VAR_4 |
  VAR_2 | VAR_3;
 return 0;
}
