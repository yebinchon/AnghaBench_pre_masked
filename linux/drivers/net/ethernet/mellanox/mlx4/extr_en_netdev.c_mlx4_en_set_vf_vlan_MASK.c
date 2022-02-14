
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int ,int,int ,int ,int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, u16 VAR_2, u8 VAR_3,
          __be16 VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_0);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;

 return FUNC_0(VAR_6->dev, VAR_5->port, VAR_1, VAR_2, VAR_3,
    VAR_4);
}
