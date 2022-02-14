
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_rep_priv {int netdev; } ;
struct mlx5e_priv {int mdev; } ;


 int FUNC_0 (struct net_device*,struct mlx5e_rep_priv*,int ,struct mlx5e_rep_priv*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 struct mlx5e_priv* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_rep_priv *VAR_1,
      struct net_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1,
         VAR_0,
         VAR_1);
 if (VAR_3) {
  struct mlx5e_priv *VAR_4 = FUNC_3(VAR_1->netdev);

  FUNC_1(VAR_4->mdev, "Failed to register remote block notifier for %s err=%d\n",
         FUNC_2(VAR_2), VAR_3);
 }
 return VAR_3;
}
