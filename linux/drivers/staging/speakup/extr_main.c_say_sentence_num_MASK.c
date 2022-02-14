
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__** VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7)
{
 VAR_0 = VAR_1;
 VAR_2 = VAR_6 + 1;
 if (VAR_7 && --VAR_0 == -1)
  VAR_0 = 1;

 if (VAR_6 > VAR_3[VAR_0])
  return 0;

 FUNC_0(VAR_5[VAR_0][VAR_6], VAR_4[VAR_0] - VAR_5[VAR_0][VAR_6]);
 return 1;
}
