
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data_len; } ;
struct ef4_tx_queue {unsigned int tx_min_size; int tx_packets; scalar_t__ xmit_more_available; int core_txq; int cb_packets; } ;
typedef int netdev_tx_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ef4_tx_queue*,struct sk_buff*) ;
 int FUNC_3 (struct ef4_tx_queue*) ;
 int FUNC_4 (struct ef4_tx_queue*) ;
 scalar_t__ FUNC_5 (struct ef4_tx_queue*,struct sk_buff*) ;
 int FUNC_6 (struct ef4_tx_queue*) ;
 struct ef4_tx_queue* FUNC_7 (struct ef4_tx_queue*) ;
 int FUNC_8 (int ,unsigned int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;

netdev_tx_t FUNC_12(struct ef4_tx_queue *VAR_2, struct sk_buff *VAR_3)
{
 bool VAR_4 = 0;
 unsigned int VAR_5;

 VAR_5 = VAR_3->len;
 FUNC_0(FUNC_11(VAR_3));

 if (VAR_5 < VAR_2->tx_min_size ||
   (VAR_3->data_len && VAR_5 <= VAR_0)) {

  if (FUNC_2(VAR_2, VAR_3))
   goto err;
  VAR_2->cb_packets++;
  VAR_4 = 1;
 }


 if (!VAR_4 && (FUNC_5(VAR_2, VAR_3)))
  goto err;


 FUNC_8(VAR_2->core_txq, VAR_5);


 if (!FUNC_9() || FUNC_10(VAR_2->core_txq)) {
  struct ef4_tx_queue *VAR_6 = FUNC_7(VAR_2);





  if (VAR_6->xmit_more_available)
   FUNC_4(VAR_6);

  FUNC_4(VAR_2);
 } else {
  VAR_2->xmit_more_available = FUNC_9();
 }

 VAR_2->tx_packets++;

 FUNC_6(VAR_2);

 return VAR_1;


err:
 FUNC_3(VAR_2);
 FUNC_1(VAR_3);
 return VAR_1;
}
