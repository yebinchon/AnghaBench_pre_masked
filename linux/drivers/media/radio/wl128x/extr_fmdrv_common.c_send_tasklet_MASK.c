
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fmdev {scalar_t__ last_tx_jiffies; int tx_cnt; int * resp_comp; int pre_op; int tx_q; } ;
struct TYPE_2__ {int * completion; int fm_op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2)
{
 struct fmdev *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_3 = (struct fmdev *)VAR_2;

 if (!FUNC_1(&VAR_3->tx_cnt))
  return;


 if ((VAR_1 - VAR_3->last_tx_jiffies) > VAR_0) {
  FUNC_4("TX timeout occurred\n");
  FUNC_2(&VAR_3->tx_cnt, 1);
 }


 VAR_4 = FUNC_7(&VAR_3->tx_q);
 if (!VAR_4)
  return;

 FUNC_0(&VAR_3->tx_cnt);
 VAR_3->pre_op = FUNC_3(VAR_4)->fm_op;

 if (VAR_3->resp_comp != ((void*)0))
  FUNC_4("Response completion handler is not NULL\n");

 VAR_3->resp_comp = FUNC_3(VAR_4)->completion;


 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 < 0) {
  FUNC_6(VAR_4);
  VAR_3->resp_comp = ((void*)0);
  FUNC_4("TX tasklet failed to send skb(%p)\n", VAR_4);
  FUNC_2(&VAR_3->tx_cnt, 1);
 } else {
  VAR_3->last_tx_jiffies = VAR_1;
 }
}
