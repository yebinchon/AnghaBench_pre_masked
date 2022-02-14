
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_8__ {int type; } ;
struct fimc_ctrls {int ready; int colorfx; void* colorfx_cbcr; int * alpha; void* vflip; void* hflip; void* rotate; struct v4l2_ctrl_handler handler; } ;
struct TYPE_5__ {int fmt; } ;
struct fimc_ctx {TYPE_4__ effect; TYPE_3__* fimc_dev; struct fimc_ctrls ctrls; TYPE_1__ d_frame; } ;
struct TYPE_7__ {TYPE_2__* drv_data; } ;
struct TYPE_6__ {scalar_t__ alpha_color; } ;


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
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;

int FUNC_5(struct fimc_ctx *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_10->d_frame.fmt);
 struct fimc_ctrls *VAR_12 = &VAR_10->ctrls;
 struct v4l2_ctrl_handler *VAR_13 = &VAR_12->handler;

 if (VAR_10->ctrls.ready)
  return 0;

 FUNC_2(VAR_13, 6);

 VAR_12->rotate = FUNC_3(VAR_13, &VAR_9,
     VAR_5, 0, 270, 90, 0);
 VAR_12->hflip = FUNC_3(VAR_13, &VAR_9,
     VAR_4, 0, 1, 1, 0);
 VAR_12->vflip = FUNC_3(VAR_13, &VAR_9,
     VAR_6, 0, 1, 1, 0);

 if (VAR_10->fimc_dev->drv_data->alpha_color)
  VAR_12->alpha = FUNC_3(VAR_13, &VAR_9,
     VAR_1,
     0, VAR_11, 1, 0);
 else
  VAR_12->alpha = ((void*)0);

 VAR_12->colorfx = FUNC_4(VAR_13, &VAR_9,
    VAR_2, VAR_8,
    ~0x983f, VAR_7);

 VAR_12->colorfx_cbcr = FUNC_3(VAR_13, &VAR_9,
    VAR_3, 0, 0xffff, 1, 0);

 VAR_10->effect.type = VAR_0;

 if (!VAR_13->error) {
  FUNC_1(2, &VAR_12->colorfx);
  VAR_12->ready = 1;
 }

 return VAR_13->error;
}
