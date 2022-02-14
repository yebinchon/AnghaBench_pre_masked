
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int * desc_info; } ;
struct rocker_port {struct rocker* rocker; struct rocker_dma_ring_info rx_ring; } ;
struct rocker {int dummy; } ;


 int FUNC_0 (struct rocker const*,int *) ;

__attribute__((used)) static void FUNC_1(const struct rocker_port *VAR_0)
{
 const struct rocker_dma_ring_info *VAR_1 = &VAR_0->rx_ring;
 const struct rocker *VAR_2 = VAR_0->rocker;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++)
  FUNC_0(VAR_2, &VAR_1->desc_info[VAR_3]);
}
