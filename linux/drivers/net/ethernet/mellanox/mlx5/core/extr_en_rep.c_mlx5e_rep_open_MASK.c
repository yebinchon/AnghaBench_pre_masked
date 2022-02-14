
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {int state_lock; int mdev; struct mlx5e_rep_priv* ppriv; } ;
struct mlx5_eswitch_rep {int vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_4(VAR_2);
 struct mlx5e_rep_priv *VAR_4 = VAR_3->ppriv;
 struct mlx5_eswitch_rep *VAR_5 = VAR_4->rep;
 int VAR_6;

 FUNC_2(&VAR_3->state_lock);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  goto unlock;

 if (!FUNC_0(VAR_3->mdev,
        VAR_1,
        VAR_5->vport, 1,
        VAR_0))
  FUNC_5(VAR_2);

unlock:
 FUNC_3(&VAR_3->state_lock);
 return VAR_6;
}
