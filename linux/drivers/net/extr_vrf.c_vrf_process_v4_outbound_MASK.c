
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct rtable {TYPE_2__ dst; } ;
struct TYPE_5__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int ifindex; } ;
struct net {int dummy; } ;
struct iphdr {scalar_t__ saddr; int daddr; int protocol; int tos; } ;
struct flowi4 {int flowi4_flags; scalar_t__ saddr; int daddr; int flowi4_proto; int flowi4_tos; int flowi4_iif; int flowi4_oif; } ;
typedef int netdev_tx_t ;
typedef int fl4 ;
struct TYPE_7__ {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct net* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int ) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 struct rtable* FUNC_6 (struct net*,struct flowi4*,int *) ;
 int FUNC_7 (struct flowi4*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 TYPE_4__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct net*,int ,struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct net_device*,TYPE_2__*) ;
 int FUNC_17 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_18(struct sk_buff *VAR_7,
        struct net_device *VAR_8)
{
 struct iphdr *VAR_9;
 int VAR_10 = VAR_4;
 struct flowi4 VAR_11;
 struct net *VAR_12 = FUNC_3(VAR_8);
 struct rtable *VAR_13;

 if (!FUNC_9(VAR_7, VAR_0 + sizeof(struct iphdr)))
  goto err;

 VAR_9 = FUNC_5(VAR_7);

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));

 VAR_11 = VAR_8->ifindex;
 VAR_11 = VAR_3;
 VAR_11 = FUNC_1(VAR_9->tos);
 VAR_11 = VAR_1 | VAR_2;
 VAR_11 = VAR_9->protocol;
 VAR_11 = VAR_9->daddr;
 VAR_11 = VAR_9->saddr;

 VAR_13 = FUNC_6(VAR_12, &VAR_11, ((void*)0));
 if (FUNC_0(VAR_13))
  goto err;

 FUNC_11(VAR_7);





 if (VAR_13->dst.dev == VAR_8)
  return FUNC_16(VAR_7, VAR_8, &VAR_13->dst);

 FUNC_12(VAR_7, &VAR_13->dst);


 FUNC_2(VAR_7, FUNC_13(VAR_7));

 if (!VAR_9->saddr) {
  VAR_9->saddr = FUNC_4(FUNC_10(VAR_7)->dev, 0,
            VAR_6);
 }

 VAR_10 = FUNC_15(FUNC_3(FUNC_10(VAR_7)->dev), VAR_7->sk, VAR_7);
 if (FUNC_14(FUNC_8(VAR_10)))
  VAR_8->stats.tx_errors++;
 else
  VAR_10 = VAR_5;

out:
 return VAR_10;
err:
 FUNC_17(VAR_8, VAR_7);
 goto out;
}
