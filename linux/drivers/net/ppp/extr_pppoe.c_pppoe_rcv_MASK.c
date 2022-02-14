
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct pppox_sock {int dummy; } ;
struct pppoe_net {int dummy; } ;
struct pppoe_hdr {int sid; int length; } ;
struct packet_type {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int h_source; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct pppox_sock* FUNC_2 (struct pppoe_net*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct pppoe_hdr* FUNC_5 (struct sk_buff*) ;
 struct pppoe_net* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct pppox_sock*) ;
 int FUNC_10 (int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_3, struct net_device *VAR_4,
       struct packet_type *VAR_5, struct net_device *VAR_6)
{
 struct pppoe_hdr *VAR_7;
 struct pppox_sock *VAR_8;
 struct pppoe_net *VAR_9;
 int VAR_10;

 VAR_3 = FUNC_13(VAR_3, VAR_1);
 if (!VAR_3)
  goto out;

 if (FUNC_11(VAR_3) < VAR_0)
  goto drop;

 if (!FUNC_7(VAR_3, sizeof(struct pppoe_hdr)))
  goto drop;

 VAR_7 = FUNC_5(VAR_3);
 VAR_10 = FUNC_4(VAR_7->length);

 FUNC_12(VAR_3, sizeof(*VAR_7));
 if (VAR_3->len < VAR_10)
  goto drop;

 if (FUNC_8(VAR_3, VAR_10))
  goto drop;

 VAR_7 = FUNC_5(VAR_3);
 VAR_9 = FUNC_6(FUNC_0(VAR_4));




 VAR_8 = FUNC_2(VAR_9, VAR_7->sid, FUNC_1(VAR_3)->h_source, VAR_4->ifindex);
 if (!VAR_8)
  goto drop;

 return FUNC_10(FUNC_9(VAR_8), VAR_3, 0);

drop:
 FUNC_3(VAR_3);
out:
 return VAR_2;
}
