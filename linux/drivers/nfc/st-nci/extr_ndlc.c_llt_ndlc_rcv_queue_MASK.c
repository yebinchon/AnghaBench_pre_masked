
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct llt_ndlc {int t2_active; int t1_active; int ndev; int t1_timer; int t2_timer; TYPE_1__ ack_pending_q; TYPE_1__ rcv_q; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct llt_ndlc*) ;
 int FUNC_3 (struct llt_ndlc*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 int FUNC_7 (char*,scalar_t__) ;
 struct sk_buff* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct llt_ndlc *VAR_7)
{
 struct sk_buff *VAR_8;
 u8 VAR_9;
 unsigned long VAR_10;

 if (VAR_7->rcv_q.qlen)
  FUNC_7("rcvQlen=%d\n", VAR_7->rcv_q.qlen);

 while ((VAR_8 = FUNC_8(&VAR_7->rcv_q)) != ((void*)0)) {
  VAR_9 = VAR_8->data[0];
  FUNC_9(VAR_8, 1);
  if ((VAR_9 & VAR_4) == VAR_5) {
   switch (VAR_9 & VAR_2) {
   case 130:
    VAR_8 = FUNC_8(&VAR_7->ack_pending_q);
    FUNC_1(VAR_8);
    FUNC_0(&VAR_7->t1_timer);
    FUNC_0(&VAR_7->t2_timer);
    VAR_7->t2_active = 0;
    VAR_7->t1_active = 0;
    break;
   case 129:
    FUNC_2(VAR_7);
    FUNC_3(VAR_7);

    VAR_10 = VAR_6;
    VAR_7->t1_active = 1;
    FUNC_4(&VAR_7->t1_timer, VAR_10 +
     FUNC_5(VAR_0));
    break;
   case 128:
    VAR_10 = VAR_6;
    VAR_7->t1_active = 1;
    FUNC_4(&VAR_7->t1_timer, VAR_10 +
       FUNC_5(VAR_1));
    break;
   default:
    FUNC_1(VAR_8);
    break;
   }
  } else if ((VAR_9 & VAR_4) == VAR_3) {
   FUNC_6(VAR_7->ndev, VAR_8);
  } else {
   FUNC_1(VAR_8);
  }
 }
}
