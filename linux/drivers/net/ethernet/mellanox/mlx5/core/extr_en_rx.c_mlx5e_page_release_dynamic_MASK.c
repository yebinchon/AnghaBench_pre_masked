
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int page_pool; } ;
struct mlx5e_dma_info {int page; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5e_rq*,struct mlx5e_dma_info*) ;
 scalar_t__ FUNC_2 (struct mlx5e_rq*,struct mlx5e_dma_info*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct mlx5e_rq *VAR_0,
    struct mlx5e_dma_info *VAR_1,
    bool VAR_2)
{
 if (FUNC_0(VAR_2)) {
  if (FUNC_2(VAR_0, VAR_1))
   return;

  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_0->page_pool, VAR_1->page);
 } else {
  FUNC_1(VAR_0, VAR_1);
  FUNC_4(VAR_0->page_pool, VAR_1->page);
  FUNC_5(VAR_1->page);
 }
}
