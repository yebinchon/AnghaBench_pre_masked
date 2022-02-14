
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_tc_flow {int dummy; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; struct mlx5e_rep_priv* ppriv; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct flow_cls_offload {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*) ;
 int FUNC_1 (struct mlx5e_tc_flow*) ;
 struct mlx5e_tc_flow* FUNC_2 (struct mlx5e_priv*,struct flow_cls_offload*,unsigned long,struct net_device*,struct mlx5_eswitch_rep*,struct mlx5_core_dev*) ;
 scalar_t__ FUNC_3 (struct mlx5e_tc_flow*) ;
 int FUNC_4 (struct flow_cls_offload*,struct mlx5e_tc_flow*,unsigned long) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_priv *VAR_0,
     struct flow_cls_offload *VAR_1,
     unsigned long VAR_2,
     struct net_device *VAR_3,
     struct mlx5e_tc_flow **VAR_4)
{
 struct mlx5e_rep_priv *VAR_5 = VAR_0->ppriv;
 struct mlx5_eswitch_rep *VAR_6 = VAR_5->rep;
 struct mlx5_core_dev *VAR_7 = VAR_0->mdev;
 struct mlx5e_tc_flow *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6,
        VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_4(VAR_1, VAR_8, VAR_2);
  if (VAR_9) {
   FUNC_5(VAR_0, VAR_8);
   goto out;
  }
 }

 *VAR_4 = VAR_8;

 return 0;

out:
 return VAR_9;
}
