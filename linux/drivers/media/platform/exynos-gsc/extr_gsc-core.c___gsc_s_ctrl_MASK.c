
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_ctrl {int flags; int id; int val; } ;
struct gsc_variant {int dummy; } ;
struct gsc_dev {struct gsc_variant* variant; } ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_12__ {int alpha; TYPE_3__ crop; } ;
struct TYPE_11__ {TYPE_4__* rotate; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_1__ crop; } ;
struct gsc_ctx {unsigned int state; TYPE_6__ d_frame; int rotation; int out_path; TYPE_5__ gsc_ctrls; TYPE_2__ s_frame; int vflip; int hflip; struct gsc_dev* gsc_dev; } ;
struct TYPE_10__ {int val; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct gsc_variant*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gsc_ctx *VAR_5, struct v4l2_ctrl *VAR_6)
{
 struct gsc_dev *VAR_7 = VAR_5->gsc_dev;
 struct gsc_variant *VAR_8 = VAR_7->variant;
 unsigned int VAR_9 = VAR_1 | VAR_3;
 int VAR_10 = 0;

 if (VAR_6->flags & VAR_4)
  return 0;

 switch (VAR_6->id) {
 case 130:
  VAR_5->hflip = VAR_6->val;
  break;

 case 128:
  VAR_5->vflip = VAR_6->val;
  break;

 case 129:
  if ((VAR_5->state & VAR_9) == VAR_9) {
   VAR_10 = FUNC_0(VAR_8,
     VAR_5->s_frame.crop.width,
     VAR_5->s_frame.crop.height,
     VAR_5->d_frame.crop.width,
     VAR_5->d_frame.crop.height,
     VAR_5->gsc_ctrls.rotate->val,
     VAR_5->out_path);

   if (VAR_10)
    return -VAR_0;
  }

  VAR_5->rotation = VAR_6->val;
  break;

 case 131:
  VAR_5->d_frame.alpha = VAR_6->val;
  break;
 }

 VAR_5->state |= VAR_2;
 return 0;
}
