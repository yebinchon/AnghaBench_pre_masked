
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_hcd {int hci_version; } ;
struct urb {TYPE_3__* ep; TYPE_1__* dev; } ;
struct TYPE_5__ {unsigned int bMaxBurst; } ;
struct TYPE_6__ {TYPE_2__ ss_ep_comp; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct xhci_hcd *VAR_1,
  struct urb *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1->hci_version < 0x100 || VAR_2->dev->speed < VAR_0)
  return 0;

 VAR_4 = VAR_2->ep->ss_ep_comp.bMaxBurst;
 return FUNC_0(VAR_3, VAR_4 + 1) - 1;
}
