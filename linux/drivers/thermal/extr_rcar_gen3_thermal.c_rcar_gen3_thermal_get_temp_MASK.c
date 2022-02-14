
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int a2; scalar_t__ b2; int a1; scalar_t__ b1; } ;
struct rcar_gen3_thermal_tsc {size_t id; TYPE_1__ coef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct rcar_gen3_thermal_tsc*,int ) ;
 int FUNC_5 (int) ;
 int** VAR_3 ;

__attribute__((used)) static int FUNC_6(void *VAR_4, int *VAR_5)
{
 struct rcar_gen3_thermal_tsc *VAR_6 = VAR_4;
 int VAR_7, VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_4(VAR_6, VAR_2) & VAR_0;

 if (VAR_9 <= VAR_3[VAR_6->id][1])
  VAR_8 = FUNC_0(FUNC_1(VAR_9) - VAR_6->coef.b1,
    VAR_6->coef.a1);
 else
  VAR_8 = FUNC_0(FUNC_1(VAR_9) - VAR_6->coef.b2,
    VAR_6->coef.a2);
 VAR_7 = FUNC_2(VAR_8);


 if ((VAR_7 < FUNC_3(-40)) || (VAR_7 > FUNC_3(125)))
  return -VAR_1;


 *VAR_5 = FUNC_5(VAR_7);

 return 0;
}
