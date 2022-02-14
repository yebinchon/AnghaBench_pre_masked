
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int num_msix_vectors_initialized; int * queue_groups; int pci_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_msix_vectors_initialized; VAR_1++)
  FUNC_0(FUNC_1(VAR_0->pci_dev, VAR_1),
   &VAR_0->queue_groups[VAR_1]);

 VAR_0->num_msix_vectors_initialized = 0;
}
