
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct q_desc_mem {int q_len; int size; scalar_t__ dma; scalar_t__ phys_base; scalar_t__ unalign_base; scalar_t__ base; } ;
struct nicvf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_2(struct nicvf *VAR_2, struct q_desc_mem *VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 VAR_3->q_len = VAR_4;
 VAR_3->size = (VAR_5 * VAR_4) + VAR_6;

 VAR_3->unalign_base = FUNC_1(&VAR_2->pdev->dev, VAR_3->size,
      &VAR_3->dma, VAR_1);
 if (!VAR_3->unalign_base)
  return -VAR_0;


 VAR_3->phys_base = FUNC_0((u64)VAR_3->dma, VAR_6);
 VAR_3->base = VAR_3->unalign_base + (VAR_3->phys_base - VAR_3->dma);
 return 0;
}
