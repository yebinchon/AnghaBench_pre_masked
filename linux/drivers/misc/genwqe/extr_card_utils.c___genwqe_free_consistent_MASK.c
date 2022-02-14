
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genwqe_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,size_t,void*,int ) ;

void FUNC_1(struct genwqe_dev *VAR_0, size_t VAR_1,
        void *VAR_2, dma_addr_t VAR_3)
{
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(&VAR_0->pci_dev->dev, VAR_1, VAR_2, VAR_3);
}
