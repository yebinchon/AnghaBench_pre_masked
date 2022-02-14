
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_vsi {int sf_frm_idx; int frm_to_show_idx; int new_fb_idx; } ;
struct vdec_vp9_inst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vdec_vp9_inst*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct vdec_vp9_inst *VAR_2,
  struct vdec_vp9_vsi *VAR_3) {
 if (VAR_3->sf_frm_idx >= VAR_1 - 1) {
  FUNC_0(VAR_2, "Invalid vsi->sf_frm_idx=%u.",
    VAR_3->sf_frm_idx);
  return -VAR_0;
 }
 if (VAR_3->frm_to_show_idx >= VAR_1) {
  FUNC_0(VAR_2, "Invalid vsi->frm_to_show_idx=%u.",
    VAR_3->frm_to_show_idx);
  return -VAR_0;
 }
 if (VAR_3->new_fb_idx >= VAR_1) {
  FUNC_0(VAR_2, "Invalid vsi->new_fb_idx=%u.",
    VAR_3->new_fb_idx);
  return -VAR_0;
 }
 return 0;
}
