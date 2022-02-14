
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vpu_ipi_init_ack {scalar_t__ vpu_inst_addr; scalar_t__ ap_inst_addr; } ;
struct vdec_vpu_inst {scalar_t__ inst_addr; int dev; int vsi; } ;


 int FUNC_0 (struct vdec_vpu_inst*,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vdec_vpu_ipi_init_ack *VAR_0)
{
 struct vdec_vpu_inst *VAR_1 = (struct vdec_vpu_inst *)
     (unsigned long)VAR_0->ap_inst_addr;

 FUNC_0(VAR_1, "+ ap_inst_addr = 0x%llx", VAR_0->ap_inst_addr);



 VAR_1->vsi = FUNC_1(VAR_1->dev, VAR_0->vpu_inst_addr);
 VAR_1->inst_addr = VAR_0->vpu_inst_addr;

 FUNC_0(VAR_1, "- vpu_inst_addr = 0x%x", VAR_1->inst_addr);
}
