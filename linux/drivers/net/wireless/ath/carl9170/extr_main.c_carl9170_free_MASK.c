
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int hw; int mutex; int * survey; int * mem_bitmap; int * rx_failover; int registered; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ar9170 *VAR_0)
{
 FUNC_1(VAR_0->registered);
 FUNC_1(FUNC_0(VAR_0));

 FUNC_4(VAR_0->rx_failover);
 VAR_0->rx_failover = ((void*)0);

 FUNC_3(VAR_0->mem_bitmap);
 VAR_0->mem_bitmap = ((void*)0);

 FUNC_3(VAR_0->survey);
 VAR_0->survey = ((void*)0);

 FUNC_5(&VAR_0->mutex);

 FUNC_2(VAR_0->hw);
}
