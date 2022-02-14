
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct mlx5i_priv {scalar_t__ pkey_index; } ;


 struct mlx5i_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 struct mlx5i_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->pkey_index = (u16)VAR_1;
}
