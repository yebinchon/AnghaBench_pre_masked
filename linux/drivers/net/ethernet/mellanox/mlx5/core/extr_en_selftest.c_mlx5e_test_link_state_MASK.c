
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5e_priv {int mdev; int netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_2)
{
 u8 VAR_3;

 if (!FUNC_1(VAR_2->netdev))
  return 1;

 VAR_3 = FUNC_0(VAR_2->mdev, VAR_0, 0);
 return VAR_3 == VAR_1 ? 0 : 1;
}
