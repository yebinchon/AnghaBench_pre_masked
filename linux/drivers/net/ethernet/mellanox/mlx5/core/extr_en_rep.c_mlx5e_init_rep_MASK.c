
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_profile {int dummy; } ;
struct TYPE_3__ {int num_channels; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct mlx5e_priv*,struct mlx5_core_dev*,struct mlx5e_profile const*,void*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_1,
     struct net_device *VAR_2,
     const struct mlx5e_profile *VAR_3,
     void *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_1, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5->channels.params.num_channels = VAR_0;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 FUNC_3(VAR_5);

 return 0;
}
