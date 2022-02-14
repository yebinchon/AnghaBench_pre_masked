
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int flags; int * small_buf_q_virt_addr; int small_buf_q_alloc_phy_addr; int small_buf_q_alloc_virt_addr; int small_buf_q_alloc_size; int pdev; int * lrg_buf_q_virt_addr; int lrg_buf_q_alloc_phy_addr; int lrg_buf_q_alloc_virt_addr; int lrg_buf_q_alloc_size; int lrg_buf; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ql3_adapter *VAR_1)
{
 if (!FUNC_4(VAR_0, &VAR_1->flags)) {
  FUNC_2(VAR_1->ndev, "Already done\n");
  return;
 }
 FUNC_1(VAR_1->lrg_buf);
 FUNC_3(VAR_1->pdev,
       VAR_1->lrg_buf_q_alloc_size,
       VAR_1->lrg_buf_q_alloc_virt_addr,
       VAR_1->lrg_buf_q_alloc_phy_addr);

 VAR_1->lrg_buf_q_virt_addr = ((void*)0);

 FUNC_3(VAR_1->pdev,
       VAR_1->small_buf_q_alloc_size,
       VAR_1->small_buf_q_alloc_virt_addr,
       VAR_1->small_buf_q_alloc_phy_addr);

 VAR_1->small_buf_q_virt_addr = ((void*)0);

 FUNC_0(VAR_0, &VAR_1->flags);
}
