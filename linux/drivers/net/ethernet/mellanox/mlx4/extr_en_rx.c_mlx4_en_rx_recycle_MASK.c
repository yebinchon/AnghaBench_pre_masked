
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_page_cache {size_t index; TYPE_1__* buf; } ;
struct mlx4_en_rx_ring {struct mlx4_en_page_cache page_cache; } ;
struct mlx4_en_rx_alloc {int dma; int page; } ;
struct TYPE_2__ {int dma; int page; } ;


 size_t VAR_0 ;

bool FUNC_0(struct mlx4_en_rx_ring *VAR_1,
   struct mlx4_en_rx_alloc *VAR_2)
{
 struct mlx4_en_page_cache *VAR_3 = &VAR_1->page_cache;

 if (VAR_3->index >= VAR_0)
  return 0;

 VAR_3->buf[VAR_3->index].page = VAR_2->page;
 VAR_3->buf[VAR_3->index].dma = VAR_2->dma;
 VAR_3->index++;
 return 1;
}
