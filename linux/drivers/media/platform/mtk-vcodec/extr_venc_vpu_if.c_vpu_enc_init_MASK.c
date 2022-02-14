
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_inst {int id; int dev; scalar_t__ failure; scalar_t__ signaled; int wq_hd; } ;
struct venc_ap_ipi_msg_init {unsigned long venc_inst; int msg_id; } ;
typedef int out ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct venc_ap_ipi_msg_init*,int ,int) ;
 int FUNC_2 (struct venc_vpu_inst*) ;
 int FUNC_3 (struct venc_vpu_inst*) ;
 int FUNC_4 (struct venc_vpu_inst*,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct venc_vpu_inst*,struct venc_ap_ipi_msg_init*,int) ;
 int FUNC_6 (int ,int ,int ,int *,int *) ;

int FUNC_7(struct venc_vpu_inst *VAR_3)
{
 int VAR_4;
 struct venc_ap_ipi_msg_init VAR_5;

 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->wq_hd);
 VAR_3->signaled = 0;
 VAR_3->failure = 0;

 VAR_4 = FUNC_6(VAR_3->dev, VAR_3->id, VAR_2,
      ((void*)0), ((void*)0));
 if (VAR_4) {
  FUNC_4(VAR_3, "vpu_ipi_register fail %d", VAR_4);
  return -VAR_1;
 }

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.msg_id = VAR_0;
 VAR_5.venc_inst = (unsigned long)VAR_3;
 if (FUNC_5(VAR_3, &VAR_5, sizeof(VAR_5))) {
  FUNC_4(VAR_3, "AP_IPIMSG_ENC_INIT fail");
  return -VAR_1;
 }

 FUNC_3(VAR_3);

 return 0;
}
