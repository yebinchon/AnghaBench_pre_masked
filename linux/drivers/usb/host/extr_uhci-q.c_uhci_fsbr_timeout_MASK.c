
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int lock; scalar_t__ fsbr_expiring; } ;
struct timer_list {int dummy; } ;


 struct uhci_hcd* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct uhci_hcd* VAR_1 ;
 int FUNC_3 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct uhci_hcd *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 if (VAR_3->fsbr_expiring) {
  VAR_3->fsbr_expiring = 0;
  FUNC_3(VAR_3);
 }
 FUNC_2(&VAR_3->lock, VAR_4);
}
