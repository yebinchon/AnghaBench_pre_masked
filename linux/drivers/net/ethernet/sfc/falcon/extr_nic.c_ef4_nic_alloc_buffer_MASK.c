
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* pci_dev; } ;
struct ef4_buffer {unsigned int len; int addr; int dma_addr; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int *,int ) ;

int FUNC_1(struct ef4_nic *VAR_1, struct ef4_buffer *VAR_2,
    unsigned int VAR_3, gfp_t VAR_4)
{
 VAR_2->addr = FUNC_0(&VAR_1->pci_dev->dev, VAR_3,
       &VAR_2->dma_addr, VAR_4);
 if (!VAR_2->addr)
  return -VAR_0;
 VAR_2->len = VAR_3;
 return 0;
}
