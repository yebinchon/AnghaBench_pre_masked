
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int error_buffer; int error_buffer_dma_handle; int error_buffer_length; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct pqi_ctrl_info *VAR_2)
{
 VAR_2->error_buffer = FUNC_0(&VAR_2->pci_dev->dev,
           VAR_2->error_buffer_length,
           &VAR_2->error_buffer_dma_handle,
           VAR_1);

 if (!VAR_2->error_buffer)
  return -VAR_0;

 return 0;
}
