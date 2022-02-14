
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int* maxrate; } ;
struct ieee_maxrate {int* tc_maxrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
       struct ieee_maxrate *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3->tc_maxrate[VAR_5] =
   VAR_4->maxrate[VAR_5] * VAR_1;

 return 0;
}
