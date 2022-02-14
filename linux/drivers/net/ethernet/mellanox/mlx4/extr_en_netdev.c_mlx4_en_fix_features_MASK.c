
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
typedef int netdev_features_t ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_3,
           netdev_features_t VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_0(VAR_3);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;





 if (VAR_4 & VAR_1 &&
     !(VAR_6->dev->caps.flags2 & VAR_0))
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;

 return VAR_4;
}
