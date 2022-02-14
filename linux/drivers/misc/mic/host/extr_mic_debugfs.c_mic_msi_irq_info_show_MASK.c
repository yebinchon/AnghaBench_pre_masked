
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct seq_file {struct mic_device* private; } ;
struct pci_dev {scalar_t__ irq; scalar_t__ msix_enabled; } ;
struct TYPE_6__ {int num_vectors; int* mic_msi_map; TYPE_1__* msix_entries; } ;
struct mic_device {TYPE_3__ irq_info; TYPE_2__* intr_ops; struct pci_dev* pdev; } ;
struct TYPE_5__ {int (* read_msi_to_src_map ) (struct mic_device*,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ vector; scalar_t__ entry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct mic_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct mic_device *VAR_3 = VAR_1->private;
 int VAR_4;
 int VAR_5, VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 struct pci_dev *VAR_9 = VAR_3->pdev;

 if (FUNC_1(VAR_9)) {
  for (VAR_5 = 0; VAR_5 < VAR_3->irq_info.num_vectors; VAR_5++) {
   if (VAR_9->msix_enabled) {
    VAR_7 = VAR_3->irq_info.msix_entries[VAR_5].entry;
    VAR_8 = VAR_3->irq_info.msix_entries[VAR_5].vector;
   } else {
    VAR_7 = 0;
    VAR_8 = VAR_9->irq;
   }

   VAR_4 = VAR_3->intr_ops->read_msi_to_src_map(VAR_3, VAR_7);

   FUNC_2(VAR_1, "%s %-10d %s %-10d MXAR[%d]: %08X\n",
       "IRQ:", VAR_8, "Entry:", VAR_7, VAR_5, VAR_4);

   FUNC_2(VAR_1, "%-10s", "offset:");
   for (VAR_6 = (VAR_0 - 1); VAR_6 >= 0; VAR_6--)
    FUNC_2(VAR_1, "%4d ", VAR_6);
   FUNC_3(VAR_1, "\n");


   FUNC_2(VAR_1, "%-10s", "count:");
   for (VAR_6 = (VAR_0 - 1); VAR_6 >= 0; VAR_6--)
    FUNC_2(VAR_1, "%4d ",
        (VAR_3->irq_info.mic_msi_map[VAR_5] &
        FUNC_0(VAR_6)) ? 1 : 0);
   FUNC_3(VAR_1, "\n\n");
  }
 } else {
  FUNC_3(VAR_1, "MSI/MSIx interrupts not enabled\n");
 }

 return 0;
}
