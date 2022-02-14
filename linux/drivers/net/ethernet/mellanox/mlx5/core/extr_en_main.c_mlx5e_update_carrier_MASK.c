
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5e_priv {int netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct mlx5e_priv *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_3,
         VAR_0,
         0);

 if (VAR_4 == VAR_1) {
  FUNC_1(VAR_2->netdev, "Link up\n");
  FUNC_3(VAR_2->netdev);
 } else {
  FUNC_1(VAR_2->netdev, "Link down\n");
  FUNC_2(VAR_2->netdev);
 }
}
