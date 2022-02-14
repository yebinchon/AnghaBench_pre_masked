
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extif_timings {int clk_div; int converted; int* tim; } ;


 int FUNC_0 (struct extif_timings*) ;
 int FUNC_1 (struct extif_timings*) ;

__attribute__((used)) static int FUNC_2(struct extif_timings *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = VAR_0->clk_div;

 VAR_0->converted = 0;

 if (VAR_2 <= 0 || VAR_2 > 8)
  return -1;


 if ((VAR_1 = FUNC_0(VAR_0)) < 0)
  return VAR_1;

 if ((VAR_1 = FUNC_1(VAR_0)) < 0)
  return VAR_1;

 VAR_0->tim[4] = VAR_2;

 VAR_0->converted = 1;

 return 0;
}
