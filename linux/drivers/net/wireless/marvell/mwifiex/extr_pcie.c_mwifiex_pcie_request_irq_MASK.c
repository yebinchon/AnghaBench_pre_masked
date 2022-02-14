
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int msg_id; struct pci_dev* dev; } ;
struct TYPE_7__ {TYPE_1__* reg; } ;
struct pcie_service_card {int msix_enable; int msi_enable; TYPE_3__ share_irq_ctx; TYPE_3__* msix_ctx; TYPE_4__* msix_entries; TYPE_2__ pcie; struct pci_dev* dev; } ;
struct pci_dev {int irq; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;
struct TYPE_9__ {int entry; int vector; } ;
struct TYPE_6__ {scalar_t__ msix_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,TYPE_4__*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct mwifiex_adapter *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct pcie_service_card *VAR_9 = VAR_5->card;
 struct pci_dev *VAR_10 = VAR_9->dev;

 if (VAR_9->pcie.reg->msix_support) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   VAR_9->msix_entries[VAR_7].entry = VAR_7;
  VAR_6 = FUNC_5(VAR_10, VAR_9->msix_entries,
         VAR_3);
  if (!VAR_6) {
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_9->msix_ctx[VAR_7].dev = VAR_10;
    VAR_9->msix_ctx[VAR_7].msg_id = VAR_7;

    VAR_6 = FUNC_7(VAR_9->msix_entries[VAR_7].vector,
        VAR_4, 0,
        "MWIFIEX_PCIE_MSIX",
        &VAR_9->msix_ctx[VAR_7]);
    if (VAR_6)
     break;
   }

   if (VAR_6) {
    FUNC_1(VAR_5, VAR_0, "request_irq fail: %d\n",
         VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
     FUNC_0(VAR_9->msix_entries[VAR_8].vector,
       &VAR_9->msix_ctx[VAR_7]);
    FUNC_3(VAR_10);
   } else {
    FUNC_1(VAR_5, VAR_2, "MSIx enabled!");
    VAR_9->msix_enable = 1;
    return 0;
   }
  }
 }

 if (FUNC_4(VAR_10) != 0)
  FUNC_2(VAR_10);
 else
  VAR_9->msi_enable = 1;

 FUNC_1(VAR_5, VAR_0, "msi_enable = %d\n", VAR_9->msi_enable);

 VAR_9->share_irq_ctx.dev = VAR_10;
 VAR_9->share_irq_ctx.msg_id = -1;
 VAR_6 = FUNC_7(VAR_10->irq, VAR_4, VAR_1,
     "MRVL_PCIE", &VAR_9->share_irq_ctx);
 if (VAR_6) {
  FUNC_6("request_irq failed: ret=%d\n", VAR_6);
  return -1;
 }

 return 0;
}
