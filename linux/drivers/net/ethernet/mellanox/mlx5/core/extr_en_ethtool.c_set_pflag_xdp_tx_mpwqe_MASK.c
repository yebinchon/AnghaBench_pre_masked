
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int params; } ;
struct mlx5e_priv {TYPE_1__ channels; int state; struct mlx5_core_dev* mdev; } ;
struct mlx5e_channels {int params; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, bool VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_3(VAR_4);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 struct mlx5e_channels VAR_8 = {};
 int VAR_9;

 if (VAR_5 && !FUNC_1(VAR_7, VAR_3))
  return -VAR_0;

 VAR_8.params = VAR_6->channels.params;

 FUNC_0(&VAR_8.params, VAR_1, VAR_5);

 if (!FUNC_4(VAR_2, &VAR_6->state)) {
  VAR_6->channels.params = VAR_8.params;
  return 0;
 }

 VAR_9 = FUNC_2(VAR_6, &VAR_8, ((void*)0));
 return VAR_9;
}
