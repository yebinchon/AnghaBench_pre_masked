
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdec_vp9_vsi {TYPE_3__* sf_ref_fb; } ;
struct vdec_vp9_inst {int ctx; struct vdec_vp9_vsi* vsi; } ;
struct TYPE_5__ {scalar_t__ va; } ;
struct TYPE_4__ {TYPE_2__ base_c; TYPE_2__ base_y; } ;
struct TYPE_6__ {scalar_t__ used; TYPE_1__ fb; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct vdec_vp9_inst *VAR_0)
{
 int VAR_1;
 struct vdec_vp9_vsi *VAR_2 = VAR_0->vsi;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2->sf_ref_fb); VAR_1++) {
  if (VAR_2->sf_ref_fb[VAR_1].fb.base_y.va) {
   FUNC_1(VAR_0->ctx,
    &VAR_2->sf_ref_fb[VAR_1].fb.base_y);
   FUNC_1(VAR_0->ctx,
    &VAR_2->sf_ref_fb[VAR_1].fb.base_c);
   VAR_2->sf_ref_fb[VAR_1].used = 0;
  }
 }
}
