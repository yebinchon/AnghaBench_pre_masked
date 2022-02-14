
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int a1; int b1; int a2; int b2; } ;
struct rcar_gen3_thermal_tsc {int tj_t; TYPE_1__ coef; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct rcar_gen3_thermal_tsc *VAR_1,
      int *VAR_2, const int *VAR_3,
      int VAR_4)
{






 VAR_1->tj_t = (FUNC_1((VAR_2[1] - VAR_2[2]) * 157)
       / (VAR_2[0] - VAR_2[2])) + FUNC_1(VAR_0);

 VAR_1->coef.a1 = FUNC_0(FUNC_1(VAR_3[1] - VAR_3[2]),
     VAR_1->tj_t - FUNC_1(VAR_0));
 VAR_1->coef.b1 = FUNC_1(VAR_3[2]) - VAR_1->coef.a1 * VAR_0;

 VAR_1->coef.a2 = FUNC_0(FUNC_1(VAR_3[1] - VAR_3[0]),
     VAR_1->tj_t - FUNC_1(VAR_4));
 VAR_1->coef.b2 = FUNC_1(VAR_3[0]) - VAR_1->coef.a2 * VAR_4;
}
