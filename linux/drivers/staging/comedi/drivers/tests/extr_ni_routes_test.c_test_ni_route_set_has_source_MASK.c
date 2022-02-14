
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * routes; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,char*) ;

void FUNC_3(void)
{
 FUNC_2(!FUNC_1(&VAR_0.routes[0], FUNC_0(0)),
   "check for bad source\n");
 FUNC_2(FUNC_1(&VAR_0.routes[0], FUNC_0(1)),
   "find first source\n");
 FUNC_2(FUNC_1(&VAR_0.routes[0], FUNC_0(5)),
   "find fifth source\n");
 FUNC_2(FUNC_1(&VAR_0.routes[0], FUNC_0(9)),
   "find last source\n");
}
