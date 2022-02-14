
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_ipi_msg_init {int vpu_inst_addr; } ;
struct venc_vpu_inst {int dev; int vsi; int inst_addr; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct venc_vpu_inst *VAR_0, void *VAR_1)
{
 struct venc_vpu_ipi_msg_init *VAR_2 = VAR_1;

 VAR_0->inst_addr = VAR_2->vpu_inst_addr;
 VAR_0->vsi = FUNC_0(VAR_0->dev, VAR_2->vpu_inst_addr);
}
