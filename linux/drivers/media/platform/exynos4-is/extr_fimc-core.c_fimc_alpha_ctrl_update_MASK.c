
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ val; } ;
struct v4l2_ctrl {scalar_t__ maximum; TYPE_2__ cur; } ;
struct fimc_dev {TYPE_4__* drv_data; } ;
struct TYPE_5__ {int fmt; } ;
struct TYPE_7__ {struct v4l2_ctrl* alpha; } ;
struct fimc_ctx {TYPE_1__ d_frame; TYPE_3__ ctrls; struct fimc_dev* fimc_dev; } ;
struct TYPE_8__ {int alpha_color; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl*) ;

void FUNC_3(struct fimc_ctx *VAR_0)
{
 struct fimc_dev *VAR_1 = VAR_0->fimc_dev;
 struct v4l2_ctrl *VAR_2 = VAR_0->ctrls.alpha;

 if (VAR_2 == ((void*)0) || !VAR_1->drv_data->alpha_color)
  return;

 FUNC_1(VAR_2);
 VAR_2->maximum = FUNC_0(VAR_0->d_frame.fmt);

 if (VAR_2->cur.val > VAR_2->maximum)
  VAR_2->cur.val = VAR_2->maximum;

 FUNC_2(VAR_2);
}
