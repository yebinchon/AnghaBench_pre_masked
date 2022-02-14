
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vpu_inst {int inst_addr; } ;
struct vdec_ap_ipi_cmd {unsigned int msg_id; int vpu_inst_addr; } ;
typedef int msg ;


 int FUNC_0 (struct vdec_ap_ipi_cmd*,int ,int) ;
 int FUNC_1 (struct vdec_vpu_inst*,char*,unsigned int,...) ;
 int FUNC_2 (struct vdec_vpu_inst*,struct vdec_ap_ipi_cmd*,int) ;

__attribute__((used)) static int FUNC_3(struct vdec_vpu_inst *VAR_0, unsigned int VAR_1)
{
 struct vdec_ap_ipi_cmd VAR_2;
 int VAR_3 = 0;

 FUNC_1(VAR_0, "+ id=%X", VAR_1);

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.msg_id = VAR_1;
 VAR_2.vpu_inst_addr = VAR_0->inst_addr;

 VAR_3 = FUNC_2(VAR_0, &VAR_2, sizeof(VAR_2));
 FUNC_1(VAR_0, "- id=%X ret=%d", VAR_1, VAR_3);
 return VAR_3;
}
