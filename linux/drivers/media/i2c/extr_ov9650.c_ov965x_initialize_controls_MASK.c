
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct ov965x_ctrls {void* hflip; void* auto_exp; void* auto_gain; void* auto_wb; TYPE_2__* exposure; TYPE_1__* gain; void* light_freq; void* vflip; void* sharpness; void* brightness; void* saturation; void* red_balance; void* blue_balance; struct v4l2_ctrl_handler handler; } ;
struct TYPE_6__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov965x {TYPE_3__ sd; struct ov965x_ctrls ctrls; } ;
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
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int ) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ov965x *VAR_21)
{
 const struct v4l2_ctrl_ops *VAR_22 = &VAR_19;
 struct ov965x_ctrls *VAR_23 = &VAR_21->ctrls;
 struct v4l2_ctrl_handler *VAR_24 = &VAR_23->handler;
 int VAR_25;

 VAR_25 = FUNC_4(VAR_24, 16);
 if (VAR_25 < 0)
  return VAR_25;


 VAR_23->auto_wb = FUNC_5(VAR_24, VAR_22,
        VAR_1,
        0, 1, 1, 1);
 VAR_23->blue_balance = FUNC_5(VAR_24, VAR_22, VAR_2,
      0, 0xff, 1, 0x80);
 VAR_23->red_balance = FUNC_5(VAR_24, VAR_22, VAR_11,
            0, 0xff, 1, 0x80);

 VAR_23->auto_exp =
  FUNC_6(VAR_24, VAR_22,
           VAR_5,
           VAR_18, 0,
           VAR_17);

 VAR_23->exposure = FUNC_5(VAR_24, VAR_22,
         VAR_4,
         2, 1500, 1, 500);

 VAR_23->auto_gain = FUNC_5(VAR_24, VAR_22, VAR_0,
          0, 1, 1, 1);
 VAR_23->gain = FUNC_5(VAR_24, VAR_22, VAR_6,
     16, 64 * (16 + 15), 1, 64 * 16);

 VAR_23->saturation = FUNC_5(VAR_24, VAR_22, VAR_12,
           -2, 2, 1, 0);
 VAR_23->brightness = FUNC_5(VAR_24, VAR_22, VAR_3,
           -3, 3, 1, 0);
 VAR_23->sharpness = FUNC_5(VAR_24, VAR_22, VAR_13,
          0, 32, 1, 6);

 VAR_23->hflip = FUNC_5(VAR_24, VAR_22, VAR_7, 0, 1, 1, 0);
 VAR_23->vflip = FUNC_5(VAR_24, VAR_22, VAR_15, 0, 1, 1, 0);

 VAR_23->light_freq =
  FUNC_6(VAR_24, VAR_22,
           VAR_8,
           VAR_10, ~0x7,
           VAR_9);

 FUNC_7(VAR_24, VAR_22, VAR_14,
         FUNC_0(VAR_20) - 1, 0, 0,
         VAR_20);
 if (VAR_24->error) {
  VAR_25 = VAR_24->error;
  FUNC_3(VAR_24);
  return VAR_25;
 }

 VAR_23->gain->flags |= VAR_16;
 VAR_23->exposure->flags |= VAR_16;

 FUNC_1(3, &VAR_23->auto_wb, 0, 0);
 FUNC_1(2, &VAR_23->auto_gain, 0, 1);
 FUNC_1(2, &VAR_23->auto_exp, 1, 1);
 FUNC_2(2, &VAR_23->hflip);

 VAR_21->sd.ctrl_handler = VAR_24;
 return 0;
}
