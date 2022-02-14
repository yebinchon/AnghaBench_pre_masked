
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int num_tc; } ;
struct TYPE_9__ {int num; TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_3__ channels; struct net_device* netdev; TYPE_2__* profile; } ;
struct TYPE_8__ {int rq_groups; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct mlx5e_priv*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct mlx5e_priv*,TYPE_3__*) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct net_device*,int) ;
 int FUNC_11 (struct net_device*) ;

void FUNC_12(struct mlx5e_priv *VAR_0)
{
 int VAR_1 = VAR_0->channels.num * VAR_0->channels.params.num_tc;
 int VAR_2 = VAR_0->channels.num * VAR_0->profile->rq_groups;
 struct net_device *VAR_3 = VAR_0->netdev;

 FUNC_4(VAR_3);
 FUNC_10(VAR_3, VAR_1);
 FUNC_9(VAR_3, VAR_2);

 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->channels);
 FUNC_7(VAR_0);
 FUNC_11(VAR_0->netdev);

 if (FUNC_3(VAR_0))
  FUNC_1(VAR_0);

 FUNC_6(&VAR_0->channels);
 FUNC_5(VAR_0, &VAR_0->channels);

 FUNC_8(VAR_0, &VAR_0->channels);
}
