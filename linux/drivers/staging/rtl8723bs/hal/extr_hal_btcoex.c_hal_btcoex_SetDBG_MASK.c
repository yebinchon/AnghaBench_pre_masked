
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 size_t* VAR_1 ;

void FUNC_0(struct adapter *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;


 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_1[VAR_4] = VAR_3[VAR_4];
}
