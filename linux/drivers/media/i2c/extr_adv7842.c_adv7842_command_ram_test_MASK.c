
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_2__ {struct adv7842_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adv7842_state {struct v4l2_dv_timings timings; int vid_std_select; } ;
struct adv7842_platform_data {int sd_ram_ddr; int sd_ram_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,struct adv7842_platform_data*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_dv_timings*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_dv_timings*,int ,int) ;
 int FUNC_10 (struct v4l2_subdev*,int ) ;
 struct adv7842_state* FUNC_11 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_12(VAR_4);
 struct adv7842_state *VAR_6 = FUNC_11(VAR_4);
 struct adv7842_platform_data *VAR_7 = VAR_5->dev.platform_data;
 struct v4l2_dv_timings VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_3;

 if (!VAR_7->sd_ram_size || !VAR_7->sd_ram_ddr) {
  FUNC_13(VAR_4, "no sdram or no ddr sdram\n");
  return -VAR_2;
 }

 FUNC_8(VAR_4);

 FUNC_2(VAR_4, VAR_7);


 VAR_9 = FUNC_1(VAR_4);

 FUNC_8(VAR_4);

 FUNC_2(VAR_4, VAR_7);


 FUNC_0(VAR_4);

 FUNC_4(VAR_4);

 FUNC_10(VAR_4, VAR_6->vid_std_select);

 FUNC_7(VAR_4);

 FUNC_6(VAR_4);
 FUNC_5(VAR_4, VAR_0);
 FUNC_5(VAR_4, VAR_1);

 VAR_8 = VAR_6->timings;

 FUNC_9(&VAR_6->timings, 0, sizeof(struct v4l2_dv_timings));

 FUNC_3(VAR_4, &VAR_8);

 return VAR_9;
}
