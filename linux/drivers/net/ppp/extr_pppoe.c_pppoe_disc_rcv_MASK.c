
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int padt_work; } ;
struct TYPE_5__ {TYPE_1__ pppoe; } ;
struct pppox_sock {TYPE_2__ proto; } ;
struct pppoe_net {int dummy; } ;
struct pppoe_hdr {scalar_t__ code; int sid; } ;
struct packet_type {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_6__ {int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct pppox_sock* FUNC_2 (struct pppoe_net*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct pppoe_hdr* FUNC_4 (struct sk_buff*) ;
 struct pppoe_net* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pppox_sock*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3, struct net_device *VAR_4,
     struct packet_type *VAR_5, struct net_device *VAR_6)

{
 struct pppoe_hdr *VAR_7;
 struct pppox_sock *VAR_8;
 struct pppoe_net *VAR_9;

 VAR_3 = FUNC_9(VAR_3, VAR_0);
 if (!VAR_3)
  goto out;

 if (!FUNC_6(VAR_3, sizeof(struct pppoe_hdr)))
  goto abort;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7->code != VAR_2)
  goto abort;

 VAR_9 = FUNC_5(FUNC_0(VAR_4));
 VAR_8 = FUNC_2(VAR_9, VAR_7->sid, FUNC_1(VAR_3)->h_source, VAR_4->ifindex);
 if (VAR_8)
  if (!FUNC_7(&VAR_8->proto.pppoe.padt_work))
   FUNC_10(FUNC_8(VAR_8));

abort:
 FUNC_3(VAR_3);
out:
 return VAR_1;
}
