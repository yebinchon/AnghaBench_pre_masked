
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct mlx5_wq_cyc {int * db; } ;
struct mlx5e_xdpsq {int wq_ctrl; struct xdp_umem* umem; int * stats; int hw_mtu; int min_inline_mode; int uar_map; struct mlx5e_channel* channel; int mkey_be; int pdev; struct mlx5_wq_cyc wq; } ;
struct TYPE_10__ {int db_numa_node; } ;
struct mlx5e_sq_param {TYPE_5__ wq; int sqc; } ;
struct mlx5e_params {int sw_mtu; int tx_min_inline_mode; } ;
struct mlx5e_channel {size_t ix; int cpu; TYPE_4__* priv; int mkey_be; int pdev; struct mlx5_core_dev* mdev; } ;
struct TYPE_6__ {int map; } ;
struct TYPE_7__ {TYPE_1__ bfreg; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; } ;
struct TYPE_9__ {TYPE_3__* channel_stats; } ;
struct TYPE_8__ {int rq_xdpsq; int xdpsq; int xsksq; } ;


 int FUNC_0 (struct mlx5e_params*,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_5__*,void*,struct mlx5_wq_cyc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5e_xdpsq*,int ) ;
 int VAR_1 ;
 struct mlx5_wq_cyc* VAR_2 ;

__attribute__((used)) static int FUNC_6(struct mlx5e_channel *VAR_3,
        struct mlx5e_params *VAR_4,
        struct xdp_umem *VAR_5,
        struct mlx5e_sq_param *VAR_6,
        struct mlx5e_xdpsq *VAR_7,
        bool VAR_8)
{
 void *VAR_9 = FUNC_1(VAR_1, VAR_6->sqc, VAR_2);
 struct mlx5_core_dev *VAR_10 = VAR_3->mdev;
 struct mlx5_wq_cyc *VAR_11 = &VAR_7->wq;
 int VAR_12;

 VAR_7->pdev = VAR_3->pdev;
 VAR_7->mkey_be = VAR_3->mkey_be;
 VAR_7->channel = VAR_3;
 VAR_7->uar_map = VAR_10->mlx5e_res.bfreg.map;
 VAR_7->min_inline_mode = VAR_4->tx_min_inline_mode;
 VAR_7->hw_mtu = FUNC_0(VAR_4, VAR_4->sw_mtu);
 VAR_7->umem = VAR_5;

 VAR_7->stats = VAR_7->umem ?
  &VAR_3->priv->channel_stats[VAR_3->ix].xsksq :
  VAR_8 ?
   &VAR_3->priv->channel_stats[VAR_3->ix].xdpsq :
   &VAR_3->priv->channel_stats[VAR_3->ix].rq_xdpsq;

 VAR_6->wq.db_numa_node = FUNC_2(VAR_3->cpu);
 VAR_12 = FUNC_3(VAR_10, &VAR_6->wq, VAR_9, VAR_11, &VAR_7->wq_ctrl);
 if (VAR_12)
  return VAR_12;
 VAR_11->db = &VAR_11->db[VAR_0];

 VAR_12 = FUNC_5(VAR_7, FUNC_2(VAR_3->cpu));
 if (VAR_12)
  goto err_sq_wq_destroy;

 return 0;

err_sq_wq_destroy:
 FUNC_4(&VAR_7->wq_ctrl);

 return VAR_12;
}
