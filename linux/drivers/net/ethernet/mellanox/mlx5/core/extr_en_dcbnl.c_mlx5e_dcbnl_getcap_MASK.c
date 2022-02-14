
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cap; } ;
struct mlx5e_priv {TYPE_1__ dcbx; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_2,
        int VAR_3, u8 *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_1(VAR_2);
 struct mlx5_core_dev *VAR_6 = VAR_5->mdev;
 u8 VAR_7 = 0;

 switch (VAR_3) {
 case 130:
  *VAR_4 = 1;
  break;
 case 132:
  *VAR_4 = 1;
  break;
 case 128:
  *VAR_4 = 0;
  break;
 case 129:
  *VAR_4 = 1 << FUNC_0(VAR_6);
  break;
 case 131:
  *VAR_4 = 1 << FUNC_0(VAR_6);
  break;
 case 133:
  *VAR_4 = 0;
  break;
 case 135:
  *VAR_4 = 0;
  break;
 case 134:
  *VAR_4 = VAR_5->dcbx.cap |
         VAR_0 |
         VAR_1;
  break;
 default:
  *VAR_4 = 0;
  VAR_7 = 1;
  break;
 }

 return VAR_7;
}
