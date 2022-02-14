
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int state_lock; } ;
typedef enum mlx5e_priv_flag { ____Placeholder_mlx5e_priv_flag } mlx5e_priv_flag ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, u32 VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 enum mlx5e_priv_flag VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->state_lock);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
  if (VAR_5)
   break;
 }

 FUNC_2(&VAR_3->state_lock);


 FUNC_4(VAR_1);

 return VAR_5;
}
