
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int flags; struct v4l2_rect r; int target; } ;
struct fimc_frame {int dummy; } ;
struct TYPE_2__ {struct fimc_ctx* ctx; } ;
struct fimc_dev {int state; int slock; TYPE_1__ vid_cap; } ;
struct fimc_ctx {struct fimc_frame s_frame; struct fimc_frame d_frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_rect*,struct v4l2_rect*) ;
 int FUNC_1 (struct fimc_ctx*,struct v4l2_rect*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fimc_frame*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct fimc_dev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_8, void *VAR_9,
    struct v4l2_selection *VAR_10)
{
 struct fimc_dev *VAR_11 = FUNC_6(VAR_8);
 struct fimc_ctx *VAR_12 = VAR_11->vid_cap.ctx;
 struct v4l2_rect VAR_13 = VAR_10->r;
 struct fimc_frame *VAR_14;
 unsigned long VAR_15;

 if (VAR_10->type != VAR_3)
  return -VAR_0;

 if (VAR_10->target == VAR_6)
  VAR_14 = &VAR_12->d_frame;
 else if (VAR_10->target == VAR_7)
  VAR_14 = &VAR_12->s_frame;
 else
  return -VAR_0;

 FUNC_1(VAR_12, &VAR_13, VAR_10->target);

 if (VAR_10->flags & VAR_5 &&
     !FUNC_0(&VAR_13, &VAR_10->r))
  return -VAR_1;

 if (VAR_10->flags & VAR_4 &&
     !FUNC_0(&VAR_10->r, &VAR_13))
  return -VAR_1;

 VAR_10->r = VAR_13;
 FUNC_4(&VAR_11->slock, VAR_15);
 FUNC_3(VAR_14, VAR_10->r.left, VAR_10->r.top, VAR_10->r.width,
         VAR_10->r.height);
 FUNC_5(&VAR_11->slock, VAR_15);

 FUNC_2(VAR_2, &VAR_11->state);
 return 0;
}
