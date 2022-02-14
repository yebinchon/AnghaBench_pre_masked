
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_mdp_vpu {scalar_t__ failure; int inst_addr; } ;
struct mdp_ipi_comm {unsigned long ap_inst; int vpu_inst_addr; int ipi_id; int msg_id; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,struct mtk_mdp_vpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtk_mdp_vpu *VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct mdp_ipi_comm VAR_5;

 VAR_5.msg_id = VAR_3;
 VAR_5.ipi_id = VAR_1;
 VAR_5.vpu_inst_addr = VAR_2->inst_addr;
 VAR_5.ap_inst = (unsigned long)VAR_2;
 VAR_4 = FUNC_0((void *)&VAR_5, sizeof(VAR_5), VAR_2, VAR_1);
 if (!VAR_4 && VAR_2->failure)
  VAR_4 = -VAR_0;

 return VAR_4;
}
