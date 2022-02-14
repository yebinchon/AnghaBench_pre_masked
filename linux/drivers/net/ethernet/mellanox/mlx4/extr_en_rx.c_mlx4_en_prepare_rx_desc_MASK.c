
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t index; TYPE_1__* buf; } ;
struct mlx4_en_rx_ring {int log_stride; TYPE_2__ page_cache; struct mlx4_en_rx_alloc* rx_info; struct mlx4_en_rx_desc* buf; } ;
struct mlx4_en_rx_desc {TYPE_3__* data; } ;
struct mlx4_en_rx_alloc {scalar_t__ dma; scalar_t__ page_offset; scalar_t__ page; } ;
struct mlx4_en_priv {int log_rx_info; } ;
typedef int gfp_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_4__ {scalar_t__ dma; scalar_t__ page; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_alloc*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_en_priv *VAR_1,
       struct mlx4_en_rx_ring *VAR_2, int VAR_3,
       gfp_t VAR_4)
{
 struct mlx4_en_rx_desc *VAR_5 = VAR_2->buf +
  (VAR_3 << VAR_2->log_stride);
 struct mlx4_en_rx_alloc *VAR_6 = VAR_2->rx_info +
     (VAR_3 << VAR_1->log_rx_info);
 if (FUNC_1(VAR_2->page_cache.index > 0)) {

  if (!VAR_6->page) {
   VAR_2->page_cache.index--;
   VAR_6->page = VAR_2->page_cache.buf[VAR_2->page_cache.index].page;
   VAR_6->dma = VAR_2->page_cache.buf[VAR_2->page_cache.index].dma;
  }
  VAR_6->page_offset = VAR_0;
  VAR_5->data[0].addr = FUNC_0(VAR_6->dma +
          VAR_0);
  return 0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6, VAR_4);
}
