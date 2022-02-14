
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_rect {scalar_t__ top; scalar_t__ left; scalar_t__ width; scalar_t__ height; } ;
struct mtk_mdp_variant {TYPE_3__* pix_min; TYPE_2__* pix_align; } ;
struct mtk_mdp_frame {scalar_t__ width; scalar_t__ height; } ;
struct mtk_mdp_dev {TYPE_1__* pdev; struct mtk_mdp_variant* variant; } ;
struct TYPE_10__ {TYPE_4__* rotate; } ;
struct mtk_mdp_ctx {int id; TYPE_5__ ctrls; struct mtk_mdp_dev* mdp_dev; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {scalar_t__ target_rot_en_w; scalar_t__ target_rot_en_h; scalar_t__ target_rot_dis_w; scalar_t__ target_rot_dis_h; } ;
struct TYPE_7__ {scalar_t__ target_w; scalar_t__ target_h; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 struct mtk_mdp_frame* FUNC_4 (struct mtk_mdp_ctx*,scalar_t__) ;
 int FUNC_5 (int,char*,int ,scalar_t__,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_6(struct mtk_mdp_ctx *VAR_1, u32 VAR_2,
       struct v4l2_rect *VAR_3)
{
 struct mtk_mdp_frame *VAR_4;
 struct mtk_mdp_dev *VAR_5 = VAR_1->mdp_dev;
 struct mtk_mdp_variant *VAR_6 = VAR_5->variant;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_3->top < 0 || VAR_3->left < 0) {
  FUNC_1(&VAR_1->mdp_dev->pdev->dev,
   "doesn't support negative values for top & left\n");
  return -VAR_0;
 }

 FUNC_5(2, "[%d] type:%d, set wxh:%dx%d", VAR_1->id, VAR_2,
      VAR_3->width, VAR_3->height);

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 VAR_13 = VAR_4->width;
 VAR_14 = VAR_4->height;
 VAR_9 = VAR_3->width;
 VAR_10 = VAR_3->height;

 if (FUNC_0(VAR_2)) {
  VAR_7 = 1;
  VAR_8 = 1;
  VAR_11 = 64;
  VAR_12 = 32;
 } else {
  VAR_7 = VAR_6->pix_align->target_w;
  VAR_8 = VAR_6->pix_align->target_h;
  if (VAR_1->ctrls.rotate->val == 90 ||
      VAR_1->ctrls.rotate->val == 270) {
   VAR_13 = VAR_4->height;
   VAR_14 = VAR_4->width;
   VAR_11 = VAR_6->pix_min->target_rot_en_w;
   VAR_12 = VAR_6->pix_min->target_rot_en_h;
   VAR_9 = VAR_3->height;
   VAR_10 = VAR_3->width;
  } else {
   VAR_11 = VAR_6->pix_min->target_rot_dis_w;
   VAR_12 = VAR_6->pix_min->target_rot_dis_h;
  }
 }

 FUNC_5(2, "[%d] align:%dx%d, min:%dx%d, new:%dx%d", VAR_1->id,
      VAR_7, VAR_8, VAR_11, VAR_12, VAR_9, VAR_10);

 FUNC_2(&VAR_9, VAR_11, VAR_13, VAR_7,
      &VAR_10, VAR_12, VAR_14, VAR_8);

 if (!FUNC_0(VAR_2) &&
  (VAR_1->ctrls.rotate->val == 90 ||
  VAR_1->ctrls.rotate->val == 270))
  FUNC_3(VAR_10, VAR_9,
       &VAR_3->width, &VAR_3->height);
 else
  FUNC_3(VAR_9, VAR_10,
       &VAR_3->width, &VAR_3->height);



 if (VAR_3->left + VAR_9 > VAR_13)
  VAR_3->left = VAR_13 - VAR_9;
 if (VAR_3->top + VAR_10 > VAR_14)
  VAR_3->top = VAR_14 - VAR_10;

 if (VAR_3->left & 1)
  VAR_3->left -= 1;

 FUNC_5(2, "[%d] crop l,t,w,h:%d,%d,%d,%d, max:%dx%d", VAR_1->id,
      VAR_3->left, VAR_3->top, VAR_3->width,
      VAR_3->height, VAR_13, VAR_14);
 return 0;
}
