
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_adapter {int num_q_vectors; int flags; int pdev; int * msix_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct igc_adapter*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct igc_adapter *VAR_1)
{
 int VAR_2 = VAR_1->num_q_vectors;

 if (VAR_1->msix_entries) {
  FUNC_3(VAR_1->pdev);
  FUNC_1(VAR_1->msix_entries);
  VAR_1->msix_entries = ((void*)0);
 } else if (VAR_1->flags & VAR_0) {
  FUNC_2(VAR_1->pdev);
 }

 while (VAR_2--)
  FUNC_0(VAR_1, VAR_2);
}
