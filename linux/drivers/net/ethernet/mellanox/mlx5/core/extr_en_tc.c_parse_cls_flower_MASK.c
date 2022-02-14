
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow {TYPE_5__* nic_attr; TYPE_4__* esw_attr; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {int netdev; struct mlx5e_rep_priv* ppriv; struct mlx5_core_dev* mdev; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; } ;
struct TYPE_8__ {scalar_t__ inline_mode; } ;
struct mlx5_eswitch {TYPE_3__ offloads; } ;
struct TYPE_7__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_6__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_10__ {scalar_t__ match_level; } ;
struct TYPE_9__ {scalar_t__ outer_match_level; scalar_t__ inner_match_level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5_flow_spec*,struct flow_cls_offload*,struct net_device*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct mlx5e_tc_flow*) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_4,
       struct mlx5e_tc_flow *VAR_5,
       struct mlx5_flow_spec *VAR_6,
       struct flow_cls_offload *VAR_7,
       struct net_device *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;
 struct netlink_ext_ack *VAR_12 = VAR_7->common.extack;
 struct mlx5_core_dev *VAR_13 = VAR_4->mdev;
 struct mlx5_eswitch *VAR_14 = VAR_13->priv.eswitch;
 struct mlx5e_rep_priv *VAR_15 = VAR_4->ppriv;
 struct mlx5_eswitch_rep *VAR_16;
 bool VAR_17;
 int VAR_18;

 VAR_9 = VAR_2;
 VAR_10 = VAR_2;

 VAR_18 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8, &VAR_9,
     &VAR_10);
 VAR_11 = (VAR_9 == VAR_2) ?
     VAR_10 : VAR_9;

 VAR_17 = FUNC_2(VAR_5);
 if (!VAR_18 && VAR_17) {
  VAR_16 = VAR_15->rep;
  if (VAR_16->vport != VAR_3 &&
      (VAR_14->offloads.inline_mode != VAR_1 &&
      VAR_14->offloads.inline_mode < VAR_11)) {
   FUNC_0(VAR_12,
        "Flow is not offloaded due to min inline setting");
   FUNC_3(VAR_4->netdev,
        "Flow is not offloaded due to min inline setting, required %d actual %d\n",
        VAR_11, VAR_14->offloads.inline_mode);
   return -VAR_0;
  }
 }

 if (VAR_17) {
  VAR_5->esw_attr->inner_match_level = VAR_9;
  VAR_5->esw_attr->outer_match_level = VAR_10;
 } else {
  VAR_5->nic_attr->match_level = VAR_11;
 }

 return VAR_18;
}
