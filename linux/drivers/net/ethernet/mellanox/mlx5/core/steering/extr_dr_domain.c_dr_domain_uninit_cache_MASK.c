
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * recalc_cs_ft; } ;
struct TYPE_4__ {int num_vports; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;
struct mlx5dr_domain {TYPE_3__ cache; TYPE_2__ info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5dr_domain*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5dr_domain *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->info.caps.num_vports; VAR_1++) {
  if (!VAR_0->cache.recalc_cs_ft[VAR_1])
   continue;

  FUNC_1(VAR_0, VAR_0->cache.recalc_cs_ft[VAR_1]);
 }

 FUNC_0(VAR_0->cache.recalc_cs_ft);
}
