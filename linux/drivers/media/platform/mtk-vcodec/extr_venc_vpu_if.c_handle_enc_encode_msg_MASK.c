
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_ipi_msg_enc {int is_key_frm; int bs_size; int state; } ;
struct venc_vpu_inst {int is_key_frm; int bs_size; int state; } ;



__attribute__((used)) static void FUNC_0(struct venc_vpu_inst *VAR_0, void *VAR_1)
{
 struct venc_vpu_ipi_msg_enc *VAR_2 = VAR_1;

 VAR_0->state = VAR_2->state;
 VAR_0->bs_size = VAR_2->bs_size;
 VAR_0->is_key_frm = VAR_2->is_key_frm;
}
