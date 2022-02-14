
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,int *) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          u8 *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_2(VAR_1);

 if (!VAR_2)
  return;

 FUNC_0(VAR_2, 0xff, VAR_0);

 FUNC_1(VAR_3->mdev, VAR_2);
}
