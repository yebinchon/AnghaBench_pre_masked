
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int * desc_info; } ;
struct rocker_port {struct rocker* rocker; struct rocker_dma_ring_info rx_ring; } ;
struct rocker {int dummy; } ;


 int FUNC_0 (struct rocker_port const*,int *) ;
 int FUNC_1 (struct rocker const*,int *) ;

__attribute__((used)) static int FUNC_2(const struct rocker_port *VAR_0)
{
 const struct rocker_dma_ring_info *VAR_1 = &VAR_0->rx_ring;
 const struct rocker *VAR_2 = VAR_0->rocker;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0,
         &VAR_1->desc_info[VAR_3]);
  if (VAR_4)
   goto rollback;
 }
 return 0;

rollback:
 for (VAR_3--; VAR_3 >= 0; VAR_3--)
  FUNC_1(VAR_2, &VAR_1->desc_info[VAR_3]);
 return VAR_4;
}
