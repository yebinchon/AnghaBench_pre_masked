
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_lag {TYPE_1__* pf; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct mlx5_lag *VAR_0)
{
 if (!VAR_0->pf[0].dev || !VAR_0->pf[1].dev)
  return 0;




 return (!FUNC_1(VAR_0->pf[0].dev) &&
  !FUNC_1(VAR_0->pf[1].dev));

}
