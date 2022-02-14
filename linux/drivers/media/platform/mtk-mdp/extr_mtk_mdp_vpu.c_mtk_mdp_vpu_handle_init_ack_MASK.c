
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_vpu {int inst_addr; int pdev; struct mdp_process_vsi* vsi; } ;
struct mdp_process_vsi {int dummy; } ;
struct mdp_ipi_comm_ack {int vpu_inst_addr; scalar_t__ ap_inst; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mdp_ipi_comm_ack *VAR_0)
{
 struct mtk_mdp_vpu *VAR_1 = (struct mtk_mdp_vpu *)
     (unsigned long)VAR_0->ap_inst;


 VAR_1->vsi = (struct mdp_process_vsi *)
   FUNC_0(VAR_1->pdev, VAR_0->vpu_inst_addr);
 VAR_1->inst_addr = VAR_0->vpu_inst_addr;
}
