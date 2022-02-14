
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_private {int * clock; int refresh_work; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sja1105_private *VAR_0)
{
 if (FUNC_0(VAR_0->clock))
  return;

 FUNC_1(&VAR_0->refresh_work);
 FUNC_2(VAR_0->clock);
 VAR_0->clock = ((void*)0);
}
