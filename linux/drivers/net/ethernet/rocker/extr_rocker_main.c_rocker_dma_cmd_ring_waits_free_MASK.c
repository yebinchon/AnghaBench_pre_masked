
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int * desc_info; } ;
struct rocker {struct rocker_dma_ring_info cmd_ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct rocker *VAR_0)
{
 const struct rocker_dma_ring_info *VAR_1 = &VAR_0->cmd_ring;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++)
  FUNC_0(&VAR_1->desc_info[VAR_2]);
}
