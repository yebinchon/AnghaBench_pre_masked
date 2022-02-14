
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_vp9_vsi {TYPE_1__* sf_ref_fb; } ;
struct vdec_vp9_inst {struct vdec_vp9_vsi* vsi; } ;
struct vdec_fb {int dummy; } ;
struct TYPE_2__ {struct vdec_fb fb; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(struct vdec_vp9_inst *VAR_0, struct vdec_fb *VAR_1)
{
 int VAR_2;
 struct vdec_vp9_vsi *VAR_3 = VAR_0->vsi;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->sf_ref_fb); VAR_2++) {
  if (VAR_1 == &VAR_3->sf_ref_fb[VAR_2].fb)
   return 1;
 }
 return 0;
}
