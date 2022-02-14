
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_2)
  return VAR_1;

 return VAR_0;
}
