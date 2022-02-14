
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl {int flags; } ;
struct TYPE_4__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct lm3646_flash {TYPE_2__ subdev_led; TYPE_1__* pdata; struct v4l2_ctrl_handler ctrls_led; } ;
struct TYPE_3__ {int flash_timeout; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct v4l2_ctrl_ops VAR_25 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct lm3646_flash *VAR_26)
{
 struct v4l2_ctrl *VAR_27;
 struct v4l2_ctrl_handler *VAR_28 = &VAR_26->ctrls_led;
 const struct v4l2_ctrl_ops *VAR_29 = &VAR_25;

 FUNC_0(VAR_28, 8);

 FUNC_2(VAR_28, VAR_29, VAR_11,
          VAR_23, ~0x7,
          VAR_22);


 FUNC_2(VAR_28, VAR_29, VAR_13,
          0x1, ~0x3, VAR_24);


 FUNC_1(VAR_28, VAR_29, VAR_12, 0, 0, 0, 0);

 FUNC_1(VAR_28, VAR_29, VAR_14, 0, 0, 0, 0);


 FUNC_1(VAR_28, VAR_29, VAR_15,
     VAR_1,
     VAR_0,
     VAR_2, VAR_26->pdata->flash_timeout);


 FUNC_1(VAR_28, VAR_29, VAR_10,
     VAR_4,
     VAR_3,
     VAR_5,
     VAR_3);


 FUNC_1(VAR_28, VAR_29, VAR_16,
     VAR_7,
     VAR_6,
     VAR_8,
     VAR_6);


 VAR_27 = FUNC_1(VAR_28, VAR_29, VAR_9, 0,
      VAR_19
      | VAR_18
      | VAR_20
      | VAR_21, 0, 0);
 if (VAR_27 != ((void*)0))
  VAR_27->flags |= VAR_17;

 if (VAR_28->error)
  return VAR_28->error;

 VAR_26->subdev_led.ctrl_handler = VAR_28;
 return 0;
}
