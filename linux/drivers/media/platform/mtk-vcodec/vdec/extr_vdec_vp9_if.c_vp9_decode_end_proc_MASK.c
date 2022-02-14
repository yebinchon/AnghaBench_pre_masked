
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vp9_vsi {int frm_num; int pic_h; int pic_w; int show_existing_frame; } ;
struct vdec_vp9_inst {int vpu; struct vdec_vp9_vsi* vsi; } ;


 int FUNC_0 (struct vdec_vp9_inst*,char*,int ,...) ;
 int FUNC_1 (struct vdec_vp9_inst*,char*,...) ;
 int FUNC_2 (struct vdec_vp9_inst*) ;
 int FUNC_3 (struct vdec_vp9_inst*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct vdec_vp9_inst *VAR_0)
{
 struct vdec_vp9_vsi *VAR_1 = VAR_0->vsi;
 bool VAR_2 = 0;

 if (!VAR_1->show_existing_frame) {
  VAR_2 = FUNC_3(VAR_0);
  if (!VAR_2) {
   FUNC_1(VAR_0, "Decode failed, Decode Timeout @[%d]",
    VAR_1->frm_num);
   return 0;
  }

  if (FUNC_4(&VAR_0->vpu)) {
   FUNC_1(VAR_0, "vp9_dec_vpu_end failed");
   return 0;
  }
  FUNC_0(VAR_0, "Decode Ok @%d (%d/%d)", VAR_1->frm_num,
    VAR_1->pic_w, VAR_1->pic_h);
 } else {
  FUNC_0(VAR_0, "Decode Ok @%d (show_existing_frame)",
    VAR_1->frm_num);
 }

 FUNC_2(VAR_0);
 VAR_1->frm_num++;
 return 1;
}
