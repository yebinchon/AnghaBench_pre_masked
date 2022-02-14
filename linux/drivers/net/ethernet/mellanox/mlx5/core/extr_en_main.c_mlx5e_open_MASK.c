
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_priv {TYPE_1__* mdev; int state_lock; } ;
struct TYPE_2__ {int vxlan; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_3(&VAR_2->state_lock);
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  FUNC_0(VAR_2->mdev, VAR_0);
 FUNC_4(&VAR_2->state_lock);

 if (FUNC_1(VAR_2->mdev->vxlan))
  FUNC_6(VAR_1);

 return VAR_3;
}
