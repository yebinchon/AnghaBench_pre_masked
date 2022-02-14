
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct aggr_info_conn {int timer_scheduled; int timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aggr_info_conn*,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct aggr_info_conn *VAR_1)
{
 u8 VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->timer_scheduled) {
  FUNC_1(&VAR_1->timer);
  VAR_1->timer_scheduled = 0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, VAR_2);
}
