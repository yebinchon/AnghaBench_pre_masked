
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genwqe_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,size_t,int *,int ) ;
 scalar_t__ FUNC_1 (size_t) ;

void *FUNC_2(struct genwqe_dev *VAR_2, size_t VAR_3,
          dma_addr_t *VAR_4)
{
 if (FUNC_1(VAR_3) >= VAR_1)
  return ((void*)0);

 return FUNC_0(&VAR_2->pci_dev->dev, VAR_3, VAR_4,
      VAR_0);
}
