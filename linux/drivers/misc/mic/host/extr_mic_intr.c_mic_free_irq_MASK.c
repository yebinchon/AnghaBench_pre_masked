
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct pci_dev {unsigned int irq; int dev; } ;
struct mic_irq {int dummy; } ;
struct TYPE_5__ {int num_vectors; int * mic_msi_map; TYPE_1__* msix_entries; } ;
struct mic_device {struct pci_dev* pdev; TYPE_3__* intr_ops; TYPE_2__ irq_info; } ;
struct TYPE_6__ {int (* program_msi_to_src_map ) (struct mic_device*,size_t,scalar_t__,int) ;} ;
struct TYPE_4__ {unsigned int vector; } ;


 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (unsigned long) ;
 size_t FUNC_2 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,char*,size_t,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (unsigned int,void*) ;
 scalar_t__ FUNC_6 (struct mic_device*,size_t) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct mic_device*,size_t,size_t,int) ;
 int FUNC_9 (struct mic_device*,size_t,scalar_t__,int) ;

void FUNC_10(struct mic_device *VAR_1,
    struct mic_irq *VAR_2, void *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u8 VAR_6;
 unsigned int VAR_7;
 struct pci_dev *VAR_8 = VAR_1->pdev;

 VAR_5 = FUNC_1((unsigned long)VAR_2);
 VAR_4 = FUNC_2((unsigned long)VAR_2);
 if (VAR_1->irq_info.num_vectors > 1) {
  if (VAR_5 >= VAR_1->irq_info.num_vectors) {
   FUNC_4(&VAR_1->pdev->dev,
     "entry %d should be < num_irq %d\n",
    VAR_5, VAR_1->irq_info.num_vectors);
   return;
  }
  VAR_7 = VAR_1->irq_info.msix_entries[VAR_5].vector;
  FUNC_5(VAR_7, VAR_3);
  VAR_1->irq_info.mic_msi_map[VAR_5] &= ~(FUNC_0(VAR_4));
  VAR_1->intr_ops->program_msi_to_src_map(VAR_1,
   VAR_5, VAR_4, 0);

  FUNC_3(&VAR_1->pdev->dev, "irq: %d freed\n", VAR_7);
 } else {
  VAR_7 = VAR_8->irq;
  VAR_6 = FUNC_6(VAR_1, VAR_4);
  if (VAR_6 >= VAR_0) {
   FUNC_4(&VAR_1->pdev->dev, "Error unregistering callback\n");
   return;
  }
  if (FUNC_7(VAR_8)) {
   VAR_1->irq_info.mic_msi_map[VAR_5] &= ~(FUNC_0(VAR_6));
   VAR_1->intr_ops->program_msi_to_src_map(VAR_1,
    VAR_5, VAR_6, 0);
  }
  FUNC_3(&VAR_1->pdev->dev, "callback %d unregistered for src: %d\n",
   VAR_4, VAR_6);
 }
}
