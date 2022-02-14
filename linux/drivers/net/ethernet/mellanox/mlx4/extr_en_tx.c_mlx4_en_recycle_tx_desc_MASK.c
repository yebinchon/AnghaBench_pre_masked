
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx4_en_tx_ring {int recycle_ring; struct mlx4_en_tx_info* tx_info; } ;
struct mlx4_en_tx_info {int nr_txbb; int page; int map0_dma; } ;
struct mlx4_en_rx_alloc {int dma; int page; } ;
struct mlx4_en_priv {int dma_dir; int ddev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct mlx4_en_rx_alloc*) ;
 int FUNC_2 (int ) ;

u32 FUNC_3(struct mlx4_en_priv *VAR_1,
       struct mlx4_en_tx_ring *VAR_2,
       int VAR_3, u64 VAR_4,
       int VAR_5)
{
 struct mlx4_en_tx_info *VAR_6 = &VAR_2->tx_info[VAR_3];
 struct mlx4_en_rx_alloc VAR_7 = {
  .page = VAR_6->page,
  .dma = VAR_6->map0_dma,
 };

 if (!FUNC_1(VAR_2->recycle_ring, &VAR_7)) {
  FUNC_0(VAR_1->ddev, VAR_6->map0_dma,
          VAR_0, VAR_1->dma_dir);
  FUNC_2(VAR_6->page);
 }

 return VAR_6->nr_txbb;
}
