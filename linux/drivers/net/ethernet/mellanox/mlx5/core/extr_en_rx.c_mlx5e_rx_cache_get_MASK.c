
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq_stats {int cache_reuse; int cache_busy; int cache_empty; } ;
struct mlx5e_page_cache {size_t head; size_t tail; struct mlx5e_dma_info* page_cache; } ;
struct mlx5e_rq {int pdev; struct mlx5e_rq_stats* stats; struct mlx5e_page_cache page_cache; } ;
struct mlx5e_dma_info {int addr; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(struct mlx5e_rq *VAR_3,
          struct mlx5e_dma_info *VAR_4)
{
 struct mlx5e_page_cache *VAR_5 = &VAR_3->page_cache;
 struct mlx5e_rq_stats *VAR_6 = VAR_3->stats;

 if (FUNC_2(VAR_5->head == VAR_5->tail)) {
  VAR_6->cache_empty++;
  return 0;
 }

 if (FUNC_1(VAR_5->page_cache[VAR_5->head].page) != 1) {
  VAR_6->cache_busy++;
  return 0;
 }

 *VAR_4 = VAR_5->page_cache[VAR_5->head];
 VAR_5->head = (VAR_5->head + 1) & (VAR_1 - 1);
 VAR_6->cache_reuse++;

 FUNC_0(VAR_3->pdev, VAR_4->addr,
       VAR_2,
       VAR_0);
 return 1;
}
