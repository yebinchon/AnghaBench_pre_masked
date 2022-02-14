
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct mlx5_rep_uplink_priv {int tc_ht; TYPE_2__ netdevice_nb; int tc_indr_block_priv_list; int tun_entropy; int unready_flows; int unready_flows_lock; } ;
struct mlx5e_rep_priv {struct mlx5_rep_uplink_priv uplink_priv; TYPE_1__* rep; } ;
struct mlx5e_priv {int mdev; struct mlx5e_rep_priv* ppriv; } ;
struct TYPE_3__ {scalar_t__ vport; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_rep_priv *VAR_3 = VAR_2->ppriv;
 struct mlx5_rep_uplink_priv *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_2->mdev, "create tises failed, %d\n", VAR_5);
  return VAR_5;
 }

 if (VAR_3->rep->vport == VAR_0) {
  VAR_4 = &VAR_3->uplink_priv;

  FUNC_8(&VAR_4->unready_flows_lock);
  FUNC_0(&VAR_4->unready_flows);


  VAR_5 = FUNC_7(&VAR_4->tc_ht);
  if (VAR_5)
   goto destroy_tises;

  FUNC_3(&VAR_4->tun_entropy, VAR_2->mdev);


  FUNC_0(&VAR_4->tc_indr_block_priv_list);
  VAR_4->netdevice_nb.notifier_call = VAR_1;
  VAR_5 = FUNC_9(&VAR_4->netdevice_nb);
  if (VAR_5) {
   FUNC_1(VAR_2->mdev, "Failed to register netdev notifier\n");
   goto tc_esw_cleanup;
  }
 }

 return 0;

tc_esw_cleanup:
 FUNC_6(&VAR_4->tc_ht);
destroy_tises:
 FUNC_5(VAR_2);
 return VAR_5;
}
