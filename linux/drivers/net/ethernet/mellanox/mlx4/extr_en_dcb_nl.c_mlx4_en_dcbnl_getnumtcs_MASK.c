
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int flags; TYPE_1__* mdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_1(VAR_3);

 if (!(VAR_6->flags & VAR_2))
  return -VAR_1;

 if (VAR_4 == VAR_0)
  *VAR_5 = FUNC_0(VAR_6->mdev->dev);
 else
  *VAR_5 = 0;

 return 0;
}
