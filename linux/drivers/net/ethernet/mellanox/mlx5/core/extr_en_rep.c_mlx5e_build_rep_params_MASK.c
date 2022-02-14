
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mtu; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_params {int num_tc; int tunneled_offload_en; int num_channels; int tx_min_inline_mode; scalar_t__ rx_dim_enabled; int log_sq_size; int sw_mtu; int hard_mtu; } ;
struct TYPE_2__ {struct mlx5e_params params; } ;
struct mlx5e_priv {int rss_params; TYPE_1__ channels; struct mlx5_core_dev* mdev; struct mlx5e_rep_priv* ppriv; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mlx5e_params*,int ) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct mlx5e_priv *VAR_9 = FUNC_5(VAR_8);
 struct mlx5e_rep_priv *VAR_10 = VAR_9->ppriv;
 struct mlx5_eswitch_rep *VAR_11 = VAR_10->rep;
 struct mlx5_core_dev *VAR_12 = VAR_9->mdev;
 struct mlx5e_params *VAR_13;

 u8 VAR_14 = FUNC_0(VAR_12, VAR_7) ?
      VAR_3 :
      VAR_4;

 VAR_13 = &VAR_9->channels.params;
 VAR_13->hard_mtu = VAR_0;
 VAR_13->sw_mtu = VAR_8->mtu;


 if (VAR_11->vport == VAR_5)
  VAR_13->log_sq_size = VAR_1;
 else
  VAR_13->log_sq_size = VAR_2;


 FUNC_2(VAR_12, VAR_13);


 VAR_13->rx_dim_enabled = FUNC_0(VAR_12, VAR_6);
 FUNC_4(VAR_13, VAR_14);

 VAR_13->num_tc = 1;
 VAR_13->tunneled_offload_en = 0;

 FUNC_1(VAR_12, &VAR_13->tx_min_inline_mode);


 FUNC_3(&VAR_9->rss_params, VAR_13->num_channels);
}
