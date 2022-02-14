
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_dir; } ;
struct mlx5e_rq {int page_pool; int pdev; TYPE_1__ buff; } ;
struct mlx5e_dma_info {int * page; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx5e_rq*,struct mlx5e_dma_info*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct mlx5e_rq *VAR_2,
     struct mlx5e_dma_info *VAR_3)
{
 if (FUNC_2(VAR_2, VAR_3))
  return 0;

 VAR_3->page = FUNC_3(VAR_2->page_pool);
 if (FUNC_5(!VAR_3->page))
  return -VAR_0;

 VAR_3->addr = FUNC_0(VAR_2->pdev, VAR_3->page, 0,
          VAR_1, VAR_2->buff.map_dir);
 if (FUNC_5(FUNC_1(VAR_2->pdev, VAR_3->addr))) {
  FUNC_4(VAR_2->page_pool, VAR_3->page);
  VAR_3->page = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
