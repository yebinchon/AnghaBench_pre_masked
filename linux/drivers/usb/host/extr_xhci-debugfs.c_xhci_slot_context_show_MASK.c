
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_device {TYPE_2__* out_ctx; TYPE_1__* udev; } ;
struct xhci_slot_priv {struct xhci_virt_device* dev; } ;
struct xhci_slot_ctx {int dev_state; int tt_info; int dev_info2; int dev_info; } ;
struct xhci_hcd {int dummy; } ;
struct seq_file {struct xhci_slot_priv* private; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int ) ;
 struct xhci_hcd* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct xhci_slot_ctx* FUNC_5 (struct xhci_hcd*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct xhci_hcd *VAR_2;
 struct xhci_slot_ctx *VAR_3;
 struct xhci_slot_priv *VAR_4 = VAR_0->private;
 struct xhci_virt_device *VAR_5 = VAR_4->dev;

 VAR_2 = FUNC_1(FUNC_0(VAR_5->udev->bus));
 VAR_3 = FUNC_5(VAR_2, VAR_5->out_ctx);
 FUNC_3(VAR_0, "%pad: %s\n", &VAR_5->out_ctx->dma,
     FUNC_4(FUNC_2(VAR_3->dev_info),
         FUNC_2(VAR_3->dev_info2),
         FUNC_2(VAR_3->tt_info),
         FUNC_2(VAR_3->dev_state)));

 return 0;
}
