
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qede_ptp {int tx_skb; int work; int ptp_tx_start; } ;
struct qede_dev {int ptp_skip_txts; int flags; struct qede_ptp* ptp; } ;
struct TYPE_2__ {int tx_flags; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct qede_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct qede_ptp *VAR_6;

 VAR_6 = VAR_4->ptp;
 if (!VAR_6)
  return;

 if (FUNC_5(VAR_0,
      &VAR_4->flags)) {
  FUNC_0(VAR_4, "Timestamping in progress\n");
  VAR_4->ptp_skip_txts++;
  return;
 }

 if (FUNC_7(!FUNC_6(VAR_1, &VAR_4->flags))) {
  FUNC_0(VAR_4,
         "Tx timestamping was not enabled, this packet will not be timestamped\n");
  FUNC_1(VAR_0, &VAR_4->flags);
  VAR_4->ptp_skip_txts++;
 } else if (FUNC_7(VAR_6->tx_skb)) {
  FUNC_0(VAR_4,
         "The device supports only a single outstanding packet to timestamp, this packet will not be timestamped\n");
  FUNC_1(VAR_0, &VAR_4->flags);
  VAR_4->ptp_skip_txts++;
 } else {
  FUNC_4(VAR_5)->tx_flags |= VAR_2;

  VAR_6->tx_skb = FUNC_3(VAR_5);
  VAR_6->ptp_tx_start = VAR_3;
  FUNC_2(&VAR_6->work);
 }
}
