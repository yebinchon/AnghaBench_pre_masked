
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int spec; struct net_device* filter_dev; } ;
struct mlx5e_tc_flow {int init_done; int priv; int esw_attr; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_esw_flow_attr {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct flow_rule {int action; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 struct mlx5e_tc_flow* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5e_tc_flow*) ;
 int FUNC_3 (int *) ;
 struct flow_rule* FUNC_4 (struct flow_cls_offload*) ;
 scalar_t__ FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5e_priv*,int,struct flow_cls_offload*,unsigned long,struct mlx5e_tc_flow_parse_attr**,struct mlx5e_tc_flow**) ;
 int FUNC_7 (int ,struct mlx5e_priv*,struct mlx5e_tc_flow_parse_attr*,struct flow_cls_offload*,struct mlx5_eswitch_rep*,struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_9 (struct mlx5e_priv*,struct mlx5e_tc_flow*,struct netlink_ext_ack*) ;
 int FUNC_10 (int ,struct mlx5e_tc_flow*,int *,struct flow_cls_offload*,struct net_device*) ;
 int FUNC_11 (struct mlx5e_priv*,int *,struct mlx5e_tc_flow*,struct netlink_ext_ack*) ;

__attribute__((used)) static struct mlx5e_tc_flow *
FUNC_12(struct mlx5e_priv *VAR_2,
       struct flow_cls_offload *VAR_3,
       unsigned long VAR_4,
       struct net_device *VAR_5,
       struct mlx5_eswitch_rep *VAR_6,
       struct mlx5_core_dev *VAR_7)
{
 struct flow_rule *VAR_8 = FUNC_4(VAR_3);
 struct netlink_ext_ack *VAR_9 = VAR_3->common.extack;
 struct mlx5e_tc_flow_parse_attr *VAR_10;
 struct mlx5e_tc_flow *VAR_11;
 int VAR_12, VAR_13;

 VAR_4 |= FUNC_0(VAR_1);
 VAR_12 = sizeof(struct mlx5_esw_flow_attr);
 VAR_13 = FUNC_6(VAR_2, VAR_12, VAR_3, VAR_4,
          &VAR_10, &VAR_11);
 if (VAR_13)
  goto out;

 VAR_10->filter_dev = VAR_5;
 FUNC_7(VAR_11->esw_attr,
     VAR_2, VAR_10,
     VAR_3, VAR_6, VAR_7);

 VAR_13 = FUNC_10(VAR_11->priv, VAR_11, &VAR_10->spec,
          VAR_3, VAR_5);
 if (VAR_13)
  goto err_free;

 VAR_13 = FUNC_11(VAR_2, &VAR_8->action, VAR_11, VAR_9);
 if (VAR_13)
  goto err_free;

 VAR_13 = FUNC_9(VAR_2, VAR_11, VAR_9);
 FUNC_3(&VAR_11->init_done);
 if (VAR_13) {
  if (!(VAR_13 == -VAR_0 && FUNC_5(VAR_7)))
   goto err_free;

  FUNC_2(VAR_11);
 }

 return VAR_11;

err_free:
 FUNC_8(VAR_2, VAR_11);
out:
 return FUNC_1(VAR_13);
}
