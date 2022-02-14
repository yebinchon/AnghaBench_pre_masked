
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int a1; int b1; int a2; int b2; } ;
struct rcar_gen3_thermal_tsc {int tj_t; TYPE_1__ coef; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct rcar_gen3_thermal_tsc *VAR_0,
           int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1, 1000);
 if (VAR_2 <= FUNC_1(VAR_0->tj_t))
  VAR_3 = VAR_2 * VAR_0->coef.a1 + VAR_0->coef.b1;
 else
  VAR_3 = VAR_2 * VAR_0->coef.a2 + VAR_0->coef.b2;

 return FUNC_1(VAR_3);
}
