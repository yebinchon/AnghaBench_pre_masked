
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int out_ctx; } ;
struct xhci_slot_ctx {int dummy; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;


 int FUNC_0 (struct xhci_slot_ctx*) ;
 struct xhci_slot_ctx* FUNC_1 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_0, int VAR_1)
{
 struct xhci_virt_device *VAR_2;
 struct xhci_slot_ctx *VAR_3;

 VAR_2 = VAR_0->devs[VAR_1];
 VAR_3 = FUNC_1(VAR_0, VAR_2->out_ctx);
 FUNC_0(VAR_3);
}
