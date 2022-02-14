
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5e_tc_flow {struct mlx5_esw_flow_attr* esw_attr; } ;
struct mlx5e_priv {TYPE_2__* mdev; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {int action; int counter; int counter_dev; TYPE_4__* parse_attr; TYPE_3__* dests; } ;
struct TYPE_8__ {int * tun_info; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_6__ {int geneve; TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_esw_flow_attr*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct mlx5e_tc_flow*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5e_priv*,struct mlx5e_tc_flow*,int) ;
 int FUNC_8 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 scalar_t__ FUNC_9 (struct mlx5e_tc_flow*) ;
 int FUNC_10 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,struct mlx5_esw_flow_attr*) ;
 int FUNC_11 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,struct mlx5_esw_flow_attr*) ;
 int FUNC_12 (struct mlx5e_tc_flow*) ;

__attribute__((used)) static void FUNC_13(struct mlx5e_priv *VAR_6,
      struct mlx5e_tc_flow *VAR_7)
{
 struct mlx5_eswitch *VAR_8 = VAR_6->mdev->priv.eswitch;
 struct mlx5_esw_flow_attr *VAR_9 = VAR_7->esw_attr;
 struct mlx5_esw_flow_attr VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_7, VAR_4)) {
  FUNC_12(VAR_7);
  FUNC_2(VAR_9->parse_attr);
  return;
 }

 if (FUNC_9(VAR_7)) {
  if (FUNC_0(VAR_7, VAR_5))
   FUNC_11(VAR_8, VAR_7, &VAR_10);
  else
   FUNC_10(VAR_8, VAR_7, VAR_9);
 }

 if (FUNC_5(VAR_7))
  FUNC_6(VAR_6->mdev->geneve);

 FUNC_3(VAR_8, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  if (VAR_9->dests[VAR_11].flags & VAR_0) {
   FUNC_7(VAR_6, VAR_7, VAR_11);
   FUNC_1(VAR_9->parse_attr->tun_info[VAR_11]);
  }
 FUNC_2(VAR_9->parse_attr);

 if (VAR_9->action & VAR_2)
  FUNC_8(VAR_6, VAR_7);

 if (VAR_9->action & VAR_1)
  FUNC_4(VAR_9->counter_dev, VAR_9->counter);
}
