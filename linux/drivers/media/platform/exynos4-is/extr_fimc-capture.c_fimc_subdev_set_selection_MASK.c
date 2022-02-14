
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; scalar_t__ which; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct fimc_frame {int dummy; } ;
struct TYPE_2__ {struct fimc_ctx* ctx; } ;
struct fimc_dev {int lock; int slock; int state; TYPE_1__ vid_cap; } ;
struct fimc_ctx {int state; struct fimc_frame d_frame; struct fimc_frame s_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int const,int ,int ,int ,int ) ;
 int FUNC_1 (struct fimc_ctx*,struct v4l2_rect*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct fimc_frame*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct fimc_dev* FUNC_8 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_9 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 struct v4l2_rect* FUNC_10 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         struct v4l2_subdev_selection *VAR_7)
{
 struct fimc_dev *VAR_8 = FUNC_8(VAR_5);
 struct fimc_ctx *VAR_9 = VAR_8->vid_cap.ctx;
 struct fimc_frame *VAR_10 = &VAR_9->s_frame;
 struct v4l2_rect *VAR_11 = &VAR_7->r;
 struct v4l2_rect *VAR_12;
 unsigned long VAR_13;

 if (VAR_7->pad == VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_8->lock);
 FUNC_1(VAR_9, VAR_11, 128);

 switch (VAR_7->target) {
 case 128:
  VAR_12 = FUNC_10(VAR_5, VAR_6, VAR_7->pad);
  break;
 case 129:
  VAR_12 = FUNC_9(VAR_5, VAR_6, VAR_7->pad);
  VAR_10 = &VAR_9->d_frame;
  break;
 default:
  FUNC_3(&VAR_8->lock);
  return -VAR_0;
 }

 if (VAR_7->which == VAR_4) {
  *VAR_12 = VAR_7->r;
 } else {
  FUNC_6(&VAR_8->slock, VAR_13);
  FUNC_5(VAR_10, VAR_11->left, VAR_11->top, VAR_11->width, VAR_11->height);
  FUNC_4(VAR_3, &VAR_8->state);
  if (VAR_7->target == 129)
   VAR_9->state |= VAR_1;
  FUNC_7(&VAR_8->slock, VAR_13);
 }

 FUNC_0("target %#x: (%d,%d)/%dx%d", VAR_7->target, VAR_11->left, VAR_11->top,
     VAR_11->width, VAR_11->height);

 FUNC_3(&VAR_8->lock);
 return 0;
}
