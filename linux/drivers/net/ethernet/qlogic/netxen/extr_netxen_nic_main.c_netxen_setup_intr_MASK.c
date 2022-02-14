
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct netxen_adapter {int max_sds_rings; int flags; TYPE_1__* msix_entries; scalar_t__ rss_supported; struct pci_dev* pdev; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netxen_adapter*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct netxen_adapter*) ;
 int FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*,scalar_t__) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_8 (struct netxen_adapter*,int) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct netxen_adapter *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 int VAR_8;

 if (VAR_6->rss_supported)
  VAR_8 = (FUNC_9() >= VAR_1) ?
       VAR_1 : 2;
 else
  VAR_8 = 1;

 VAR_6->max_sds_rings = 1;
 VAR_6->flags &= ~(VAR_5 | VAR_4);

 FUNC_5(VAR_6);
 FUNC_7(VAR_7, 0);

 if (FUNC_3(VAR_7)) {
  if (!FUNC_8(VAR_6, VAR_8))
   FUNC_6(VAR_6, VAR_3);
  else
   FUNC_6(VAR_6, VAR_2);
 } else {
  if (FUNC_4(VAR_6) == VAR_3 &&
      FUNC_8(VAR_6, VAR_8)) {
   FUNC_1(&VAR_7->dev, "Co-existence of MSI-X/MSI and INTx interrupts is not supported\n");
   return -VAR_0;
  }
 }

 if (!FUNC_0(VAR_6)) {
  VAR_6->msix_entries[0].vector = VAR_7->irq;
  FUNC_2(&VAR_7->dev, "using legacy interrupts\n");
 }
 return 0;
}
