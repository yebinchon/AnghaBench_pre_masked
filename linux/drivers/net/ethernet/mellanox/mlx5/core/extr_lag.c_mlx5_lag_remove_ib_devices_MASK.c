
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_lag {TYPE_1__* pf; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_lag *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2->pf[VAR_3].dev)
   FUNC_0(VAR_2->pf[VAR_3].dev,
          VAR_0);
}
