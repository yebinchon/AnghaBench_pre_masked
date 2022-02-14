
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* pci_dev; } ;
struct ef4_buffer {int * addr; int dma_addr; int len; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

void FUNC_1(struct ef4_nic *VAR_0, struct ef4_buffer *VAR_1)
{
 if (VAR_1->addr) {
  FUNC_0(&VAR_0->pci_dev->dev, VAR_1->len,
      VAR_1->addr, VAR_1->dma_addr);
  VAR_1->addr = ((void*)0);
 }
}
