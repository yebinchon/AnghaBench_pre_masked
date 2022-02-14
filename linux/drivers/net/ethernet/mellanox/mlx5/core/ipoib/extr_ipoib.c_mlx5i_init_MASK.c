
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * ethtool_ops; int * netdev_ops; int hw_features; int mtu; int max_mtu; } ;
struct mlx5e_profile {int dummy; } ;
struct TYPE_2__ {int params; } ;
struct mlx5e_priv {TYPE_1__ channels; int max_nch; int rss_params; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlx5_core_dev*,int *,int *,int *,int ,int ) ;
 int FUNC_1 (struct net_device*,struct mlx5e_priv*,struct mlx5_core_dev*,struct mlx5e_profile const*,void*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_6(struct mlx5_core_dev *VAR_10,
        struct net_device *VAR_11,
        const struct mlx5e_profile *VAR_12,
        void *VAR_13)
{
 struct mlx5e_priv *VAR_14 = FUNC_5(VAR_11);
 int VAR_15;

 VAR_15 = FUNC_1(VAR_11, VAR_14, VAR_10, VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;

 FUNC_2(VAR_14);
 VAR_11->mtu = VAR_11->max_mtu;

 FUNC_0(VAR_10, ((void*)0), &VAR_14->rss_params, &VAR_14->channels.params,
          VAR_14->max_nch, VAR_11->mtu);
 FUNC_4(VAR_10, &VAR_14->channels.params);

 FUNC_3(VAR_14);


 VAR_11->hw_features |= VAR_5;
 VAR_11->hw_features |= VAR_2;
 VAR_11->hw_features |= VAR_1;
 VAR_11->hw_features |= VAR_0;
 VAR_11->hw_features |= VAR_6;
 VAR_11->hw_features |= VAR_7;
 VAR_11->hw_features |= VAR_3;
 VAR_11->hw_features |= VAR_4;

 VAR_11->netdev_ops = &VAR_9;
 VAR_11->ethtool_ops = &VAR_8;

 return 0;
}
