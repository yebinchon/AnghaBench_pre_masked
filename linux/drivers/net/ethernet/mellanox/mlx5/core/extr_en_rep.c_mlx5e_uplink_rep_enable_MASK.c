
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int max_mtu; int min_mtu; } ;
struct TYPE_5__ {int reoffload_flows_work; } ;
struct mlx5e_rep_priv {TYPE_2__ uplink_priv; } ;
struct TYPE_6__ {int notifier_call; } ;
struct TYPE_4__ {int params; } ;
struct mlx5e_priv {TYPE_3__ events_nb; TYPE_1__ channels; struct mlx5_core_dev* mdev; struct mlx5e_rep_priv* ppriv; struct net_device* netdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,struct net_device*) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_3__*) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct mlx5e_priv *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct mlx5_core_dev *VAR_5 = VAR_3->mdev;
 struct mlx5e_rep_priv *VAR_6 = VAR_3->ppriv;
 u16 VAR_7;

 VAR_4->min_mtu = VAR_0;
 FUNC_4(VAR_3->mdev, &VAR_7, 1);
 VAR_4->max_mtu = FUNC_1(&VAR_3->channels.params, VAR_7);
 FUNC_7(VAR_3);

 FUNC_0(&VAR_6->uplink_priv.reoffload_flows_work,
    VAR_1);

 FUNC_2(VAR_5, VAR_4);
 VAR_3->events_nb.notifier_call = VAR_2;
 FUNC_3(VAR_5, &VAR_3->events_nb);




}
