
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int FUNC_0 (int ,int ,int,int *) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, u8 *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_1(VAR_0);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;

 return FUNC_0(VAR_4->dev, VAR_3->port, VAR_1, VAR_2);
}
