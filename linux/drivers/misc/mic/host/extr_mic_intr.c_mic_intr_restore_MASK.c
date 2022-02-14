
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int num_vectors; int* mic_msi_map; } ;
struct mic_device {TYPE_1__* intr_ops; TYPE_2__ irq_info; struct pci_dev* pdev; } ;
struct TYPE_3__ {int (* program_msi_to_src_map ) (struct mic_device*,int,int,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct mic_device*,int,int,int) ;

void FUNC_3(struct mic_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct pci_dev *VAR_4 = VAR_1->pdev;

 if (!FUNC_1(VAR_4))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->irq_info.num_vectors; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_1->irq_info.mic_msi_map[VAR_2] & FUNC_0(VAR_3))
    VAR_1->intr_ops->program_msi_to_src_map(VAR_1,
     VAR_2, VAR_3, 1);
  }
 }
}
