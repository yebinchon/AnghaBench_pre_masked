
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct mlx5e_priv {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_5(VAR_1);

 FUNC_4(VAR_2->mdev, VAR_1->dev_addr);
 if (FUNC_2(VAR_1->dev_addr) &&
     !FUNC_0(VAR_2->mdev, VAR_0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_2->mdev, "Assigned random MAC address %pM\n", VAR_1->dev_addr);
 }
}
