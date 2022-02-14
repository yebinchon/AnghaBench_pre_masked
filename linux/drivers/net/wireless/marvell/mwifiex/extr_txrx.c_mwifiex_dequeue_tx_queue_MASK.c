
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct mwifiex_txinfo {int flags; int aggr_num; } ;
struct mwifiex_tx_param {int next_pkt_len; } ;
struct mwifiex_adapter {int tx_data_q; int tx_queued; } ;


 int VAR_0 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mwifiex_adapter*,struct sk_buff*,struct mwifiex_tx_param*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 struct sk_buff* FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct mwifiex_adapter *VAR_1)
{
 struct sk_buff *VAR_2, *VAR_3;
 struct mwifiex_txinfo *VAR_4;
 struct mwifiex_tx_param VAR_5;

 VAR_2 = FUNC_5(&VAR_1->tx_data_q);
 if (!VAR_2)
  return -1;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->flags & VAR_0)
  FUNC_2(VAR_4->aggr_num, &VAR_1->tx_queued);
 else
  FUNC_1(&VAR_1->tx_queued);

 if (!FUNC_7(&VAR_1->tx_data_q))
  VAR_3 = FUNC_6(&VAR_1->tx_data_q);
 else
  VAR_3 = ((void*)0);
 VAR_5.next_pkt_len = ((VAR_3) ? VAR_3->len : 0);
 if (!VAR_5.next_pkt_len) {
  if (!FUNC_4(VAR_1))
   VAR_5.next_pkt_len = 1;
 }
 return FUNC_3(VAR_1, VAR_2, &VAR_5);
}
