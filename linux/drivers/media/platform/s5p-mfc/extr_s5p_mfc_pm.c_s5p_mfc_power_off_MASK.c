
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_clocks; int device; int * clocks; int clock_gate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;

int FUNC_3(void)
{
 int VAR_1;


 FUNC_1(VAR_0->clock_gate);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_clocks; VAR_1++)
  FUNC_0(VAR_0->clocks[VAR_1]);

 return FUNC_2(VAR_0->device);
}
