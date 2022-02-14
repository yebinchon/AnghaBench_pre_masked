
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

bool
FUNC_0(
 struct adapter *VAR_4,
 u16 VAR_5,
 u8 *VAR_6)
{
 if (VAR_5 >= VAR_0) {
  return 0;
 }

 if (VAR_2 == 0)
  *VAR_6 = VAR_3[VAR_5];
 else
  *VAR_6 = VAR_1[VAR_2-1][VAR_5];
 return 1;
}
