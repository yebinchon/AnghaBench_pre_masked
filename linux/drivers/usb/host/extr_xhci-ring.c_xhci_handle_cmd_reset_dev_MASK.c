
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int out_ctx; } ;
struct xhci_slot_ctx {int dummy; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct xhci_event_cmd {int dummy; } ;


 int FUNC_0 (struct xhci_slot_ctx*) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;
 struct xhci_slot_ctx* FUNC_2 (struct xhci_hcd*,int ) ;
 int FUNC_3 (struct xhci_hcd*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_0, int VAR_1,
  struct xhci_event_cmd *VAR_2)
{
 struct xhci_virt_device *VAR_3;
 struct xhci_slot_ctx *VAR_4;

 VAR_3 = VAR_0->devs[VAR_1];
 VAR_4 = FUNC_2(VAR_0, VAR_3->out_ctx);
 FUNC_0(VAR_4);

 FUNC_1(VAR_0, "Completed reset device command.\n");
 if (!VAR_0->devs[VAR_1])
  FUNC_3(VAR_0, "Reset device command completion "
    "for disabled slot %u\n", VAR_1);
}
