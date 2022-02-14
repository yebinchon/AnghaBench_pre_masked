
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int state_lock; } ;
struct ethtool_tunable {int id; } ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
        const struct ethtool_tunable *VAR_2,
        const void *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_1(&VAR_4->state_lock);

 switch (VAR_2->id) {
 case 128:
  VAR_5 = FUNC_0(VAR_1, *(u16 *)VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_4->state_lock);
 return VAR_5;
}
