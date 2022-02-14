
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl {int flags; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {TYPE_3__* ctrl_handler; } ;
struct adp1653_flash {TYPE_3__ ctrls; TYPE_2__ subdev; TYPE_1__* platform_data; void* indicator_intensity; void* torch_intensity; void* flash_intensity; void* flash_timeout; int led_mode; } ;
struct TYPE_6__ {int max_flash_timeout; int max_flash_intensity; int max_torch_intensity; int max_indicator_intensity; } ;


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
 int FUNC_0 (TYPE_3__*,int) ;
 void* FUNC_1 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct adp1653_flash *VAR_23)
{
 struct v4l2_ctrl *VAR_24;

 FUNC_0(&VAR_23->ctrls, 9);

 VAR_23->led_mode =
  FUNC_2(&VAR_23->ctrls, &VAR_22,
           VAR_10,
           VAR_20, ~0x7, 0);
 FUNC_2(&VAR_23->ctrls, &VAR_22,
          VAR_12,
          VAR_21, ~0x1, 0);
 FUNC_1(&VAR_23->ctrls, &VAR_22,
     VAR_11, 0, 0, 0, 0);
 FUNC_1(&VAR_23->ctrls, &VAR_22,
     VAR_13, 0, 0, 0, 0);
 VAR_23->flash_timeout =
  FUNC_1(&VAR_23->ctrls, &VAR_22,
      VAR_14, VAR_5,
      VAR_23->platform_data->max_flash_timeout,
      VAR_6,
      VAR_23->platform_data->max_flash_timeout);
 VAR_23->flash_intensity =
  FUNC_1(&VAR_23->ctrls, &VAR_22,
      VAR_9,
      VAR_0,
      VAR_23->platform_data->max_flash_intensity,
      1, VAR_23->platform_data->max_flash_intensity);
 VAR_23->torch_intensity =
  FUNC_1(&VAR_23->ctrls, &VAR_22,
      VAR_15,
      VAR_4,
      VAR_23->platform_data->max_torch_intensity,
      VAR_1,
      VAR_23->platform_data->max_torch_intensity);
 VAR_23->indicator_intensity =
  FUNC_1(&VAR_23->ctrls, &VAR_22,
      VAR_8,
      VAR_2,
      VAR_23->platform_data->max_indicator_intensity,
      VAR_3,
      VAR_2);
 VAR_24 = FUNC_1(&VAR_23->ctrls, &VAR_22,
      VAR_7, 0,
      VAR_18
      | VAR_17
      | VAR_19, 0, 0);

 if (VAR_23->ctrls.error)
  return VAR_23->ctrls.error;

 VAR_24->flags |= VAR_16;

 VAR_23->subdev.ctrl_handler = &VAR_23->ctrls;
 return 0;
}
