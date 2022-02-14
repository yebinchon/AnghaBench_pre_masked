
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; TYPE_2__* buf; } ;
struct mlx4_en_rx_ring {scalar_t__ stride; int buf; TYPE_1__ page_cache; } ;
struct mlx4_en_priv {int dma_dir; int ddev; } ;
struct TYPE_4__ {int page; int dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx4_en_priv *VAR_2,
    struct mlx4_en_rx_ring *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->page_cache.index; VAR_4++) {
  FUNC_0(VAR_2->ddev, VAR_3->page_cache.buf[VAR_4].dma,
          VAR_0, VAR_2->dma_dir);
  FUNC_2(VAR_3->page_cache.buf[VAR_4].page);
 }
 VAR_3->page_cache.index = 0;
 FUNC_1(VAR_2, VAR_3);
 if (VAR_3->stride <= VAR_1)
  VAR_3->buf -= VAR_1;
}
