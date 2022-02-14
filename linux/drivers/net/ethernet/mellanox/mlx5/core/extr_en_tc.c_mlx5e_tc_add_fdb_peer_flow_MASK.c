
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5e_tc_flow_parse_attr {int filter_dev; } ;
struct mlx5e_tc_flow {int peer; struct mlx5e_tc_flow* peer_flow; TYPE_2__* esw_attr; struct mlx5e_priv* priv; } ;
struct mlx5e_rep_priv {int netdev; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct TYPE_7__ {int peer_mutex; int peer_flows; } ;
struct mlx5_eswitch {TYPE_3__ offloads; } ;
struct mlx5_devcom {int dummy; } ;
struct TYPE_5__ {struct mlx5_devcom* devcom; struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_8__ {scalar_t__ vport; } ;
struct TYPE_6__ {TYPE_4__* in_rep; struct mlx5e_tc_flow_parse_attr* parse_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx5e_tc_flow*) ;
 int VAR_4 ;
 struct mlx5e_tc_flow* FUNC_2 (struct mlx5e_priv*,struct flow_cls_offload*,unsigned long,int ,TYPE_4__*,struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_4 (int *,int *) ;
 struct mlx5_eswitch* FUNC_5 (struct mlx5_devcom*,int ) ;
 int FUNC_6 (struct mlx5_devcom*,int ) ;
 struct mlx5e_rep_priv* FUNC_7 (struct mlx5_eswitch*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct mlx5e_priv* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct flow_cls_offload *VAR_5,
          struct mlx5e_tc_flow *VAR_6,
          unsigned long VAR_7)
{
 struct mlx5e_priv *VAR_8 = VAR_6->priv, *VAR_9;
 struct mlx5_eswitch *VAR_10 = VAR_8->mdev->priv.eswitch, *VAR_11;
 struct mlx5_devcom *VAR_12 = VAR_8->mdev->priv.devcom;
 struct mlx5e_tc_flow_parse_attr *VAR_13;
 struct mlx5e_rep_priv *VAR_14;
 struct mlx5e_tc_flow *VAR_15;
 struct mlx5_core_dev *VAR_16;
 int VAR_17 = 0;

 VAR_11 = FUNC_5(VAR_12, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_11, VAR_4);
 VAR_9 = FUNC_10(VAR_14->netdev);






 if (VAR_6->esw_attr->in_rep->vport == VAR_3)
  VAR_16 = VAR_9->mdev;
 else
  VAR_16 = VAR_8->mdev;

 VAR_13 = VAR_6->esw_attr->parse_attr;
 VAR_15 = FUNC_2(VAR_9, VAR_5, VAR_7,
      VAR_13->filter_dev,
      VAR_6->esw_attr->in_rep, VAR_16);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_1(VAR_15);
  goto out;
 }

 VAR_6->peer_flow = VAR_15;
 FUNC_3(VAR_6, VAR_0);
 FUNC_8(&VAR_10->offloads.peer_mutex);
 FUNC_4(&VAR_6->peer, &VAR_10->offloads.peer_flows);
 FUNC_9(&VAR_10->offloads.peer_mutex);

out:
 FUNC_6(VAR_12, VAR_2);
 return VAR_17;
}
