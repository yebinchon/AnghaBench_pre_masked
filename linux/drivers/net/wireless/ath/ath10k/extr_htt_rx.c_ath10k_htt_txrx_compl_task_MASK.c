
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct htt_tx_done {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int lock; } ;
struct ath10k_htt {TYPE_2__ tx_fetch_ind_q; int txdone_fifo; int num_mpdus_ready; TYPE_1__ rx_ring; int rx_in_ord_compl_q; } ;
struct ath10k {struct ath10k_htt htt; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct ath10k*,int,int) ;
 int FUNC_3 (struct ath10k_htt*) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*) ;
 int FUNC_5 (struct ath10k_htt*) ;
 int FUNC_6 (struct ath10k*,struct sk_buff*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k_htt*,struct htt_tx_done*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int *,struct htt_tx_done*) ;
 int FUNC_13 (int *) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,struct sk_buff_head*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long) ;

int FUNC_20(struct ath10k *VAR_1, int VAR_2)
{
 struct ath10k_htt *VAR_3 = &VAR_1->htt;
 struct htt_tx_done VAR_4 = {};
 struct sk_buff_head VAR_5;
 struct sk_buff *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0, VAR_9, VAR_10;
 bool VAR_11 = 0;

 FUNC_1(&VAR_5);




 VAR_8 = FUNC_2(VAR_1, VAR_8, VAR_2);
 if (VAR_8 == VAR_2) {
  VAR_11 = 1;
  goto exit;
 }

 while ((VAR_6 = FUNC_14(&VAR_3->rx_in_ord_compl_q))) {
  FUNC_16(&VAR_3->rx_ring.lock);
  VAR_10 = FUNC_4(VAR_1, VAR_6);
  FUNC_18(&VAR_3->rx_ring.lock);

  FUNC_11(VAR_6);
  if (VAR_10 == -VAR_0) {
   VAR_11 = 1;
   goto exit;
  }
 }

 while (FUNC_10(&VAR_3->num_mpdus_ready)) {
  VAR_10 = FUNC_3(VAR_3);
  if (VAR_10 == -VAR_0) {
   VAR_11 = 1;
   goto exit;
  }
  FUNC_9(&VAR_3->num_mpdus_ready);
 }


 VAR_8 = FUNC_2(VAR_1, VAR_8, VAR_2);






 if ((VAR_8 < VAR_2) && !FUNC_13(&VAR_3->txdone_fifo))
  VAR_8 = VAR_2;






 while (FUNC_12(&VAR_3->txdone_fifo, &VAR_4))
  FUNC_8(VAR_3, &VAR_4);

 FUNC_7(VAR_1);

 FUNC_17(&VAR_3->tx_fetch_ind_q.lock, VAR_7);
 FUNC_15(&VAR_3->tx_fetch_ind_q, &VAR_5);
 FUNC_19(&VAR_3->tx_fetch_ind_q.lock, VAR_7);

 while ((VAR_6 = FUNC_0(&VAR_5))) {
  FUNC_6(VAR_1, VAR_6);
  FUNC_11(VAR_6);
 }

exit:
 FUNC_5(VAR_3);



 VAR_9 = VAR_11 ? VAR_2 : VAR_8;

 return VAR_9;
}
