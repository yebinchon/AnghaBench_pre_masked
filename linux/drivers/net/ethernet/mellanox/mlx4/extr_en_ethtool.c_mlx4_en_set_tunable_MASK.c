
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; } ;
struct ethtool_tunable {int id; } ;
struct TYPE_2__ {int inline_thold; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
          const struct ethtool_tunable *VAR_4,
          const void *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8 = 0;

 switch (VAR_4->id) {
 case 128:
  VAR_7 = *(u32 *)VAR_5;
  if (VAR_7 < VAR_2 || VAR_7 > VAR_1)
   VAR_8 = -VAR_0;
  else
   VAR_6->prof->inline_thold = VAR_7;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
