
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_ep {int ep_state; int * stream_info; } ;
struct xhci_virt_device {struct xhci_virt_ep* eps; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xhci_hcd*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_1,
 struct xhci_virt_device *VAR_2, int VAR_3)
{
 struct xhci_virt_ep *VAR_4 = &VAR_2->eps[VAR_3];

 if (VAR_4->ep_state & VAR_0) {
  FUNC_2(VAR_1, "WARN: endpoint 0x%02x has streams on set_interface, freeing streams.\n",
    FUNC_1(VAR_3));
  FUNC_0(VAR_1, VAR_4->stream_info);
  VAR_4->stream_info = ((void*)0);
  VAR_4->ep_state &= ~VAR_0;
 }
}
