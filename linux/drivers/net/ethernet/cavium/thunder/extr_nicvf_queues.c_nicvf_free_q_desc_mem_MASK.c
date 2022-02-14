
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q_desc_mem {int * base; int * unalign_base; int dma; int size; } ;
struct nicvf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_0, struct q_desc_mem *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_0->pdev->dev, VAR_1->size,
     VAR_1->unalign_base, VAR_1->dma);
 VAR_1->unalign_base = ((void*)0);
 VAR_1->base = ((void*)0);
}
