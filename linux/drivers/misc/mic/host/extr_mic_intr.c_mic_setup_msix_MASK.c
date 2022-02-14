
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int num_vectors; TYPE_3__* msix_entries; int mic_msi_map; } ;
struct mic_device {TYPE_2__ irq_info; TYPE_1__* pdev; } ;
struct TYPE_8__ {int entry; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(struct mic_device *VAR_3, struct pci_dev *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = sizeof(*VAR_3->irq_info.msix_entries);

 VAR_3->irq_info.msix_entries = FUNC_2(VAR_2,
          VAR_7, VAR_1);
 if (!VAR_3->irq_info.msix_entries) {
  VAR_5 = -VAR_0;
  goto err_nomem1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_3->irq_info.msix_entries[VAR_6].entry = VAR_6;

 VAR_5 = FUNC_5(VAR_4, VAR_3->irq_info.msix_entries,
       VAR_2);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev, "Error enabling MSIx. rc = %d\n", VAR_5);
  goto err_enable_msix;
 }

 VAR_3->irq_info.num_vectors = VAR_2;
 VAR_3->irq_info.mic_msi_map = FUNC_3((sizeof(u32) *
  VAR_3->irq_info.num_vectors), VAR_1);

 if (!VAR_3->irq_info.mic_msi_map) {
  VAR_5 = -VAR_0;
  goto err_nomem2;
 }

 FUNC_0(&VAR_3->pdev->dev,
  "%d MSIx irqs setup\n", VAR_3->irq_info.num_vectors);
 return 0;
err_nomem2:
 FUNC_4(VAR_4);
err_enable_msix:
 FUNC_1(VAR_3->irq_info.msix_entries);
err_nomem1:
 VAR_3->irq_info.num_vectors = 0;
 return VAR_5;
}
