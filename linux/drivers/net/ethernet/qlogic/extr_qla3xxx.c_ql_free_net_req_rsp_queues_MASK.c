
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int flags; int * rsp_q_virt_addr; int rsp_q_phy_addr; int rsp_q_size; int pdev; int * req_q_virt_addr; int req_q_phy_addr; int req_q_size; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ql3_adapter *VAR_1)
{
 if (!FUNC_3(VAR_0, &VAR_1->flags)) {
  FUNC_1(VAR_1->ndev, "Already done\n");
  return;
 }

 FUNC_2(VAR_1->pdev,
       VAR_1->req_q_size,
       VAR_1->req_q_virt_addr, VAR_1->req_q_phy_addr);

 VAR_1->req_q_virt_addr = ((void*)0);

 FUNC_2(VAR_1->pdev,
       VAR_1->rsp_q_size,
       VAR_1->rsp_q_virt_addr, VAR_1->rsp_q_phy_addr);

 VAR_1->rsp_q_virt_addr = ((void*)0);

 FUNC_0(VAR_0, &VAR_1->flags);
}
