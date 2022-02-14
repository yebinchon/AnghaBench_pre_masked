
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int protocol; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int * proto; struct sk_buff* skb; } ;
struct arcnet_local {TYPE_4__ outgoing; } ;
struct TYPE_5__ {int ack; } ;
struct TYPE_6__ {int * cookie; TYPE_1__ mes; scalar_t__ proto; } ;
struct TYPE_7__ {TYPE_2__ cap; } ;
struct archdr {TYPE_3__ soft; } ;
struct arc_cap {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,int,...) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct arcnet_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct archdr*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6, int VAR_7)
{
 struct arcnet_local *VAR_8 = FUNC_6(VAR_6);
 struct sk_buff *VAR_9;
 struct archdr *VAR_10;
 int VAR_11 = sizeof(struct arc_cap);

 FUNC_2(VAR_1, VAR_6, "capmode: ack_tx: protocol: %x: result: %d\n",
     VAR_8->outgoing.skb->protocol, VAR_7);

 if (FUNC_0(VAR_3))
  FUNC_3(VAR_6, VAR_8->outgoing.skb, "ack_tx");


 VAR_9 = FUNC_1(VAR_11 + VAR_0, VAR_5);
 if (!VAR_9)
  goto free_outskb;

 FUNC_10(VAR_9, VAR_11 + VAR_0);
 VAR_9->dev = VAR_6;

 FUNC_11(VAR_9);
 VAR_10 = (struct archdr *)FUNC_9(VAR_9);


 FUNC_8(VAR_8->outgoing.skb, VAR_10,
      VAR_0 + sizeof(struct arc_cap));
 VAR_10->soft.cap.proto = 0;
 VAR_10->soft.cap.mes.ack = VAR_7;

 FUNC_2(VAR_2, VAR_6, "Acknowledge for cap packet %x.\n",
     *((int *)&VAR_10->soft.cap.cookie[0]));

 VAR_9->protocol = FUNC_4(VAR_4);

 if (FUNC_0(VAR_3))
  FUNC_3(VAR_6, VAR_9, "ack_tx_recv");
 FUNC_7(VAR_9);

free_outskb:
 FUNC_5(VAR_8->outgoing.skb);
 VAR_8->outgoing.proto = ((void*)0);


 return 0;
}
