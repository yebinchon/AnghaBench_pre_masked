
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow {int node; } ;
struct mlx5e_priv {int dummy; } ;
struct flow_cls_offload {int cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 struct rhashtable* FUNC_1 (struct mlx5e_priv*,unsigned long) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct mlx5e_tc_flow* FUNC_5 (struct rhashtable*,int *,int ) ;
 int FUNC_6 (struct rhashtable*,int *,int ) ;
 int FUNC_7 (struct mlx5e_tc_flow*,unsigned long) ;
 int VAR_2 ;
 int FUNC_8 (struct flow_cls_offload*) ;

int FUNC_9(struct net_device *VAR_3, struct mlx5e_priv *VAR_4,
   struct flow_cls_offload *VAR_5, unsigned long VAR_6)
{
 struct rhashtable *VAR_7 = FUNC_1(VAR_4, VAR_6);
 struct mlx5e_tc_flow *VAR_8;
 int VAR_9;

 FUNC_3();
 VAR_8 = FUNC_5(VAR_7, &VAR_5->cookie, VAR_2);
 if (!VAR_8 || !FUNC_7(VAR_8, VAR_6)) {
  VAR_9 = -VAR_1;
  goto errout;
 }




 if (FUNC_0(VAR_8, VAR_0)) {
  VAR_9 = -VAR_1;
  goto errout;
 }
 FUNC_6(VAR_7, &VAR_8->node, VAR_2);
 FUNC_4();

 FUNC_8(VAR_5);
 FUNC_2(VAR_4, VAR_8);

 return 0;

errout:
 FUNC_4();
 return VAR_9;
}
