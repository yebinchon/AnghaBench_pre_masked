
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vp9_fb_info {TYPE_4__* fb; } ;
struct vdec_vp9_vsi {int refresh_frm_flags; size_t new_fb_idx; int sf_frm_cnt; int sf_frm_idx; int sf_next_ref_fb_idx; TYPE_3__* frm_bufs; scalar_t__ show_frame; int * ref_frm_map; } ;
struct vdec_vp9_inst {TYPE_4__* cur_fb; struct vdec_vp9_vsi* vsi; } ;
struct vdec_fb {int dummy; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ va; } ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ va; } ;
struct TYPE_10__ {TYPE_2__ base_y; TYPE_1__ base_c; } ;
struct TYPE_9__ {scalar_t__ ref_cnt; struct vp9_fb_info buf; } ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (struct vdec_vp9_inst*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct vdec_vp9_inst*,TYPE_4__*) ;
 int FUNC_3 (struct vdec_vp9_inst*,struct vdec_fb*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct vdec_vp9_inst*) ;
 int FUNC_6 (struct vdec_vp9_inst*,TYPE_4__*) ;
 int FUNC_7 (struct vdec_vp9_inst*,int *,size_t) ;
 struct vdec_fb* FUNC_8 (struct vdec_vp9_inst*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct vdec_vp9_inst *VAR_0)
{
 struct vdec_vp9_vsi *VAR_1 = VAR_0->vsi;
 struct vp9_fb_info *VAR_2;
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = VAR_1->refresh_frm_flags; VAR_4; VAR_4 >>= 1) {
  if (VAR_4 & 1)
   FUNC_7(VAR_0, &VAR_1->ref_frm_map[VAR_3],
           VAR_1->new_fb_idx);
  ++VAR_3;
 }

 VAR_2 = &VAR_1->frm_bufs[VAR_1->new_fb_idx].buf;
 VAR_1->frm_bufs[VAR_1->new_fb_idx].ref_cnt--;

 if (VAR_2->fb != VAR_0->cur_fb) {




  if ((VAR_2->fb != ((void*)0)) &&
   (VAR_0->cur_fb->base_y.size >=
   VAR_2->fb->base_y.size) &&
   (VAR_0->cur_fb->base_c.size >=
   VAR_2->fb->base_c.size)) {
   FUNC_0((void *)VAR_0->cur_fb->base_y.va,
    (void *)VAR_2->fb->base_y.va,
    VAR_2->fb->base_y.size);
   FUNC_0((void *)VAR_0->cur_fb->base_c.va,
    (void *)VAR_2->fb->base_c.va,
    VAR_2->fb->base_c.size);
  } else {




   if (VAR_2->fb != ((void*)0))
    FUNC_1(VAR_0,
     "inst->cur_fb->base_y.size=%zu, frm_to_show->fb.base_y.size=%zu",
     VAR_0->cur_fb->base_y.size,
     VAR_2->fb->base_y.size);
  }
  if (!FUNC_6(VAR_0, VAR_0->cur_fb)) {
   if (VAR_1->show_frame)
    FUNC_2(VAR_0, VAR_0->cur_fb);
  }
 } else {
  if (!FUNC_6(VAR_0, VAR_0->cur_fb)) {
   if (VAR_1->show_frame)
    FUNC_2(VAR_0, VAR_2->fb);
  }
 }




 if (VAR_1->frm_bufs[VAR_1->new_fb_idx].ref_cnt == 0) {
  if (!FUNC_6(
   VAR_0, VAR_1->frm_bufs[VAR_1->new_fb_idx].buf.fb)) {
   struct vdec_fb *VAR_5;

   VAR_5 = FUNC_8(VAR_0,
   VAR_1->frm_bufs[VAR_1->new_fb_idx].buf.fb->base_y.va);

   FUNC_3(VAR_0, VAR_5);
  } else {
   FUNC_4(
    VAR_1->frm_bufs[VAR_1->new_fb_idx].buf.fb);
  }
 }




 if (VAR_1->sf_frm_cnt > 0 && VAR_1->sf_frm_idx != VAR_1->sf_frm_cnt - 1)
  VAR_1->sf_next_ref_fb_idx = FUNC_5(VAR_0);
}
