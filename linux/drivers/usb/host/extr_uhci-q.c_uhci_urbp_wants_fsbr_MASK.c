
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {scalar_t__ fsbr; } ;
struct uhci_hcd {int fsbr_is_wanted; int fsbr_timer; scalar_t__ fsbr_expiring; int fsbr_is_on; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_2(struct uhci_hcd *VAR_0, struct urb_priv *VAR_1)
{
 if (VAR_1->fsbr) {
  VAR_0->fsbr_is_wanted = 1;
  if (!VAR_0->fsbr_is_on)
   FUNC_1(VAR_0);
  else if (VAR_0->fsbr_expiring) {
   VAR_0->fsbr_expiring = 0;
   FUNC_0(&VAR_0->fsbr_timer);
  }
 }
}
