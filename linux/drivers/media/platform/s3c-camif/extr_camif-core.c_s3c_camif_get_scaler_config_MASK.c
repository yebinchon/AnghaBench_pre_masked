
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_2__ rect; } ;
struct camif_vp {int rotation; TYPE_3__ out_frame; TYPE_1__* camif; } ;
struct camif_scaler {int pre_h_ratio; int h_shift; int pre_v_ratio; int v_shift; int pre_dst_width; int pre_dst_height; int main_h_ratio; int main_v_ratio; int scaleup_h; int scaleup_v; scalar_t__ copy; } ;
struct TYPE_4__ {struct v4l2_rect camif_crop; } ;


 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (char*,int,int,int,int,...) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct camif_vp *VAR_0,
    struct camif_scaler *VAR_1)
{
 struct v4l2_rect *VAR_2 = &VAR_0->camif->camif_crop;
 int VAR_3 = VAR_2->width;
 int VAR_4 = VAR_2->height;
 int VAR_5 = VAR_0->out_frame.rect.width;
 int VAR_6 = VAR_0->out_frame.rect.height;
 int VAR_7;

 if (VAR_0->rotation == 90 || VAR_0->rotation == 270)
  FUNC_2(VAR_5, VAR_6);

 VAR_7 = FUNC_0(VAR_3, VAR_5, &VAR_1->pre_h_ratio,
          &VAR_1->h_shift);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_6, &VAR_1->pre_v_ratio,
          &VAR_1->v_shift);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_1->pre_dst_width = VAR_3 / VAR_1->pre_h_ratio;
 VAR_1->pre_dst_height = VAR_4 / VAR_1->pre_v_ratio;

 VAR_1->main_h_ratio = (VAR_3 << 8) / (VAR_5 << VAR_1->h_shift);
 VAR_1->main_v_ratio = (VAR_4 << 8) / (VAR_6 << VAR_1->v_shift);

 VAR_1->scaleup_h = (VAR_5 >= VAR_3);
 VAR_1->scaleup_v = (VAR_6 >= VAR_4);

 VAR_1->copy = 0;

 FUNC_1("H: ratio: %u, shift: %u. V: ratio: %u, shift: %u.\n",
   VAR_1->pre_h_ratio, VAR_1->h_shift,
   VAR_1->pre_v_ratio, VAR_1->v_shift);

 FUNC_1("Source: %dx%d, Target: %dx%d, scaleup_h/v: %d/%d\n",
   VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_1->scaleup_h, VAR_1->scaleup_v);

 return 0;
}
