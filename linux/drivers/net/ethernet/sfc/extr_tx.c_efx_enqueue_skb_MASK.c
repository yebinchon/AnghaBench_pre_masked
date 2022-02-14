
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ data_len; } ;
struct efx_tx_queue {unsigned int insert_count; int (* handle_tso ) (struct efx_tx_queue*,struct sk_buff*,int*) ;int xmit_more_available; unsigned int tso_packets; scalar_t__ tx_packets; int tso_bursts; int core_txq; int cb_packets; int pio_packets; int tso_fallbacks; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {unsigned int gso_segs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct efx_tx_queue*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct efx_tx_queue*,struct sk_buff*) ;
 int FUNC_5 (struct efx_tx_queue*,unsigned int) ;
 scalar_t__ FUNC_6 (struct efx_tx_queue*) ;
 int FUNC_7 (struct efx_tx_queue*) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_8 (struct efx_tx_queue*,struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct efx_tx_queue*) ;
 struct efx_tx_queue* FUNC_10 (struct efx_tx_queue*) ;
 int FUNC_11 (struct efx_tx_queue*,struct sk_buff*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct efx_tx_queue*,struct sk_buff*,int*) ;

netdev_tx_t FUNC_16(struct efx_tx_queue *VAR_4, struct sk_buff *VAR_5)
{
 unsigned int VAR_6 = VAR_4->insert_count;
 bool VAR_7 = FUNC_12();
 bool VAR_8 = 0;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_10 = VAR_5->len;
 VAR_9 = FUNC_13(VAR_5) ? FUNC_14(VAR_5)->gso_segs : 0;
 if (VAR_9 == 1)
  VAR_9 = 0;





 if (VAR_9) {
  FUNC_0(!VAR_4->handle_tso);
  VAR_11 = VAR_4->handle_tso(VAR_4, VAR_5, &VAR_8);
  if (VAR_11 == -VAR_1) {
   VAR_11 = FUNC_11(VAR_4, VAR_5);
   VAR_4->tso_fallbacks++;
   if (VAR_11 == 0)
    return 0;
  }
  if (VAR_11)
   goto err;
 } else if (VAR_5->data_len && VAR_10 <= VAR_0) {

  if (FUNC_3(VAR_4, VAR_5))
   goto err;
  VAR_4->cb_packets++;
  VAR_8 = 1;
 }


 if (!VAR_8 && (FUNC_8(VAR_4, VAR_5, VAR_9)))
  goto err;

 FUNC_9(VAR_4);


 if (FUNC_1(VAR_4->core_txq, VAR_10, VAR_7)) {
  struct efx_tx_queue *VAR_12 = FUNC_10(VAR_4);





  if (VAR_12->xmit_more_available)
   FUNC_7(VAR_12);

  FUNC_7(VAR_4);
 } else {
  VAR_4->xmit_more_available = VAR_7;
 }

 if (VAR_9) {
  VAR_4->tso_bursts++;
  VAR_4->tso_packets += VAR_9;
  VAR_4->tx_packets += VAR_9;
 } else {
  VAR_4->tx_packets++;
 }

 return VAR_2;


err:
 FUNC_5(VAR_4, VAR_6);
 FUNC_2(VAR_5);





 if (!VAR_7) {
  struct efx_tx_queue *VAR_13 = FUNC_10(VAR_4);

  if (VAR_13->xmit_more_available)
   FUNC_7(VAR_13);

  FUNC_7(VAR_4);
 }

 return VAR_2;
}
