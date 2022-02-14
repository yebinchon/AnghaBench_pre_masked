
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhashtable {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow {int node; } ;
struct mlx5e_priv {int netdev; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {int cookie; TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct rhashtable* FUNC_1 (struct mlx5e_priv*,unsigned long) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_3 (struct mlx5e_priv*,struct flow_cls_offload*,unsigned long,struct net_device*,struct mlx5e_tc_flow**) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct mlx5e_tc_flow* FUNC_7 (struct rhashtable*,int *,int ) ;
 int FUNC_8 (struct rhashtable*,int *,int ) ;
 int VAR_1 ;
 int FUNC_9 (struct flow_cls_offload*) ;

int FUNC_10(struct net_device *VAR_2, struct mlx5e_priv *VAR_3,
      struct flow_cls_offload *VAR_4, unsigned long VAR_5)
{
 struct netlink_ext_ack *VAR_6 = VAR_4->common.extack;
 struct rhashtable *VAR_7 = FUNC_1(VAR_3, VAR_5);
 struct mlx5e_tc_flow *VAR_8;
 int VAR_9 = 0;

 FUNC_5();
 VAR_8 = FUNC_7(VAR_7, &VAR_4->cookie, VAR_1);
 FUNC_6();
 if (VAR_8) {
  FUNC_0(VAR_6,
       "flow cookie already exists, ignoring");
  FUNC_4(VAR_3->netdev,
     "flow cookie %lx already exists, ignoring\n",
     VAR_4->cookie);
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_9(VAR_4);
 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_2, &VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_8(VAR_7, &VAR_8->node, VAR_1);
 if (VAR_9)
  goto err_free;

 return 0;

err_free:
 FUNC_2(VAR_3, VAR_8);
out:
 return VAR_9;
}
