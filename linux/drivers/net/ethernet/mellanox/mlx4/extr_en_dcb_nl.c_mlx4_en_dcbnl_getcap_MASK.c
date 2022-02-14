
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int dcbx_cap; TYPE_1__* mdev; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_0, int VAR_1, u8 *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 129:
  *VAR_2 = 1;
  break;
 case 130:
  *VAR_2 = VAR_3->dcbx_cap;
  break;
 case 128:
  *VAR_2 = 1 << FUNC_0(VAR_3->mdev->dev);
  break;
 default:
  *VAR_2 = 0;
  break;
 }

 return 0;
}
