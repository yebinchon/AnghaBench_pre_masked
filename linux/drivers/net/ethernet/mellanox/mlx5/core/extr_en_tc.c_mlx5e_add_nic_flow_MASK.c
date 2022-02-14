
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int spec; struct net_device* filter_dev; } ;
struct mlx5e_tc_flow {int priv; } ;
struct mlx5e_priv {int netdev; } ;
struct mlx5_nic_flow_attr {int dummy; } ;
struct flow_rule {int action; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_3 (struct mlx5e_tc_flow_parse_attr*) ;
 int FUNC_4 (struct mlx5e_priv*,int,struct flow_cls_offload*,unsigned long,struct mlx5e_tc_flow_parse_attr**,struct mlx5e_tc_flow**) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_6 (struct mlx5e_priv*,struct mlx5e_tc_flow_parse_attr*,struct mlx5e_tc_flow*,struct netlink_ext_ack*) ;
 int FUNC_7 (int ,struct mlx5e_tc_flow*,int *,struct flow_cls_offload*,struct net_device*) ;
 int FUNC_8 (struct mlx5e_priv*,int *,struct mlx5e_tc_flow_parse_attr*,struct mlx5e_tc_flow*,struct netlink_ext_ack*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(struct mlx5e_priv *VAR_3,
     struct flow_cls_offload *VAR_4,
     unsigned long VAR_5,
     struct net_device *VAR_6,
     struct mlx5e_tc_flow **VAR_7)
{
 struct flow_rule *VAR_8 = FUNC_1(VAR_4);
 struct netlink_ext_ack *VAR_9 = VAR_4->common.extack;
 struct mlx5e_tc_flow_parse_attr *VAR_10;
 struct mlx5e_tc_flow *VAR_11;
 int VAR_12, VAR_13;


 if (!FUNC_9(VAR_3->netdev, &VAR_4->common))
  return -VAR_0;

 VAR_5 |= FUNC_0(VAR_1);
 VAR_12 = sizeof(struct mlx5_nic_flow_attr);
 VAR_13 = FUNC_4(VAR_3, VAR_12, VAR_4, VAR_5,
          &VAR_10, &VAR_11);
 if (VAR_13)
  goto out;

 VAR_10->filter_dev = VAR_6;
 VAR_13 = FUNC_7(VAR_11->priv, VAR_11, &VAR_10->spec,
          VAR_4, VAR_6);
 if (VAR_13)
  goto err_free;

 VAR_13 = FUNC_8(VAR_3, &VAR_8->action, VAR_10, VAR_11, VAR_9);
 if (VAR_13)
  goto err_free;

 VAR_13 = FUNC_6(VAR_3, VAR_10, VAR_11, VAR_9);
 if (VAR_13)
  goto err_free;

 FUNC_2(VAR_11, VAR_2);
 FUNC_3(VAR_10);
 *VAR_7 = VAR_11;

 return 0;

err_free:
 FUNC_5(VAR_3, VAR_11);
 FUNC_3(VAR_10);
out:
 return VAR_13;
}
