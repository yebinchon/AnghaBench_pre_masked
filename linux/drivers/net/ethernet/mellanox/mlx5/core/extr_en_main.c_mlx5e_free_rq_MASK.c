
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int head; int tail; struct mlx5e_dma_info* page_cache; } ;
struct TYPE_5__ {int frags; } ;
struct TYPE_4__ {int info; } ;
struct mlx5e_rq {int wq_type; int wq_ctrl; int page_pool; int xdp_rxq; TYPE_3__ page_cache; TYPE_2__ wqe; int umr_mkey; int mdev; TYPE_1__ mpwqe; scalar_t__ xdp_prog; } ;
struct mlx5e_dma_info {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5e_rq*) ;
 int FUNC_5 (struct mlx5e_rq*,struct mlx5e_dma_info*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_rq *VAR_1)
{
 int VAR_2;

 if (VAR_1->xdp_prog)
  FUNC_0(VAR_1->xdp_prog);

 switch (VAR_1->wq_type) {
 case 128:
  FUNC_1(VAR_1->mpwqe.info);
  FUNC_2(VAR_1->mdev, &VAR_1->umr_mkey);
  break;
 default:
  FUNC_1(VAR_1->wqe.frags);
  FUNC_4(VAR_1);
 }

 for (VAR_2 = VAR_1->page_cache.head; VAR_2 != VAR_1->page_cache.tail;
      VAR_2 = (VAR_2 + 1) & (VAR_0 - 1)) {
  struct mlx5e_dma_info *VAR_3 = &VAR_1->page_cache.page_cache[VAR_2];





  FUNC_5(VAR_1, VAR_3, 0);
 }

 FUNC_7(&VAR_1->xdp_rxq);
 FUNC_6(VAR_1->page_pool);
 FUNC_3(&VAR_1->wq_ctrl);
}
