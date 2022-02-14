
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cxgbit_sock {int lock; int backlogq; scalar_t__ lock_owner; scalar_t__ rx_credits; int ctrlq_idx; int tid; } ;
struct cpl_rx_data_ack {int dummy; } ;
typedef int (* cxgbit_skcb_rx_backlog_fn ) (struct cxgbit_sock*,struct sk_buff*) ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int (*) (struct cxgbit_sock*,struct sk_buff*)) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sk_buff*,int,int ,int ,int) ;
 int FUNC_5 (struct cxgbit_sock*,struct sk_buff*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct cxgbit_sock *VAR_2)
{
 struct sk_buff *VAR_3;
 u32 VAR_4 = FUNC_6(sizeof(struct cpl_rx_data_ack), 16);
 u32 VAR_5;

 VAR_3 = FUNC_3(VAR_4, VAR_0);
 if (!VAR_3)
  return -1;

 VAR_5 = VAR_1 | FUNC_1(1) |
        FUNC_0(VAR_2->rx_credits);

 FUNC_4(VAR_3, VAR_4, VAR_2->tid, VAR_2->ctrlq_idx,
       VAR_5);

 VAR_2->rx_credits = 0;

 FUNC_7(&VAR_2->lock);
 if (VAR_2->lock_owner) {
  cxgbit_skcb_rx_backlog_fn(VAR_6) = FUNC_5;
  FUNC_2(&VAR_2->backlogq, VAR_6);
  FUNC_8(&VAR_2->lock);
  return 0;
 }

 FUNC_5(VAR_2, VAR_3);
 FUNC_8(&VAR_2->lock);

 return 0;
}
