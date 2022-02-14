
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_device {TYPE_2__* out_ctx; TYPE_1__* udev; } ;
struct xhci_slot_priv {struct xhci_virt_device* dev; } ;
struct xhci_hcd {int hcc_params; } ;
struct xhci_ep_ctx {int tx_info; int deq; int ep_info2; int ep_info; } ;
struct seq_file {struct xhci_slot_priv* private; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ dma; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct xhci_hcd* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,scalar_t__*,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 struct xhci_ep_ctx* FUNC_7 (struct xhci_hcd*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 dma_addr_t VAR_3;
 struct xhci_hcd *VAR_4;
 struct xhci_ep_ctx *VAR_5;
 struct xhci_slot_priv *VAR_6 = VAR_0->private;
 struct xhci_virt_device *VAR_7 = VAR_6->dev;

 VAR_4 = FUNC_2(FUNC_1(VAR_7->udev->bus));

 for (VAR_2 = 1; VAR_2 < 32; VAR_2++) {
  VAR_5 = FUNC_7(VAR_4, VAR_7->out_ctx, VAR_2);
  VAR_3 = VAR_7->out_ctx->dma + VAR_2 * FUNC_0(VAR_4->hcc_params);
  FUNC_5(VAR_0, "%pad: %s\n", &VAR_3,
      FUNC_6(FUNC_3(VAR_5->ep_info),
        FUNC_3(VAR_5->ep_info2),
        FUNC_4(VAR_5->deq),
        FUNC_3(VAR_5->tx_info)));
 }

 return 0;
}
