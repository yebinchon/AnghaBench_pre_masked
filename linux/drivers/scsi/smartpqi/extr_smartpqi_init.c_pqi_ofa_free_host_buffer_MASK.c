
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_sg_descriptor {int address; int length; } ;
struct pqi_ofa_memory {int num_memory_descriptors; struct pqi_sg_descriptor* sg_descriptor; int bytes_allocated; } ;
struct pqi_ctrl_info {struct pqi_ofa_memory* pqi_ofa_mem_virt_addr; int pqi_ofa_mem_dma_handle; TYPE_1__* pci_dev; struct pqi_ofa_memory** pqi_ofa_chunk_virt_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct pqi_ofa_memory*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pqi_ofa_memory**) ;

__attribute__((used)) static void FUNC_5(struct pqi_ctrl_info *VAR_1)
{
 int VAR_2;
 struct pqi_sg_descriptor *VAR_3;
 struct pqi_ofa_memory *VAR_4;

 VAR_4 = VAR_1->pqi_ofa_mem_virt_addr;

 if (!VAR_4)
  return;

 if (!VAR_4->bytes_allocated)
  goto out;

 VAR_3 = VAR_4->sg_descriptor;

 for (VAR_2 = 0; VAR_2 < FUNC_1(&VAR_4->num_memory_descriptors);
  VAR_2++) {
  FUNC_0(&VAR_1->pci_dev->dev,
   FUNC_2(&VAR_3[VAR_2].length),
   VAR_1->pqi_ofa_chunk_virt_addr[VAR_2],
   FUNC_3(&VAR_3[VAR_2].address));
 }
 FUNC_4(VAR_1->pqi_ofa_chunk_virt_addr);

out:
 FUNC_0(&VAR_1->pci_dev->dev,
   VAR_0, VAR_4,
   VAR_1->pqi_ofa_mem_dma_handle);
 VAR_1->pqi_ofa_mem_virt_addr = ((void*)0);
}
