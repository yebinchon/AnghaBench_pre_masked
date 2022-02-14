
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5i_priv {int sub_interface; } ;
struct mlx5e_profile {int (* cleanup ) (struct mlx5e_priv*) ;} ;
struct mlx5e_priv {int mdev; struct mlx5e_profile* profile; struct mlx5i_priv* ppriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mlx5e_priv*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_2(VAR_0);
 struct mlx5i_priv *VAR_2 = VAR_1->ppriv;
 const struct mlx5e_profile *VAR_3 = VAR_1->profile;

 FUNC_1(VAR_1);
 VAR_3->cleanup(VAR_1);

 if (!VAR_2->sub_interface) {
  FUNC_3(VAR_0);
  FUNC_0(VAR_1->mdev);
 }
}
