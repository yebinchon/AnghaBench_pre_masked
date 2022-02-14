
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vpu_inst {int handler; int id; int dev; int wq; } ;
struct vdec_ap_ipi_init {unsigned long ap_inst_addr; int msg_id; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vdec_ap_ipi_init*,int ,int) ;
 int FUNC_2 (struct vdec_vpu_inst*,char*,...) ;
 int FUNC_3 (struct vdec_vpu_inst*) ;
 int FUNC_4 (struct vdec_vpu_inst*,char*,int) ;
 int FUNC_5 (struct vdec_vpu_inst*,void*,int) ;
 int FUNC_6 (int ,int ,int ,char*,int *) ;

int FUNC_7(struct vdec_vpu_inst *VAR_1)
{
 struct vdec_ap_ipi_init VAR_2;
 int VAR_3;

 FUNC_3(VAR_1);

 FUNC_0(&VAR_1->wq);

 VAR_3 = FUNC_6(VAR_1->dev, VAR_1->id, VAR_1->handler, "vdec", ((void*)0));
 if (VAR_3 != 0) {
  FUNC_4(VAR_1, "vpu_ipi_register fail status=%d", VAR_3);
  return VAR_3;
 }

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.msg_id = VAR_0;
 VAR_2.ap_inst_addr = (unsigned long)VAR_1;

 FUNC_2(VAR_1, "vdec_inst=%p", VAR_1);

 VAR_3 = FUNC_5(VAR_1, (void *)&VAR_2, sizeof(VAR_2));
 FUNC_2(VAR_1, "- ret=%d", VAR_3);
 return VAR_3;
}
