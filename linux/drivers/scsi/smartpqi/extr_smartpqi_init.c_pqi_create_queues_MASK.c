
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {unsigned int num_queue_groups; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pci_dev->dev,
   "error creating event queue\n");
  return VAR_1;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queue_groups; VAR_2++) {
  VAR_1 = FUNC_2(VAR_0, VAR_2);
  if (VAR_1) {
   FUNC_0(&VAR_0->pci_dev->dev,
    "error creating queue group number %u/%u\n",
    VAR_2, VAR_0->num_queue_groups);
   return VAR_1;
  }
 }

 return 0;
}
