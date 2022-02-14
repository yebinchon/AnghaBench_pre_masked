
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_rate_power {int* all; } ;
typedef int s8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct mt76_rate_power *VAR_0)
{
 int VAR_1;
 s8 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->all); VAR_1++) {
  if (!VAR_0->all[VAR_1])
   continue;

  if (VAR_2)
   VAR_2 = FUNC_0(VAR_2, VAR_0->all[VAR_1]);
  else
   VAR_2 = VAR_0->all[VAR_1];
 }

 return VAR_2;
}
