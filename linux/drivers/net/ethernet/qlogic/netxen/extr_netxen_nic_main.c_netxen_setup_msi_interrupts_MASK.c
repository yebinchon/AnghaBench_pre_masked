
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_3__ {size_t pci_func; } ;
struct netxen_adapter {int max_sds_rings; TYPE_2__* msix_entries; int tgt_status_reg; int flags; TYPE_1__ ahw; scalar_t__ rss_supported; scalar_t__ msix_supported; struct pci_dev* pdev; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int * VAR_3 ;
 int FUNC_2 (struct netxen_adapter*,int ) ;
 int FUNC_3 (struct netxen_adapter*,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,TYPE_2__*,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_7(struct netxen_adapter *VAR_5,
           int VAR_6)
{
 struct pci_dev *VAR_7 = VAR_5->pdev;
 u32 VAR_8;
 int VAR_9;

 if (VAR_5->msix_supported) {
  FUNC_3(VAR_5, VAR_6);
  VAR_9 = FUNC_6(VAR_7, VAR_5->msix_entries,
         VAR_6, VAR_6);
  if (VAR_9 > 0) {
   VAR_5->flags |= VAR_1;
   FUNC_4(VAR_7, 1);

   if (VAR_5->rss_supported)
    VAR_5->max_sds_rings = VAR_6;

   FUNC_1(&VAR_7->dev, "using msi-x interrupts\n");
   return 0;
  }

 }

 if (VAR_4 && !FUNC_5(VAR_7)) {
  VAR_8 = VAR_3[VAR_5->ahw.pci_func];
  VAR_5->flags |= VAR_2;
  VAR_5->tgt_status_reg = FUNC_2(VAR_5, VAR_8);
  VAR_5->msix_entries[0].vector = VAR_7->irq;
  FUNC_1(&VAR_7->dev, "using msi interrupts\n");
  return 0;
 }

 FUNC_0(&VAR_7->dev, "Failed to acquire MSI-X/MSI interrupt vector\n");
 return -VAR_0;
}
