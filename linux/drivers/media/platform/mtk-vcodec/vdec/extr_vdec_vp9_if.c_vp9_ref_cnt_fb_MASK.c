
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vdec_vp9_vsi {TYPE_3__* frm_bufs; } ;
struct vdec_vp9_inst {struct vdec_vp9_vsi* vsi; } ;
struct vdec_fb {int dummy; } ;
struct TYPE_6__ {int va; } ;
struct TYPE_9__ {TYPE_1__ base_y; } ;
struct TYPE_7__ {TYPE_4__* fb; } ;
struct TYPE_8__ {scalar_t__ ref_cnt; TYPE_2__ buf; } ;


 int FUNC_0 (struct vdec_vp9_inst*,struct vdec_fb*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct vdec_vp9_inst*,TYPE_4__*) ;
 struct vdec_fb* FUNC_3 (struct vdec_vp9_inst*,int ) ;

__attribute__((used)) static void FUNC_4(struct vdec_vp9_inst *VAR_0, int *VAR_1,
      int VAR_2)
{
 struct vdec_vp9_vsi *VAR_3 = VAR_0->vsi;
 int VAR_4 = *VAR_1;

 if (VAR_4 >= 0 && VAR_3->frm_bufs[VAR_4].ref_cnt > 0) {
  VAR_3->frm_bufs[VAR_4].ref_cnt--;

  if (VAR_3->frm_bufs[VAR_4].ref_cnt == 0) {
   if (!FUNC_2(VAR_0,
           VAR_3->frm_bufs[VAR_4].buf.fb)) {
    struct vdec_fb *VAR_5;

    VAR_5 = FUNC_3(VAR_0,
         VAR_3->frm_bufs[VAR_4].buf.fb->base_y.va);
    FUNC_0(VAR_0, VAR_5);
   } else
    FUNC_1(
     VAR_3->frm_bufs[VAR_4].buf.fb);
  }
 }

 *VAR_1 = VAR_2;
 VAR_3->frm_bufs[VAR_2].ref_cnt++;
}
