
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_vsi {scalar_t__ sf_frm_cnt; scalar_t__ sf_frm_idx; } ;
struct vdec_vp9_inst {struct vdec_vp9_vsi* vsi; } ;



__attribute__((used)) static bool FUNC_0(struct vdec_vp9_inst *VAR_0)
{
 struct vdec_vp9_vsi *VAR_1 = VAR_0->vsi;

 if (VAR_1->sf_frm_cnt <= 0 || VAR_1->sf_frm_idx == VAR_1->sf_frm_cnt)
  return 1;

 return 0;
}
