
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523 {int hw; int tx_nr_total; int tx_flush_waitq; int tx_wd_timer; int tx_nr_pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ar5523*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ar5523 *VAR_1)
{
 FUNC_1(&VAR_1->tx_nr_total);
 if (!FUNC_2(&VAR_1->tx_nr_pending)) {
  FUNC_4(&VAR_1->tx_wd_timer);
  FUNC_6(&VAR_1->tx_flush_waitq);
 }

 if (FUNC_3(&VAR_1->tx_nr_total) < VAR_0) {
  FUNC_0(VAR_1, "restart tx queue\n");
  FUNC_5(VAR_1->hw);
 }
}
