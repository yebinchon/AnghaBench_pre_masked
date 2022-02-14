
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int rx_ring_num; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct mlx4_en_priv *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->rx_ring_num);
}
