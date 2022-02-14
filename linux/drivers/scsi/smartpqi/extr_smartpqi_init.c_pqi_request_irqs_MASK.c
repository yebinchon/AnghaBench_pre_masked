
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int num_msix_vectors_enabled; int num_msix_vectors_initialized; int * queue_groups; int event_irq; struct pci_dev* pci_dev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pci_dev;
 int VAR_4;
 int VAR_5;

 VAR_2->event_irq = FUNC_1(VAR_3, 0);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_msix_vectors_enabled; VAR_4++) {
  VAR_5 = FUNC_2(FUNC_1(VAR_3, VAR_4), VAR_1, 0,
   VAR_0, &VAR_2->queue_groups[VAR_4]);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev,
    "irq %u init failed with error %d\n",
    FUNC_1(VAR_3, VAR_4), VAR_5);
   return VAR_5;
  }
  VAR_2->num_msix_vectors_initialized++;
 }

 return 0;
}
