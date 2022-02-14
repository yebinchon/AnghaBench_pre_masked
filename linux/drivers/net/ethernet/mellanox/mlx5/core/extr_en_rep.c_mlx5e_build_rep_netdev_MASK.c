
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int hw_features; int features; int * ethtool_ops; int * netdev_ops; int * dcbnl_ops; int dev_addr; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; struct mlx5e_rep_priv* ppriv; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; } ;
struct mlx5_core_dev {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_19)
{
 struct mlx5e_priv *VAR_20 = FUNC_4(VAR_19);
 struct mlx5e_rep_priv *VAR_21 = VAR_20->ppriv;
 struct mlx5_eswitch_rep *VAR_22 = VAR_21->rep;
 struct mlx5_core_dev *VAR_23 = VAR_20->mdev;

 if (VAR_22->vport == VAR_1) {
  FUNC_1(VAR_19, VAR_23->device);
  VAR_19->netdev_ops = &VAR_15;

  FUNC_3(VAR_23, VAR_19->dev_addr);
  VAR_19->ethtool_ops = &VAR_17;




 } else {
  VAR_19->netdev_ops = &VAR_14;
  FUNC_2(VAR_19);
  VAR_19->ethtool_ops = &VAR_16;
 }

 VAR_19->watchdog_timeo = 15 * VAR_0;

 VAR_19->features |= VAR_7;

 VAR_19->hw_features |= VAR_3;
 VAR_19->hw_features |= VAR_9;
 VAR_19->hw_features |= VAR_6;
 VAR_19->hw_features |= VAR_5;
 VAR_19->hw_features |= VAR_2;
 VAR_19->hw_features |= VAR_10;
 VAR_19->hw_features |= VAR_11;
 VAR_19->hw_features |= VAR_8;

 if (VAR_22->vport == VAR_1)
  VAR_19->hw_features |= VAR_4;
 else
  VAR_19->features |= VAR_12;

 VAR_19->features |= VAR_19->hw_features;
}
