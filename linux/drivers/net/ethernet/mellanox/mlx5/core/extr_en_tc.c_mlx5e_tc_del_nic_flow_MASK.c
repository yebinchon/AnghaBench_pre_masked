
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_tc_flow {int * rule; struct mlx5_nic_flow_attr* nic_attr; } ;
struct TYPE_3__ {int t_lock; int * t; } ;
struct TYPE_4__ {TYPE_1__ tc; } ;
struct mlx5e_priv {TYPE_2__ fs; int mdev; } ;
struct mlx5_nic_flow_attr {int action; struct mlx5_fc* counter; } ;
struct mlx5_fc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct mlx5_fc*) ;
 int FUNC_6 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_7 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int FUNC_8 (struct mlx5e_priv*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct mlx5e_priv *VAR_3,
      struct mlx5e_tc_flow *VAR_4)
{
 struct mlx5_nic_flow_attr *VAR_5 = VAR_4->nic_attr;
 struct mlx5_fc *VAR_6 = ((void*)0);

 VAR_6 = VAR_5->counter;
 if (!FUNC_0(VAR_4->rule[0]))
  FUNC_3(VAR_4->rule[0]);
 FUNC_5(VAR_3->mdev, VAR_6);

 FUNC_9(&VAR_3->fs.tc.t_lock);
 if (!FUNC_8(VAR_3, FUNC_1(VAR_2)) && VAR_3->fs.tc.t) {
  FUNC_4(VAR_3->fs.tc.t);
  VAR_3->fs.tc.t = ((void*)0);
 }
 FUNC_10(&VAR_3->fs.tc.t_lock);

 if (VAR_5->action & VAR_1)
  FUNC_6(VAR_3, VAR_4);

 if (FUNC_2(VAR_4, VAR_0))
  FUNC_7(VAR_3, VAR_4);
}
