
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(void)
{
 int VAR_1 = 0;
 while (VAR_0[VAR_1]) {
  if (FUNC_0(VAR_0[VAR_1++]))
   return 1;
 }
 return 0;
}
