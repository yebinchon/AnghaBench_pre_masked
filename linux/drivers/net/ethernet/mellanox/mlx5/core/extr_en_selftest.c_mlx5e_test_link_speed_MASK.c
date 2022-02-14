
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_priv {int mdev; int netdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_0)
{
 u32 VAR_1;

 if (!FUNC_1(VAR_0->netdev))
  return 1;

 return FUNC_0(VAR_0->mdev, &VAR_1);
}
