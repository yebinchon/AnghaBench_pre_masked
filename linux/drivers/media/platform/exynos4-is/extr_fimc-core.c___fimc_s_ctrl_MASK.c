
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl {int flags; int id; int val; } ;
struct fimc_variant {int has_out_rot; } ;
struct fimc_dev {int state; struct fimc_variant* variant; } ;
struct TYPE_4__ {int alpha; int height; int width; } ;
struct TYPE_3__ {int height; int width; } ;
struct fimc_ctx {int hflip; int vflip; int rotation; int state; TYPE_2__ d_frame; TYPE_1__ s_frame; struct fimc_dev* fimc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (struct fimc_dev*) ;
 int FUNC_1 (struct fimc_ctx*,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct fimc_ctx*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fimc_ctx *VAR_4, struct v4l2_ctrl *VAR_5)
{
 struct fimc_dev *VAR_6 = VAR_4->fimc_dev;
 const struct fimc_variant *VAR_7 = VAR_6->variant;
 int VAR_8 = 0;

 if (VAR_5->flags & VAR_3)
  return 0;

 switch (VAR_5->id) {
 case 130:
  VAR_4->hflip = VAR_5->val;
  break;

 case 128:
  VAR_4->vflip = VAR_5->val;
  break;

 case 129:
  if (FUNC_0(VAR_6)) {
   VAR_8 = FUNC_1(VAR_4, VAR_4->s_frame.width,
     VAR_4->s_frame.height, VAR_4->d_frame.width,
     VAR_4->d_frame.height, VAR_5->val);
   if (VAR_8)
    return -VAR_0;
  }
  if ((VAR_5->val == 90 || VAR_5->val == 270) &&
      !VAR_7->has_out_rot)
   return -VAR_0;

  VAR_4->rotation = VAR_5->val;
  break;

 case 132:
  VAR_4->d_frame.alpha = VAR_5->val;
  break;

 case 131:
  VAR_8 = FUNC_2(VAR_4, VAR_5->val);
  if (VAR_8)
   return VAR_8;
  break;
 }

 VAR_4->state |= VAR_1;
 FUNC_3(VAR_2, &VAR_6->state);
 return 0;
}
