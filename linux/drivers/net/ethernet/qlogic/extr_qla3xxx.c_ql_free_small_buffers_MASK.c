
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int * small_buf_virt_addr; int small_buf_phy_addr; int small_buf_total_size; int pdev; int ndev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ql3_adapter *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->flags)) {
  FUNC_0(VAR_1->ndev, "Already done\n");
  return;
 }
 if (VAR_1->small_buf_virt_addr != ((void*)0)) {
  FUNC_1(VAR_1->pdev,
        VAR_1->small_buf_total_size,
        VAR_1->small_buf_virt_addr,
        VAR_1->small_buf_phy_addr);

  VAR_1->small_buf_virt_addr = ((void*)0);
 }
}
