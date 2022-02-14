
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; } ;
struct xhci_td {int dummy; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct xhci_command {int dummy; } ;
typedef enum xhci_ep_reset_type { ____Placeholder_xhci_ep_reset_type } xhci_ep_reset_type ;
struct TYPE_2__ {int flags; struct xhci_virt_ep* eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xhci_command* FUNC_0 (struct xhci_hcd*,int,int ) ;
 int FUNC_1 (struct xhci_hcd*,unsigned int,unsigned int,struct xhci_td*) ;
 int FUNC_2 (struct xhci_hcd*,struct xhci_td*,struct xhci_virt_ep*) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_command*,unsigned int,unsigned int,int) ;
 int FUNC_4 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_5(struct xhci_hcd *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7,
  unsigned int VAR_8, struct xhci_td *VAR_9,
  enum xhci_ep_reset_type VAR_10)
{
 struct xhci_virt_ep *VAR_11 = &VAR_5->devs[VAR_6]->eps[VAR_7];
 struct xhci_command *VAR_12;





 if (VAR_5->devs[VAR_6]->flags & VAR_4)
  return;

 VAR_12 = FUNC_0(VAR_5, 0, VAR_3);
 if (!VAR_12)
  return;

 VAR_11->ep_state |= VAR_0;

 FUNC_3(VAR_5, VAR_12, VAR_6, VAR_7, VAR_10);

 if (VAR_10 == VAR_2) {
  VAR_11->ep_state |= VAR_1;
  FUNC_1(VAR_5, VAR_7, VAR_8, VAR_9);
  FUNC_2(VAR_5, VAR_9, VAR_11);
 }
 FUNC_4(VAR_5);
}
