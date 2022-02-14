
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int num_msix_vectors_enabled; int irq_mode; TYPE_1__* pci_dev; int num_queue_groups; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pqi_ctrl_info *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->pci_dev,
   VAR_3, VAR_4->num_queue_groups,
   VAR_2 | VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->pci_dev->dev,
   "MSI-X init failed with error %d\n",
   VAR_5);
  return VAR_5;
 }

 VAR_4->num_msix_vectors_enabled = VAR_5;
 VAR_4->irq_mode = VAR_0;
 return 0;
}
