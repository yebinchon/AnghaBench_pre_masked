
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_rate_power {int * all; } ;
typedef int s8 ;


 int FUNC_0 (int,int ) ;

int FUNC_1(struct mt76_rate_power *VAR_0)
{
 s8 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0->all); VAR_2++)
  VAR_1 = FUNC_0(VAR_1, VAR_0->all[VAR_2]);

 return VAR_1;
}
