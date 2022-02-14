
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; int * lock; } ;
struct TYPE_6__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov5640_ctrls {void* auto_exp; void* auto_gain; void* auto_wb; TYPE_2__* exposure; TYPE_1__* gain; void* light_freq; void* vflip; void* hflip; int test_pattern; void* contrast; void* hue; void* saturation; void* red_balance; void* blue_balance; struct v4l2_ctrl_handler handler; } ;
struct ov5640_dev {TYPE_3__ sd; int lock; struct ov5640_ctrls ctrls; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_18 ;
 struct v4l2_ctrl_ops VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int,void**,int,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int ,int ) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ov5640_dev *VAR_21)
{
 const struct v4l2_ctrl_ops *VAR_22 = &VAR_19;
 struct ov5640_ctrls *VAR_23 = &VAR_21->ctrls;
 struct v4l2_ctrl_handler *VAR_24 = &VAR_23->handler;
 int VAR_25;

 FUNC_3(VAR_24, 32);


 VAR_24->lock = &VAR_21->lock;


 VAR_23->auto_wb = FUNC_4(VAR_24, VAR_22,
        VAR_1,
        0, 1, 1, 1);
 VAR_23->blue_balance = FUNC_4(VAR_24, VAR_22, VAR_2,
      0, 4095, 1, 0);
 VAR_23->red_balance = FUNC_4(VAR_24, VAR_22, VAR_12,
            0, 4095, 1, 0);

 VAR_23->auto_exp = FUNC_5(VAR_24, VAR_22,
       VAR_5,
       VAR_18, 0,
       VAR_17);
 VAR_23->exposure = FUNC_4(VAR_24, VAR_22, VAR_4,
         0, 65535, 1, 0);

 VAR_23->auto_gain = FUNC_4(VAR_24, VAR_22, VAR_0,
          0, 1, 1, 1);
 VAR_23->gain = FUNC_4(VAR_24, VAR_22, VAR_6,
     0, 1023, 1, 0);

 VAR_23->saturation = FUNC_4(VAR_24, VAR_22, VAR_13,
           0, 255, 1, 64);
 VAR_23->hue = FUNC_4(VAR_24, VAR_22, VAR_8,
           0, 359, 1, 0);
 VAR_23->contrast = FUNC_4(VAR_24, VAR_22, VAR_3,
         0, 255, 1, 0);
 VAR_23->test_pattern =
  FUNC_6(VAR_24, VAR_22, VAR_14,
          FUNC_0(VAR_20) - 1,
          0, 0, VAR_20);
 VAR_23->hflip = FUNC_4(VAR_24, VAR_22, VAR_7,
      0, 1, 1, 0);
 VAR_23->vflip = FUNC_4(VAR_24, VAR_22, VAR_15,
      0, 1, 1, 0);

 VAR_23->light_freq =
  FUNC_5(VAR_24, VAR_22,
           VAR_9,
           VAR_11, 0,
           VAR_10);

 if (VAR_24->error) {
  VAR_25 = VAR_24->error;
  goto free_ctrls;
 }

 VAR_23->gain->flags |= VAR_16;
 VAR_23->exposure->flags |= VAR_16;

 FUNC_1(3, &VAR_23->auto_wb, 0, 0);
 FUNC_1(2, &VAR_23->auto_gain, 0, 1);
 FUNC_1(2, &VAR_23->auto_exp, 1, 1);

 VAR_21->sd.ctrl_handler = VAR_24;
 return 0;

free_ctrls:
 FUNC_2(VAR_24);
 return VAR_25;
}
