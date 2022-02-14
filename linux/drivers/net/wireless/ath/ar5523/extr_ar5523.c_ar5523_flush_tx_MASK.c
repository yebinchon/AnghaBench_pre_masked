
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523 {int tx_nr_pending; int tx_nr_total; int tx_flush_waitq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,char*,int ,int ) ;
 int FUNC_1 (struct ar5523*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct ar5523 *VAR_2)
{
 FUNC_1(VAR_2);


 if (FUNC_3(VAR_1, &VAR_2->flags))
  return;
 if (!FUNC_4(VAR_2->tx_flush_waitq,
     !FUNC_2(&VAR_2->tx_nr_pending), VAR_0))
  FUNC_0(VAR_2, "flush timeout (tot %d pend %d)\n",
      FUNC_2(&VAR_2->tx_nr_total),
      FUNC_2(&VAR_2->tx_nr_pending));
}
