
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int out_ctx; } ;
struct xhci_slot_ctx {int dummy; } ;
struct xhci_hcd {int quirks; struct xhci_virt_device** devs; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_slot_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,struct xhci_virt_device*,int) ;
 int FUNC_2 (struct xhci_hcd*,int) ;
 struct xhci_slot_ctx* FUNC_3 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_1, int VAR_2)
{
 struct xhci_virt_device *VAR_3;
 struct xhci_slot_ctx *VAR_4;

 VAR_3 = VAR_1->devs[VAR_2];
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_3->out_ctx);
 FUNC_0(VAR_4);

 if (VAR_1->quirks & VAR_0)

  FUNC_1(VAR_1, VAR_3, 1);
 FUNC_2(VAR_1, VAR_2);
}
