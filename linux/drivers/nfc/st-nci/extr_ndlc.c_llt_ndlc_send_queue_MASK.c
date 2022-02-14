
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_5__ {int qlen; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct llt_ndlc {int hard_fault; int t1_active; int t2_active; int t2_timer; int t1_timer; TYPE_2__ ack_pending_q; int phy_id; TYPE_1__* ops; TYPE_3__ send_q; } ;
struct TYPE_4__ {int (* write ) (int ,struct sk_buff*) ;} ;


 int FUNC_0 (char*,struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 struct sk_buff* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_6 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct llt_ndlc *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 if (VAR_3->send_q.qlen)
  FUNC_3("sendQlen=%d unackQlen=%d\n",
    VAR_3->send_q.qlen, VAR_3->ack_pending_q.qlen);

 while (VAR_3->send_q.qlen) {
  VAR_4 = FUNC_4(&VAR_3->send_q);
  FUNC_0("ndlc frame written", VAR_4);
  VAR_5 = VAR_3->ops->write(VAR_3->phy_id, VAR_4);
  if (VAR_5 < 0) {
   VAR_3->hard_fault = VAR_5;
   break;
  }
  VAR_6 = VAR_2;
  *(unsigned long *)VAR_4->cb = VAR_6;

  FUNC_5(&VAR_3->ack_pending_q, VAR_4);


  VAR_3->t1_active = 1;
  FUNC_1(&VAR_3->t1_timer, VAR_6 +
   FUNC_2(VAR_0));

  VAR_3->t2_active = 1;
  FUNC_1(&VAR_3->t2_timer, VAR_6 +
   FUNC_2(VAR_1));
 }
}
