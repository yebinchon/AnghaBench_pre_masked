
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ath9k_htc_tx_ctl {int txok; int timestamp; } ;
struct TYPE_2__ {struct sk_buff_head tx_failed; } ;
struct ath9k_htc_priv {int tx_failed_tasklet; TYPE_1__ tx; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff_head* FUNC_2 (struct ath9k_htc_priv*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_1, struct sk_buff *VAR_2,
      enum htc_endpoint_id VAR_3, bool VAR_4)
{
 struct ath9k_htc_priv *VAR_5 = VAR_1;
 struct ath9k_htc_tx_ctl *VAR_6;
 struct sk_buff_head *VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_6->txok = VAR_4;
 VAR_6->timestamp = VAR_0;

 if (!VAR_4) {
  FUNC_3(&VAR_5->tx.tx_failed, VAR_2);
  FUNC_4(&VAR_5->tx_failed_tasklet);
  return;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 if (!VAR_7) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_3(VAR_7, VAR_2);
}
