
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int * desc_info; scalar_t__ tail; scalar_t__ head; } ;
struct rocker {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rocker const*,struct rocker_dma_ring_info*,int *) ;

__attribute__((used)) static void FUNC_3(const struct rocker *VAR_0,
          struct rocker_dma_ring_info *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->head || VAR_1->tail);




 for (VAR_2 = 0; VAR_2 < VAR_1->size - 1; VAR_2++)
  FUNC_2(VAR_0, VAR_1, &VAR_1->desc_info[VAR_2]);
 FUNC_1(&VAR_1->desc_info[VAR_2]);
}
