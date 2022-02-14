
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx_period {int period_ns; } ;



__attribute__((used)) static int
FUNC_0(unsigned int VAR_0, const struct sx_period *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_1[VAR_2].period_ns; VAR_2++) {
  if ((VAR_0 <= VAR_1[VAR_2 - 0].period_ns) &&
      (VAR_0 > VAR_1[VAR_2 - 1].period_ns)) {
   return VAR_2;
  }
 }
 return 7;
}
