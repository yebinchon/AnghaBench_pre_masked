
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {scalar_t__ pcicfg; int pdev; scalar_t__ pcicfg_mapped; scalar_t__ db; scalar_t__ csr; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_0)
{
 if (VAR_0->csr)
  FUNC_0(VAR_0->pdev, VAR_0->csr);
 if (VAR_0->db)
  FUNC_0(VAR_0->pdev, VAR_0->db);
 if (VAR_0->pcicfg && VAR_0->pcicfg_mapped)
  FUNC_0(VAR_0->pdev, VAR_0->pcicfg);
}
