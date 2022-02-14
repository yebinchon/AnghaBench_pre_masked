
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_txqsq {int pdev; struct mlx5e_sq_stats* stats; } ;
struct mlx5e_tx_wqe_info {scalar_t__ num_bytes; int resync_dump_frag_page; } ;
struct mlx5e_sq_stats {int tls_dump_bytes; int tls_dump_packets; } ;
struct mlx5e_sq_dma {int dummy; } ;


 struct mlx5e_sq_dma* FUNC_0 (struct mlx5e_txqsq*,int ) ;
 int FUNC_1 (int ,struct mlx5e_sq_dma*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx5e_txqsq *VAR_0,
        struct mlx5e_tx_wqe_info *VAR_1,
        u32 *VAR_2)
{
 struct mlx5e_sq_stats *VAR_3;
 struct mlx5e_sq_dma *VAR_4;

 if (!VAR_1->resync_dump_frag_page)
  return;

 VAR_4 = FUNC_0(VAR_0, (*VAR_2)++);
 VAR_3 = VAR_0->stats;

 FUNC_1(VAR_0->pdev, VAR_4);
 FUNC_2(VAR_1->resync_dump_frag_page);
 VAR_3->tls_dump_packets++;
 VAR_3->tls_dump_bytes += VAR_1->num_bytes;
}
