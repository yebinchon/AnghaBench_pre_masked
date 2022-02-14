
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_clocks; int device; int * clocks; int clock_gate; int * clk_names; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(void)
{
 int VAR_1, VAR_2 = 0;

 VAR_2 = FUNC_4(VAR_0->device);
 if (VAR_2 < 0)
  return VAR_2;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_clocks; VAR_1++) {
  VAR_2 = FUNC_2(VAR_0->clocks[VAR_1]);
  if (VAR_2 < 0) {
   FUNC_3("clock prepare failed for clock: %s\n",
    VAR_0->clk_names[VAR_1]);
   VAR_1++;
   goto err;
  }
 }


 FUNC_0(VAR_0->clock_gate);

 return 0;
err:
 while (--VAR_1 > 0)
  FUNC_1(VAR_0->clocks[VAR_1]);
 FUNC_5(VAR_0->device);
 return VAR_2;
}
