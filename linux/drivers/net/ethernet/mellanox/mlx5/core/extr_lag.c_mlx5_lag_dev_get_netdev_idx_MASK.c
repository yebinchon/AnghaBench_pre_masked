
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5_lag {TYPE_1__* pf; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;

int FUNC_0(struct mlx5_lag *VAR_1,
    struct net_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->pf[VAR_3].netdev == VAR_2)
   return VAR_3;

 return -1;
}
