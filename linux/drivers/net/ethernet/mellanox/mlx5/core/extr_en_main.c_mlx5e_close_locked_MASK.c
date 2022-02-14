
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ xdp_prog; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; int netdev; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_4(VAR_1);




 if (!FUNC_6(VAR_0, &VAR_2->state))
  return 0;

 if (VAR_2->channels.params.xdp_prog)
  FUNC_3(VAR_2);
 FUNC_0(VAR_0, &VAR_2->state);

 FUNC_5(VAR_2->netdev);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->channels);

 return 0;
}
