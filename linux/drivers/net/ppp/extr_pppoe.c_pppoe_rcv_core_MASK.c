
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct pppox_sock {int pppoe_relay; int chan; } ;
struct TYPE_4__ {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 struct pppox_sock* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 struct pppox_sock* FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct pppox_sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct pppox_sock *VAR_8 = FUNC_4(VAR_6);
 struct pppox_sock *VAR_9;






 if (VAR_7->pkt_type == VAR_2)
  goto abort_kfree;

 if (VAR_6->sk_state & VAR_3) {
  FUNC_3(&VAR_8->chan, VAR_7);
 } else if (VAR_6->sk_state & VAR_5) {
  VAR_9 = FUNC_1(FUNC_6(VAR_6),
         &VAR_8->pppoe_relay);
  if (VAR_9 == ((void*)0))
   goto abort_kfree;

  if ((FUNC_5(VAR_9)->sk_state & VAR_4) == 0)
   goto abort_put;

  if (!FUNC_0(FUNC_5(VAR_9), VAR_7))
   goto abort_put;

  FUNC_7(FUNC_5(VAR_9));
 } else {
  if (FUNC_8(VAR_6, VAR_7))
   goto abort_kfree;
 }

 return VAR_1;

abort_put:
 FUNC_7(FUNC_5(VAR_9));

abort_kfree:
 FUNC_2(VAR_7);
 return VAR_0;
}
