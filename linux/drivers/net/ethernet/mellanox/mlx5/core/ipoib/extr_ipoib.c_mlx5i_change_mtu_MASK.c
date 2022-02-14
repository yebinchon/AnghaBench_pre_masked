
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mlx5e_params {int sw_mtu; } ;
struct TYPE_2__ {struct mlx5e_params params; } ;
struct mlx5e_priv {int state_lock; int state; TYPE_1__ channels; } ;
struct mlx5e_channels {struct mlx5e_params params; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_1(VAR_1);
 struct mlx5e_channels VAR_4 = {};
 struct mlx5e_params *VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_3->state_lock);

 VAR_5 = &VAR_3->channels.params;

 if (!FUNC_4(VAR_0, &VAR_3->state)) {
  VAR_5->sw_mtu = VAR_2;
  VAR_1->mtu = VAR_5->sw_mtu;
  goto out;
 }

 VAR_4.params = *VAR_5;
 VAR_4.params.sw_mtu = VAR_2;

 VAR_6 = FUNC_0(VAR_3, &VAR_4, ((void*)0));
 if (VAR_6)
  goto out;

 VAR_1->mtu = VAR_4.params.sw_mtu;

out:
 FUNC_3(&VAR_3->state_lock);
 return VAR_6;
}
