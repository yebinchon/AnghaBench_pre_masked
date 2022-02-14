
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


typedef int u32 ;
struct v4l2_ctrl {int flags; int id; int val; } ;
struct mtk_mdp_variant {int dummy; } ;
struct mtk_mdp_dev {struct mtk_mdp_variant* variant; } ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_12__ {int alpha; TYPE_3__ crop; } ;
struct TYPE_11__ {TYPE_4__* rotate; } ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_1__ crop; } ;
struct mtk_mdp_ctx {TYPE_6__ d_frame; int rotation; TYPE_5__ ctrls; TYPE_2__ s_frame; int vflip; int hflip; struct mtk_mdp_dev* mdp_dev; } ;
struct TYPE_10__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 struct mtk_mdp_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct mtk_mdp_variant*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct mtk_mdp_ctx*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_4)
{
 struct mtk_mdp_ctx *VAR_5 = FUNC_0(VAR_4);
 struct mtk_mdp_dev *VAR_6 = VAR_5->mdp_dev;
 struct mtk_mdp_variant *VAR_7 = VAR_6->variant;
 u32 VAR_8 = VAR_1 | VAR_2;
 int VAR_9 = 0;

 if (VAR_4->flags & VAR_3)
  return 0;

 switch (VAR_4->id) {
 case 130:
  VAR_5->hflip = VAR_4->val;
  break;
 case 128:
  VAR_5->vflip = VAR_4->val;
  break;
 case 129:
  if (FUNC_2(VAR_5, VAR_8)) {
   VAR_9 = FUNC_1(VAR_7,
     VAR_5->s_frame.crop.width,
     VAR_5->s_frame.crop.height,
     VAR_5->d_frame.crop.width,
     VAR_5->d_frame.crop.height,
     VAR_5->ctrls.rotate->val);

   if (VAR_9)
    return -VAR_0;
  }

  VAR_5->rotation = VAR_4->val;
  break;
 case 131:
  VAR_5->d_frame.alpha = VAR_4->val;
  break;
 }

 return 0;
}
