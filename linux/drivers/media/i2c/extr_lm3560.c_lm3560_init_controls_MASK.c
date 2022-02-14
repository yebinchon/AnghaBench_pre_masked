
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl {int flags; } ;
struct lm3560_flash {TYPE_2__* subdev_led; TYPE_1__* pdata; int led_mode; struct v4l2_ctrl_handler* ctrls_led; } ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;
struct TYPE_4__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_3__ {int* max_flash_brt; int* max_torch_brt; int max_flash_timeout; } ;


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
 struct v4l2_ctrl_ops* VAR_22 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct lm3560_flash *VAR_23,
    enum lm3560_led_id VAR_24)
{
 struct v4l2_ctrl *VAR_25;
 u32 VAR_26 = VAR_23->pdata->max_flash_brt[VAR_24];
 u32 VAR_27 = VAR_23->pdata->max_torch_brt[VAR_24];
 struct v4l2_ctrl_handler *VAR_28 = &VAR_23->ctrls_led[VAR_24];
 const struct v4l2_ctrl_ops *VAR_29 = &VAR_22[VAR_24];

 FUNC_0(VAR_28, 8);


 FUNC_2(VAR_28, VAR_29, VAR_8,
          VAR_20, ~0x7,
          VAR_19);
 VAR_23->led_mode = VAR_19;


 FUNC_2(VAR_28, VAR_29, VAR_10,
          0x1, ~0x3, VAR_21);


 FUNC_1(VAR_28, VAR_29, VAR_9, 0, 0, 0, 0);


 FUNC_1(VAR_28, VAR_29, VAR_11, 0, 0, 0, 0);


 FUNC_1(VAR_28, VAR_29, VAR_12,
     VAR_2,
     VAR_23->pdata->max_flash_timeout,
     VAR_3,
     VAR_23->pdata->max_flash_timeout);


 FUNC_1(VAR_28, VAR_29, VAR_7,
     VAR_0, VAR_26,
     VAR_1, VAR_26);


 FUNC_1(VAR_28, VAR_29, VAR_13,
     VAR_4, VAR_27,
     VAR_5, VAR_27);


 VAR_25 = FUNC_1(VAR_28, VAR_29, VAR_6, 0,
      VAR_16
      | VAR_15
      | VAR_17
      | VAR_18, 0, 0);
 if (VAR_25 != ((void*)0))
  VAR_25->flags |= VAR_14;

 if (VAR_28->error)
  return VAR_28->error;

 VAR_23->subdev_led[VAR_24].ctrl_handler = VAR_28;
 return 0;
}
