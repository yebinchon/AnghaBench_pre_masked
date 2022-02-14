
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int dummy; } ;
struct ehci_qh {int hw_info2; int hw_next; int qh_state; int qtd_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct oxu_hcd *VAR_3, struct ehci_qh *VAR_4)
{
 unsigned VAR_5;

 FUNC_2(VAR_3, VAR_4);






 if (FUNC_1(&VAR_4->qtd_list)
  || (FUNC_0(VAR_1) & VAR_4->hw_info2) != 0)
  VAR_5 = 2;
 else
  VAR_5 = 55;

 FUNC_3(VAR_5);
 VAR_4->qh_state = VAR_2;
 VAR_4->hw_next = VAR_0;
 FUNC_4();
}
