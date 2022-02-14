
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_rx_ring {int rx_alloc_pages; } ;
struct mlx4_en_rx_desc {TYPE_1__* data; } ;
struct mlx4_en_rx_alloc {scalar_t__ page_offset; scalar_t__ dma; int page; } ;
struct mlx4_en_priv {int num_frags; } ;
typedef int gfp_t ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_rx_alloc*,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx4_en_priv *VAR_1,
          struct mlx4_en_rx_ring *VAR_2,
          struct mlx4_en_rx_desc *VAR_3,
          struct mlx4_en_rx_alloc *VAR_4,
          gfp_t VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_frags; VAR_6++, VAR_4++) {
  if (!VAR_4->page) {
   if (FUNC_1(VAR_1, VAR_4, VAR_5))
    return -VAR_0;
   VAR_2->rx_alloc_pages++;
  }
  VAR_3->data[VAR_6].addr = FUNC_0(VAR_4->dma +
          VAR_4->page_offset);
 }
 return 0;
}
