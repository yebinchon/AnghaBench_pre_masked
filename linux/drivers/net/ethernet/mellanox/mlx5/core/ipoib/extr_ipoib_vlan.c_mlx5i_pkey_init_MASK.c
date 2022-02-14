
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int * ethtool_ops; int * netdev_ops; } ;
struct mlx5e_profile {int dummy; } ;
struct TYPE_3__ {int log_rq_mtu_frames; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlx5_core_dev*,struct net_device*,struct mlx5e_profile const*,void*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_3,
      struct net_device *VAR_4,
      const struct mlx5e_profile *VAR_5,
      void *VAR_6)
{
 struct mlx5e_priv *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_4->netdev_ops = &VAR_2;


 VAR_4->ethtool_ops = &VAR_1;


 VAR_7->channels.params.log_rq_mtu_frames = VAR_0;

 return 0;
}
