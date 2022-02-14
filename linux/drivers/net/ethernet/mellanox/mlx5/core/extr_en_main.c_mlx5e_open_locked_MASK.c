
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int xdp_prog; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct mlx5e_priv {int state; TYPE_1__* profile; TYPE_3__ channels; } ;
struct TYPE_4__ {int (* update_carrier ) (struct mlx5e_priv*) ;int (* update_rx ) (struct mlx5e_priv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*,TYPE_3__*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 int FUNC_9 (struct mlx5e_priv*) ;

int FUNC_10(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_6(VAR_1);
 bool VAR_3 = VAR_2->channels.params.xdp_prog;
 int VAR_4;

 FUNC_7(VAR_0, &VAR_2->state);
 if (VAR_3)
  FUNC_5(VAR_2);

 VAR_4 = FUNC_2(VAR_2, &VAR_2->channels);
 if (VAR_4)
  goto err_clear_state_opened_flag;

 VAR_2->profile->update_rx(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_2->profile->update_carrier)
  VAR_2->profile->update_carrier(VAR_2);

 FUNC_3(VAR_2);
 return 0;

err_clear_state_opened_flag:
 if (VAR_3)
  FUNC_4(VAR_2);
 FUNC_0(VAR_0, &VAR_2->state);
 return VAR_4;
}
