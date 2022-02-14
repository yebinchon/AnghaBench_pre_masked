
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mlx5e_priv {int state_lock; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->state_lock);
 VAR_0->mtu = VAR_1;
 FUNC_2(&VAR_2->state_lock);

 return 0;
}
