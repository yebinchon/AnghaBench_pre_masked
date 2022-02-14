
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int fsbr; } ;
struct urb {struct urb_priv* hcpriv; } ;
struct uhci_hcd {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct uhci_hcd *VAR_0, struct urb *VAR_1)
{
 struct urb_priv *VAR_2 = VAR_1->hcpriv;

 VAR_2->fsbr = 1;
}
