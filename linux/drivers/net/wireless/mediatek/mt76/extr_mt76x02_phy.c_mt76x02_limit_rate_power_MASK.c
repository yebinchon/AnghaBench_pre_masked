
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_rate_power {int* all; } ;



void FUNC_0(struct mt76_rate_power *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0->all); VAR_2++)
  if (VAR_0->all[VAR_2] > VAR_1)
   VAR_0->all[VAR_2] = VAR_1;
}
