
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int len; struct net_device* dev; int protocol; } ;
struct TYPE_2__ {int remote; } ;
struct pppox_sock {TYPE_1__ pppoe_pa; int num; struct net_device* pppoe_dev; } ;
struct pppoe_hdr {int ver; int type; int length; int sid; scalar_t__ code; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ,int ,int *,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct pppoe_hdr* FUNC_7 (struct sk_buff*) ;
 struct pppox_sock* FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct pppox_sock *VAR_5 = FUNC_8(VAR_3);
 struct net_device *VAR_6 = VAR_5->pppoe_dev;
 struct pppoe_hdr *VAR_7;
 int VAR_8 = VAR_4->len;
 if (FUNC_11(VAR_3, VAR_2) || !(VAR_3->sk_state & VAR_1))
  goto abort;

 if (!VAR_6)
  goto abort;




 if (FUNC_9(VAR_4, FUNC_0(VAR_6) + sizeof(*VAR_7)))
  goto abort;

 FUNC_1(VAR_4, sizeof(*VAR_7));
 FUNC_10(VAR_4);

 VAR_7 = FUNC_7(VAR_4);
 VAR_7->ver = 1;
 VAR_7->type = 1;
 VAR_7->code = 0;
 VAR_7->sid = VAR_5->num;
 VAR_7->length = FUNC_5(VAR_8);

 VAR_4->protocol = FUNC_2(VAR_0);
 VAR_4->dev = VAR_6;

 FUNC_3(VAR_4, VAR_6, VAR_0,
   VAR_5->pppoe_pa.remote, ((void*)0), VAR_8);

 FUNC_4(VAR_4);
 return 1;

abort:
 FUNC_6(VAR_4);
 return 1;
}
