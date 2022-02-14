
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int tx_skb; int rx_skb; int tx_waitq; int txq; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_data_s*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (struct st_data_s*) ;
 long FUNC_5 (int ) ;

void FUNC_6(struct st_data_s *VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  FUNC_2("error during deinit of ST LL %ld", VAR_2);

 if (VAR_1 != ((void*)0)) {

  FUNC_3(&VAR_1->txq);
  FUNC_3(&VAR_1->tx_waitq);
  FUNC_1(VAR_1->rx_skb);
  FUNC_1(VAR_1->tx_skb);

  VAR_2 = FUNC_5(VAR_0);
  if (VAR_2)
   FUNC_2("unable to un-register ldisc %ld", VAR_2);

  FUNC_0(VAR_1);
 }
}
