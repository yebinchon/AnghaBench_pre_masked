
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; scalar_t__ which; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct fimc_frame {int f_height; int f_width; int height; int width; int offs_v; int offs_h; int o_height; int o_width; } ;
struct TYPE_2__ {struct fimc_ctx* ctx; } ;
struct fimc_dev {int lock; TYPE_1__ vid_cap; } ;
struct fimc_ctx {struct fimc_frame d_frame; struct fimc_frame s_frame; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fimc_dev* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 struct v4l2_rect* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
         struct v4l2_subdev_pad_config *VAR_4,
         struct v4l2_subdev_selection *VAR_5)
{
 struct fimc_dev *VAR_6 = FUNC_3(VAR_3);
 struct fimc_ctx *VAR_7 = VAR_6->vid_cap.ctx;
 struct fimc_frame *VAR_8 = &VAR_7->s_frame;
 struct v4l2_rect *VAR_9 = &VAR_5->r;
 struct v4l2_rect *VAR_10;

 if (VAR_5->pad == VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_6->lock);

 switch (VAR_5->target) {
 case 130:
  VAR_8 = &VAR_7->d_frame;

 case 128:
  VAR_9->width = VAR_8->o_width;
  VAR_9->height = VAR_8->o_height;
  VAR_9->left = 0;
  VAR_9->top = 0;
  FUNC_2(&VAR_6->lock);
  return 0;

 case 129:
  VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_5->pad);
  break;
 case 131:
  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5->pad);
  VAR_8 = &VAR_7->d_frame;
  break;
 default:
  FUNC_2(&VAR_6->lock);
  return -VAR_0;
 }

 if (VAR_5->which == VAR_2) {
  VAR_5->r = *VAR_10;
 } else {
  VAR_9->left = VAR_8->offs_h;
  VAR_9->top = VAR_8->offs_v;
  VAR_9->width = VAR_8->width;
  VAR_9->height = VAR_8->height;
 }

 FUNC_0("target %#x: l:%d, t:%d, %dx%d, f_w: %d, f_h: %d",
     VAR_5->pad, VAR_9->left, VAR_9->top, VAR_9->width, VAR_9->height,
     VAR_8->f_width, VAR_8->f_height);

 FUNC_2(&VAR_6->lock);
 return 0;
}
