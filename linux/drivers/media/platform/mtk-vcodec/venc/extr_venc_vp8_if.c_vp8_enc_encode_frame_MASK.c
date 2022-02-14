
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_key_frm; } ;
struct venc_vp8_inst {TYPE_1__ vpu_inst; int frm_cnt; } ;
struct venc_frm_buf {int dummy; } ;
struct mtk_vcodec_mem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct venc_vp8_inst*,char*,unsigned int,...) ;
 int FUNC_1 (struct venc_vp8_inst*,char*,...) ;
 scalar_t__ FUNC_2 (struct venc_vp8_inst*,struct mtk_vcodec_mem*,unsigned int*) ;
 unsigned int FUNC_3 (struct venc_vp8_inst*) ;
 int FUNC_4 (TYPE_1__*,int ,struct venc_frm_buf*,struct mtk_vcodec_mem*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct venc_vp8_inst *VAR_3,
    struct venc_frm_buf *VAR_4,
    struct mtk_vcodec_mem *VAR_5,
    unsigned int *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;

 FUNC_0(VAR_3, "->frm_cnt=%d", VAR_3->frm_cnt);

 VAR_7 = FUNC_4(&VAR_3->vpu_inst, 0, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_3(VAR_3);
 if (VAR_8 != VAR_2) {
  FUNC_1(VAR_3, "irq_status=%d failed", VAR_8);
  return -VAR_1;
 }

 if (FUNC_2(VAR_3, VAR_5, VAR_6)) {
  FUNC_1(VAR_3, "vp8_enc_compose_one_frame failed");
  return -VAR_0;
 }

 VAR_3->frm_cnt++;
 FUNC_0(VAR_3, "<-size=%d key_frm=%d", *VAR_6,
    VAR_3->vpu_inst.is_key_frm);

 return VAR_7;
}
