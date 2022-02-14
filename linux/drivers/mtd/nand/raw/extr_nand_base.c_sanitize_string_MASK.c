
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t ssize_t ;


 int FUNC_0 (char*) ;

void FUNC_1(uint8_t *VAR_0, size_t VAR_1)
{
 ssize_t VAR_2;


 VAR_0[VAR_1 - 1] = 0;


 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++) {
  if (VAR_0[VAR_2] < ' ' || VAR_0[VAR_2] > 127)
   VAR_0[VAR_2] = '?';
 }


 FUNC_0(VAR_0);
}
