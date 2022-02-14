
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int * desc_info; } ;
struct rocker {struct rocker_dma_ring_info cmd_ring; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const struct rocker *VAR_0)
{
 const struct rocker_dma_ring_info *VAR_1 = &VAR_0->cmd_ring;
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_1->desc_info[VAR_2]);
  if (VAR_3)
   goto rollback;
 }
 return 0;

rollback:
 for (VAR_2--; VAR_2 >= 0; VAR_2--)
  FUNC_1(&VAR_1->desc_info[VAR_2]);
 return VAR_3;
}
