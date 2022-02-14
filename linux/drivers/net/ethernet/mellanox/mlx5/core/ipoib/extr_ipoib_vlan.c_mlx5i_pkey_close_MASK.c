
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int qpn; } ;
struct mlx5i_priv {TYPE_1__ qp; } ;
struct mlx5e_priv {int state_lock; int ** tisn; int channels; int netdev; int state; struct mlx5_core_dev* mdev; struct mlx5i_priv* ppriv; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_5(VAR_1);
 struct mlx5i_priv *VAR_3 = VAR_2->ppriv;
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;

 FUNC_7(&VAR_2->state_lock);

 if (!FUNC_10(VAR_0, &VAR_2->state))
  goto unlock;

 FUNC_0(VAR_0, &VAR_2->state);

 FUNC_9(VAR_2->netdev);
 FUNC_1(VAR_4, VAR_3->qp.qpn);
 FUNC_6(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->channels);
 FUNC_4(VAR_4, VAR_2->tisn[0][0]);
unlock:
 FUNC_8(&VAR_2->state_lock);
 return 0;
}
