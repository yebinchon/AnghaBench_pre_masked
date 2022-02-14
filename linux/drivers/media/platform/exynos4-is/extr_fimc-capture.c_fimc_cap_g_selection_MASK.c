
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_2__ r; } ;
struct fimc_frame {int height; int width; int offs_v; int offs_h; int o_height; int o_width; } ;
struct TYPE_3__ {struct fimc_ctx* ctx; } ;
struct fimc_dev {TYPE_1__ vid_cap; } ;
struct fimc_ctx {struct fimc_frame d_frame; struct fimc_frame s_frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 struct fimc_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_selection *VAR_4)
{
 struct fimc_dev *VAR_5 = FUNC_0(VAR_2);
 struct fimc_ctx *VAR_6 = VAR_5->vid_cap.ctx;
 struct fimc_frame *VAR_7 = &VAR_6->s_frame;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 switch (VAR_4->target) {
 case 131:
 case 132:
  VAR_7 = &VAR_6->d_frame;

 case 129:
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_7->o_width;
  VAR_4->r.height = VAR_7->o_height;
  return 0;

 case 133:
  VAR_7 = &VAR_6->d_frame;

 case 130:
  VAR_4->r.left = VAR_7->offs_h;
  VAR_4->r.top = VAR_7->offs_v;
  VAR_4->r.width = VAR_7->width;
  VAR_4->r.height = VAR_7->height;
  return 0;
 }

 return -VAR_0;
}
