
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int mode; int work; } ;
struct mlx5_wq_cyc {int * db; } ;
struct mlx5e_txqsq {size_t ch_ix; int txq_ix; int wq_ctrl; TYPE_5__ dim; int stop_room; int state; int recover_work; int * stats; int hw_mtu; int min_inline_mode; int uar_map; struct mlx5e_channel* channel; int mkey_be; int * clock; int tstamp; int pdev; struct mlx5_wq_cyc wq; } ;
struct TYPE_14__ {int db_numa_node; } ;
struct mlx5e_sq_param {TYPE_7__ wq; int sqc; } ;
struct TYPE_13__ {int cq_period_mode; } ;
struct mlx5e_params {TYPE_6__ tx_cq_moderation; int sw_mtu; int tx_min_inline_mode; } ;
struct mlx5e_channel {size_t ix; int cpu; TYPE_4__* priv; int mkey_be; int tstamp; int pdev; struct mlx5_core_dev* mdev; } ;
struct TYPE_8__ {int map; } ;
struct TYPE_9__ {TYPE_1__ bfreg; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; int clock; } ;
struct TYPE_11__ {int mdev; TYPE_3__* channel_stats; } ;
struct TYPE_10__ {int * sq; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct mlx5e_params*,int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_core_dev*,TYPE_7__*,void*,struct mlx5_wq_cyc*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5e_txqsq*,int ) ;
 scalar_t__ FUNC_10 (struct mlx5e_txqsq*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ,int *) ;
 int VAR_10 ;
 struct mlx5_wq_cyc* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_12(struct mlx5e_channel *VAR_13,
        int VAR_14,
        struct mlx5e_params *VAR_15,
        struct mlx5e_sq_param *VAR_16,
        struct mlx5e_txqsq *VAR_17,
        int VAR_18)
{
 void *VAR_19 = FUNC_2(VAR_10, VAR_16->sqc, VAR_11);
 struct mlx5_core_dev *VAR_20 = VAR_13->mdev;
 struct mlx5_wq_cyc *VAR_21 = &VAR_17->wq;
 int VAR_22;

 VAR_17->pdev = VAR_13->pdev;
 VAR_17->tstamp = VAR_13->tstamp;
 VAR_17->clock = &VAR_20->clock;
 VAR_17->mkey_be = VAR_13->mkey_be;
 VAR_17->channel = VAR_13;
 VAR_17->ch_ix = VAR_13->ix;
 VAR_17->txq_ix = VAR_14;
 VAR_17->uar_map = VAR_20->mlx5e_res.bfreg.map;
 VAR_17->min_inline_mode = VAR_15->tx_min_inline_mode;
 VAR_17->hw_mtu = FUNC_1(VAR_15, VAR_15->sw_mtu);
 VAR_17->stats = &VAR_13->priv->channel_stats[VAR_13->ix].sq[VAR_18];
 VAR_17->stop_room = VAR_4;
 FUNC_0(&VAR_17->recover_work, VAR_9);
 if (!FUNC_3(VAR_20, VAR_12))
  FUNC_11(VAR_3, &VAR_17->state);
 if (FUNC_4(VAR_13->priv->mdev))
  FUNC_11(VAR_1, &VAR_17->state);
 VAR_16->wq.db_numa_node = FUNC_5(VAR_13->cpu);
 VAR_22 = FUNC_7(VAR_20, &VAR_16->wq, VAR_19, VAR_21, &VAR_17->wq_ctrl);
 if (VAR_22)
  return VAR_22;
 VAR_21->db = &VAR_21->db[VAR_6];

 VAR_22 = FUNC_9(VAR_17, FUNC_5(VAR_13->cpu));
 if (VAR_22)
  goto err_sq_wq_destroy;

 FUNC_0(&VAR_17->dim.work, VAR_8);
 VAR_17->dim.mode = VAR_15->tx_cq_moderation.cq_period_mode;

 return 0;

err_sq_wq_destroy:
 FUNC_8(&VAR_17->wq_ctrl);

 return VAR_22;
}
