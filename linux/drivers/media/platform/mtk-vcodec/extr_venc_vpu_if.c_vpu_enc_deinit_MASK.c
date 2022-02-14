
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_inst {int inst_addr; } ;
struct venc_ap_ipi_msg_deinit {int vpu_inst_addr; int msg_id; } ;
typedef int out ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venc_ap_ipi_msg_deinit*,int ,int) ;
 int FUNC_1 (struct venc_vpu_inst*) ;
 int FUNC_2 (struct venc_vpu_inst*) ;
 int FUNC_3 (struct venc_vpu_inst*,char*) ;
 scalar_t__ FUNC_4 (struct venc_vpu_inst*,struct venc_ap_ipi_msg_deinit*,int) ;

int FUNC_5(struct venc_vpu_inst *VAR_2)
{
 struct venc_ap_ipi_msg_deinit VAR_3;

 FUNC_1(VAR_2);

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.msg_id = VAR_0;
 VAR_3.vpu_inst_addr = VAR_2->inst_addr;
 if (FUNC_4(VAR_2, &VAR_3, sizeof(VAR_3))) {
  FUNC_3(VAR_2, "AP_IPIMSG_ENC_DEINIT fail");
  return -VAR_1;
 }

 FUNC_2(VAR_2);

 return 0;
}
