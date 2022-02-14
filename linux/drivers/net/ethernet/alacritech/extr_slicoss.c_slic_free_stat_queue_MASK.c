
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_stat_queue {scalar_t__* addr_offset; scalar_t__* paddr; scalar_t__* descs; int mem_size; } ;
struct slic_device {TYPE_1__* pdev; struct slic_stat_queue stq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_1)
{
 struct slic_stat_queue *VAR_2 = &VAR_1->stq;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_1->pdev->dev, VAR_2->mem_size,
      VAR_2->descs[VAR_3] - VAR_2->addr_offset[VAR_3],
      VAR_2->paddr[VAR_3] - VAR_2->addr_offset[VAR_3]);
 }
}
