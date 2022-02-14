
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int flags; int pdev; int * irq_pile; int * msix_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i40e_pf *VAR_2)
{

 if (VAR_2->flags & VAR_0) {
  FUNC_2(VAR_2->pdev);
  FUNC_0(VAR_2->msix_entries);
  VAR_2->msix_entries = ((void*)0);
  FUNC_0(VAR_2->irq_pile);
  VAR_2->irq_pile = ((void*)0);
 } else if (VAR_2->flags & VAR_1) {
  FUNC_1(VAR_2->pdev);
 }
 VAR_2->flags &= ~(VAR_0 | VAR_1);
}
