
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct s5k6aa_ctrls {void* auto_exp; void* gain; void* exposure; void* hflip; void* vflip; void* awb; void* gain_blue; void* gain_green; void* gain_red; struct v4l2_ctrl_handler handler; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct s5k6aa {TYPE_1__ sd; struct s5k6aa_ctrls ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct v4l2_ctrl_ops VAR_18 ;
 int * VAR_19 ;
 int FUNC_0 (int,void**,int ,int) ;
 int FUNC_1 (int,void**) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int *) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct s5k6aa *VAR_20)
{
 const struct v4l2_ctrl_ops *VAR_21 = &VAR_18;
 struct s5k6aa_ctrls *VAR_22 = &VAR_20->ctrls;
 struct v4l2_ctrl_handler *VAR_23 = &VAR_22->handler;

 int VAR_24 = FUNC_3(VAR_23, 16);
 if (VAR_24)
  return VAR_24;

 VAR_22->awb = FUNC_5(VAR_23, VAR_21, VAR_0,
           0, 1, 1, 1);
 VAR_22->gain_red = FUNC_4(VAR_23, &VAR_19[0], ((void*)0));
 VAR_22->gain_green = FUNC_4(VAR_23, &VAR_19[1], ((void*)0));
 VAR_22->gain_blue = FUNC_4(VAR_23, &VAR_19[2], ((void*)0));
 FUNC_0(4, &VAR_22->awb, 0, 0);

 VAR_22->hflip = FUNC_5(VAR_23, VAR_21, VAR_7, 0, 1, 1, 0);
 VAR_22->vflip = FUNC_5(VAR_23, VAR_21, VAR_12, 0, 1, 1, 0);
 FUNC_1(2, &VAR_22->hflip);

 VAR_22->auto_exp = FUNC_6(VAR_23, VAR_21,
    VAR_5,
    VAR_17, 0, VAR_16);

 VAR_22->exposure = FUNC_5(VAR_23, VAR_21, VAR_4,
         0, 6000000U, 1, 100000U);

 VAR_22->gain = FUNC_5(VAR_23, VAR_21, VAR_6,
     0, 256, 1, 256);
 FUNC_0(3, &VAR_22->auto_exp, 0, 0);

 FUNC_6(VAR_23, VAR_21, VAR_8,
          VAR_9, 0,
          VAR_9);

 FUNC_6(VAR_23, VAR_21, VAR_2,
          VAR_15, ~0x6f, VAR_14);

 FUNC_5(VAR_23, VAR_21, VAR_13,
     0, 256, 1, 0);

 FUNC_5(VAR_23, VAR_21, VAR_10, -127, 127, 1, 0);
 FUNC_5(VAR_23, VAR_21, VAR_1, -127, 127, 1, 0);
 FUNC_5(VAR_23, VAR_21, VAR_3, -127, 127, 1, 0);
 FUNC_5(VAR_23, VAR_21, VAR_11, -127, 127, 1, 0);

 if (VAR_23->error) {
  VAR_24 = VAR_23->error;
  FUNC_2(VAR_23);
  return VAR_24;
 }

 VAR_20->sd.ctrl_handler = VAR_23;
 return 0;
}
