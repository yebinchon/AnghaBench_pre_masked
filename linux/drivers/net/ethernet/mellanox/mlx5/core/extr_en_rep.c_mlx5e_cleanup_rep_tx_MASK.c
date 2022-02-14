
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unready_flows_lock; int tc_ht; int netdevice_nb; } ;
struct mlx5e_rep_priv {TYPE_2__ uplink_priv; TYPE_1__* rep; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;
struct TYPE_3__ {scalar_t__ vport; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_rep_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_priv *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = VAR_1->ppriv;

 FUNC_0(VAR_1);

 if (VAR_2->rep->vport == VAR_0) {

  FUNC_4(&VAR_2->uplink_priv.netdevice_nb);
  FUNC_1(VAR_2);


  FUNC_2(&VAR_2->uplink_priv.tc_ht);
  FUNC_3(&VAR_2->uplink_priv.unready_flows_lock);
 }
}
