
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ee_info; int ee_data; int ee_origin; int ee_errno; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int dev; struct sock* sk; } ;
struct TYPE_5__ {struct sk_buff* skb; } ;
struct arcnet_local {int dev; TYPE_2__ outgoing; int reply_status; } ;
struct TYPE_6__ {int tskey; } ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock_exterr_skb*,int ,int) ;
 struct sk_buff* FUNC_6 (struct sk_buff*) ;
 TYPE_3__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_2)
{
 struct arcnet_local *VAR_3 = (struct arcnet_local *)VAR_2;

 struct sk_buff *VAR_4, *VAR_5;
 struct sock_exterr_skb *VAR_6;
 struct sock *VAR_7;
 int VAR_8;

 FUNC_3();
 VAR_5 = VAR_3->outgoing.skb;
 if (!VAR_5 || !VAR_5->sk) {
  FUNC_4();
  return;
 }

 FUNC_8(VAR_5->sk);
 VAR_7 = VAR_5->sk;
 VAR_4 = FUNC_6(VAR_5);
 FUNC_9(VAR_5->sk);

 if (!VAR_4) {
  FUNC_4();
  return;
 }

 VAR_6 = FUNC_0(VAR_4);
 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->ee.ee_errno = VAR_0;
 VAR_6->ee.ee_origin = VAR_1;
 VAR_6->ee.ee_data = FUNC_7(VAR_5)->tskey;
 VAR_6->ee.ee_info = VAR_3->reply_status;


 FUNC_1(VAR_3->outgoing.skb);
 VAR_3->outgoing.skb = ((void*)0);

 VAR_4->dev = VAR_3->dev;

 VAR_8 = FUNC_10(VAR_7, VAR_4);
 if (VAR_8)
  FUNC_2(VAR_4);

 FUNC_4();
}
