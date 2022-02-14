
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {scalar_t__ num_msix_roce_vec; scalar_t__ num_msix_vec; int pdev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0->pdev);
  VAR_0->num_msix_vec = 0;
  VAR_0->num_msix_roce_vec = 0;
 }
}
