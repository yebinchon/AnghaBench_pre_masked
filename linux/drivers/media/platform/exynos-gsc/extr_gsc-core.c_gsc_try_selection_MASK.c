
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


typedef scalar_t__ u32 ;
struct TYPE_12__ {scalar_t__ top; int left; scalar_t__ width; scalar_t__ height; } ;
struct v4l2_selection {scalar_t__ type; TYPE_6__ r; } ;
struct gsc_variant {TYPE_2__* pix_min; TYPE_1__* pix_align; } ;
struct gsc_frame {scalar_t__ f_width; scalar_t__ f_height; TYPE_5__* fmt; } ;
struct gsc_dev {struct gsc_variant* variant; } ;
struct TYPE_10__ {TYPE_3__* rotate; } ;
struct gsc_ctx {TYPE_4__ gsc_ctrls; struct gsc_frame s_frame; struct gsc_frame d_frame; struct gsc_dev* gsc_dev; } ;
struct TYPE_11__ {int num_comp; int color; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {scalar_t__ target_rot_en_w; scalar_t__ target_rot_en_h; scalar_t__ target_rot_dis_w; scalar_t__ target_rot_dis_h; } ;
struct TYPE_7__ {int target_h; int target_w; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,scalar_t__,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__,scalar_t__,scalar_t__,int ) ;

int FUNC_9(struct gsc_ctx *VAR_3, struct v4l2_selection *VAR_4)
{
 struct gsc_frame *VAR_5;
 struct gsc_dev *VAR_6 = VAR_3->gsc_dev;
 struct gsc_variant *VAR_7 = VAR_6->variant;
 u32 VAR_8 = 0, VAR_9 = 0, VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_4->r.top < 0 || VAR_4->r.left < 0) {
  FUNC_7("doesn't support negative values for top & left\n");
  return -VAR_0;
 }
 FUNC_6("user put w: %d, h: %d", VAR_4->r.width, VAR_4->r.height);

 if (VAR_4->type == VAR_1)
  VAR_5 = &VAR_3->d_frame;
 else if (VAR_4->type == VAR_2)
  VAR_5 = &VAR_3->s_frame;
 else
  return -VAR_0;

 VAR_14 = VAR_5->f_width;
 VAR_15 = VAR_5->f_height;
 VAR_10 = VAR_4->r.width;
 VAR_11 = VAR_4->r.height;

 if (FUNC_0(VAR_4->type)) {
  if ((FUNC_5(VAR_5->fmt->color) && VAR_5->fmt->num_comp == 1) ||
      FUNC_3(VAR_5->fmt->color))
   VAR_12 = 32;
  else
   VAR_12 = 64;
  if ((FUNC_5(VAR_5->fmt->color) && VAR_5->fmt->num_comp == 3) ||
      FUNC_4(VAR_5->fmt->color))
   VAR_13 = 32;
  else
   VAR_13 = 16;
 } else {
  if (FUNC_4(VAR_5->fmt->color) || FUNC_5(VAR_5->fmt->color))
   VAR_8 = FUNC_1(VAR_7->pix_align->target_w) - 1;
  if (FUNC_4(VAR_5->fmt->color))
   VAR_9 = FUNC_1(VAR_7->pix_align->target_h) - 1;
  if (VAR_3->gsc_ctrls.rotate->val == 90 ||
      VAR_3->gsc_ctrls.rotate->val == 270) {
   VAR_14 = VAR_5->f_height;
   VAR_15 = VAR_5->f_width;
   VAR_12 = VAR_7->pix_min->target_rot_en_w;
   VAR_13 = VAR_7->pix_min->target_rot_en_h;
   VAR_10 = VAR_4->r.height;
   VAR_11 = VAR_4->r.width;
  } else {
   VAR_12 = VAR_7->pix_min->target_rot_dis_w;
   VAR_13 = VAR_7->pix_min->target_rot_dis_h;
  }
 }
 FUNC_6("mod_x: %d, mod_y: %d, min_w: %d, min_h = %d",
     VAR_8, VAR_9, VAR_12, VAR_13);
 FUNC_6("tmp_w : %d, tmp_h : %d", VAR_10, VAR_11);

 FUNC_8(&VAR_10, VAR_12, VAR_14, VAR_8,
         &VAR_11, VAR_13, VAR_15, VAR_9, 0);

 if (!FUNC_0(VAR_4->type) &&
     (VAR_3->gsc_ctrls.rotate->val == 90 ||
      VAR_3->gsc_ctrls.rotate->val == 270))
  FUNC_2(VAR_11, VAR_10,
     &VAR_4->r.width, &VAR_4->r.height);
 else
  FUNC_2(VAR_10, VAR_11,
     &VAR_4->r.width, &VAR_4->r.height);




 if (VAR_4->r.left + VAR_10 > VAR_14)
  VAR_4->r.left = VAR_14 - VAR_10;
 if (VAR_4->r.top + VAR_11 > VAR_15)
  VAR_4->r.top = VAR_15 - VAR_11;

 if ((FUNC_4(VAR_5->fmt->color) || FUNC_5(VAR_5->fmt->color)) &&
     VAR_4->r.left & 1)
  VAR_4->r.left -= 1;

 FUNC_6("Aligned l:%d, t:%d, w:%d, h:%d, f_w: %d, f_h: %d",
   VAR_4->r.left, VAR_4->r.top, VAR_4->r.width, VAR_4->r.height, VAR_14, VAR_15);

 return 0;
}
