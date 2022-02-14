
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_rx_queue {struct qede_agg_info* tpa_info; } ;
struct qede_agg_info {int state; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qede_rx_queue *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct qede_agg_info *VAR_4 = &VAR_2->tpa_info[VAR_3];

  VAR_4->state = VAR_1;
 }
}
