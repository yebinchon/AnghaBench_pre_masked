
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct llt_ndlc {int send_q; int ack_pending_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct llt_ndlc *VAR_5)
{
 struct sk_buff *VAR_6;
 u8 VAR_7;

 while ((VAR_6 = FUNC_2(&VAR_5->ack_pending_q))) {
  VAR_7 = VAR_6->data[0];
  switch (VAR_7 & VAR_4) {
  case 128:
   VAR_6->data[0] = (VAR_7 & ~VAR_2) |
    VAR_3;
   break;
  case 129:
   VAR_6->data[0] = (VAR_7 & ~VAR_0) |
    VAR_1;
   break;
  default:
   FUNC_1("UNKNOWN Packet Control Byte=%d\n", VAR_7);
   FUNC_0(VAR_6);
   continue;
  }
  FUNC_3(&VAR_5->send_q, VAR_6);
 }
}
