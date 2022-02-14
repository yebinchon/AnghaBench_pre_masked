
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_5__* peer_flow; int peer; TYPE_4__* priv; } ;
struct TYPE_7__ {int peer_mutex; } ;
struct mlx5_eswitch {TYPE_1__ offloads; } ;
struct TYPE_11__ {int priv; } ;
struct TYPE_10__ {TYPE_3__* mdev; } ;
struct TYPE_8__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_9__ {TYPE_2__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mlx5e_tc_flow *VAR_2)
{
 struct mlx5_eswitch *VAR_3 = VAR_2->priv->mdev->priv.eswitch;

 if (!FUNC_1(VAR_2, VAR_1) ||
     !FUNC_1(VAR_2, VAR_0))
  return;

 FUNC_5(&VAR_3->offloads.peer_mutex);
 FUNC_3(&VAR_2->peer);
 FUNC_6(&VAR_3->offloads.peer_mutex);

 FUNC_0(VAR_2, VAR_0);

 FUNC_4(VAR_2->peer_flow->priv, VAR_2->peer_flow);
 FUNC_2(VAR_2->peer_flow);
 VAR_2->peer_flow = ((void*)0);
}
