
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_ring {scalar_t__ dma_addr; int * descs; scalar_t__ n_links; int hw_dev; } ;
struct mite {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mite_ring*) ;
 struct mite_ring* FUNC_2 (int,int ) ;

struct mite_ring *FUNC_3(struct mite *VAR_1)
{
 struct mite_ring *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->hw_dev = FUNC_0(&VAR_1->pcidev->dev);
 if (!VAR_2->hw_dev) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->n_links = 0;
 VAR_2->descs = ((void*)0);
 VAR_2->dma_addr = 0;
 return VAR_2;
}
