
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_rq_stats {int cache_waive; int cache_full; } ;
struct mlx5e_page_cache {int tail; int head; struct mlx5e_dma_info* page_cache; } ;
struct mlx5e_rq {struct mlx5e_rq_stats* stats; struct mlx5e_page_cache page_cache; } ;
struct mlx5e_dma_info {int page; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct mlx5e_rq *VAR_1,
          struct mlx5e_dma_info *VAR_2)
{
 struct mlx5e_page_cache *VAR_3 = &VAR_1->page_cache;
 u32 VAR_4 = (VAR_3->tail + 1) & (VAR_0 - 1);
 struct mlx5e_rq_stats *VAR_5 = VAR_1->stats;

 if (VAR_4 == VAR_3->head) {
  VAR_5->cache_full++;
  return 0;
 }

 if (FUNC_1(FUNC_0(VAR_2->page))) {
  VAR_5->cache_waive++;
  return 0;
 }

 VAR_3->page_cache[VAR_3->tail] = *VAR_2;
 VAR_3->tail = VAR_4;
 return 1;
}
