
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct cxgbit_sock {int txq; int ppodq; int write_seq; int lock; scalar_t__ lock_owner; TYPE_1__ com; int ack_waitq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 (struct cxgbit_sock*) ;
 int FUNC_4 (struct cxgbit_sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct cxgbit_sock*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct cxgbit_sock *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = 0;

 FUNC_12(VAR_2->ack_waitq, FUNC_3(VAR_2));

 if (FUNC_11((VAR_2->com.state != VAR_0) ||
       FUNC_7(VAR_1))) {
  FUNC_0(VAR_3);
  FUNC_1(&VAR_2->ppodq);
  VAR_4 = -1;
  FUNC_9(&VAR_2->lock);
  if (VAR_2->lock_owner) {
   FUNC_10(&VAR_2->lock);
   goto unlock;
  }
  FUNC_10(&VAR_2->lock);
  return VAR_4;
 }

 VAR_2->write_seq += VAR_3->len +
     FUNC_5(VAR_3);

 FUNC_8(&VAR_2->ppodq, &VAR_2->txq);
 FUNC_2(&VAR_2->txq, VAR_3);
 FUNC_4(VAR_2);

unlock:
 FUNC_6(VAR_2);
 return VAR_4;
}
