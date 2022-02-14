
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_td {TYPE_1__* urb; } ;
struct urb_priv {scalar_t__ num_tds_done; scalar_t__ num_tds; } ;
struct TYPE_2__ {struct urb_priv* hcpriv; } ;



__attribute__((used)) static bool FUNC_0(struct xhci_td *VAR_0)
{
 struct urb_priv *VAR_1 = VAR_0->urb->hcpriv;

 return VAR_1->num_tds_done == VAR_1->num_tds;
}
