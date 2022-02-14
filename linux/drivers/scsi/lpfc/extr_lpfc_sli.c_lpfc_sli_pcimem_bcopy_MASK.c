
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void
FUNC_1(void *VAR_0, void *VAR_1, uint32_t VAR_2)
{
 uint32_t *VAR_3 = VAR_0;
 uint32_t *VAR_4 = VAR_1;
 uint32_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < (int)VAR_2; VAR_6 += sizeof (uint32_t)) {
  VAR_5 = *VAR_3;
  VAR_5 = FUNC_0(VAR_5);
  *VAR_4 = VAR_5;
  VAR_3++;
  VAR_4++;
 }
}
