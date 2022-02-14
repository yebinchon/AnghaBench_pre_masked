
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_rx_buffer {int dma_addr; } ;
struct ef4_nic {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ef4_nic *VAR_1,
          struct ef4_rx_buffer *VAR_2,
          unsigned int VAR_3)
{
 FUNC_0(&VAR_1->pci_dev->dev, VAR_2->dma_addr, VAR_3,
    VAR_0);
}
