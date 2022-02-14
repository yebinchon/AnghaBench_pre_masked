
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {scalar_t__ iomem_base; int error_buffer_dma_handle; scalar_t__ error_buffer; int error_buffer_length; TYPE_1__* pci_dev; int admin_queue_memory_base_dma_handle; scalar_t__ admin_queue_memory_base; int admin_queue_memory_length; int queue_memory_base_dma_handle; scalar_t__ queue_memory_base; int queue_memory_length; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_6(struct pqi_ctrl_info *VAR_0)
{
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 if (VAR_0->queue_memory_base)
  FUNC_0(&VAR_0->pci_dev->dev,
   VAR_0->queue_memory_length,
   VAR_0->queue_memory_base,
   VAR_0->queue_memory_base_dma_handle);
 if (VAR_0->admin_queue_memory_base)
  FUNC_0(&VAR_0->pci_dev->dev,
   VAR_0->admin_queue_memory_length,
   VAR_0->admin_queue_memory_base,
   VAR_0->admin_queue_memory_base_dma_handle);
 FUNC_2(VAR_0);
 if (VAR_0->error_buffer)
  FUNC_0(&VAR_0->pci_dev->dev,
   VAR_0->error_buffer_length,
   VAR_0->error_buffer,
   VAR_0->error_buffer_dma_handle);
 if (VAR_0->iomem_base)
  FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
