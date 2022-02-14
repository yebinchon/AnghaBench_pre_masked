
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct udphdr {scalar_t__ dest; } ;
struct tcphdr {scalar_t__ dest; } ;
struct stmmachdr {scalar_t__ magic; scalar_t__ id; } ;
struct stmmac_test_priv {int ok; int comp; TYPE_1__* packet; scalar_t__ double_vlan; } ;
struct sk_buff {int hash; } ;
struct packet_type {struct stmmac_test_priv* af_packet_priv; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct ethhdr {scalar_t__ h_source; scalar_t__ h_dest; } ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ exp_hash; int dport; scalar_t__ tcp; scalar_t__ src; scalar_t__ sarc; scalar_t__ dst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6,
      struct net_device *VAR_7,
      struct packet_type *VAR_8,
      struct net_device *VAR_9)
{
 struct stmmac_test_priv *VAR_10 = VAR_8->af_packet_priv;
 struct stmmachdr *VAR_11;
 struct ethhdr *VAR_12;
 struct udphdr *VAR_13;
 struct tcphdr *VAR_14;
 struct iphdr *VAR_15;

 VAR_6 = FUNC_10(VAR_6, VAR_1);
 if (!VAR_6)
  goto out;

 if (FUNC_7(VAR_6))
  goto out;
 if (FUNC_6(VAR_6) < (VAR_5 - VAR_0))
  goto out;

 VAR_12 = (struct ethhdr *)FUNC_8(VAR_6);
 if (VAR_10->packet->dst) {
  if (!FUNC_2(VAR_12->h_dest, VAR_10->packet->dst))
   goto out;
 }
 if (VAR_10->packet->sarc) {
  if (!FUNC_2(VAR_12->h_source, VAR_12->h_dest))
   goto out;
 } else if (VAR_10->packet->src) {
  if (!FUNC_2(VAR_12->h_source, VAR_10->packet->src))
   goto out;
 }

 VAR_15 = FUNC_4(VAR_6);
 if (VAR_10->double_vlan)
  VAR_15 = (struct iphdr *)(FUNC_9(VAR_6) + 4);

 if (VAR_10->packet->tcp) {
  if (VAR_15->protocol != VAR_2)
   goto out;

  VAR_14 = (struct tcphdr *)((u8 *)VAR_15 + 4 * VAR_15->ihl);
  if (VAR_14->dest != FUNC_3(VAR_10->packet->dport))
   goto out;

  VAR_11 = (struct stmmachdr *)((u8 *)VAR_14 + sizeof(*VAR_14));
 } else {
  if (VAR_15->protocol != VAR_3)
   goto out;

  VAR_13 = (struct udphdr *)((u8 *)VAR_15 + 4 * VAR_15->ihl);
  if (VAR_13->dest != FUNC_3(VAR_10->packet->dport))
   goto out;

  VAR_11 = (struct stmmachdr *)((u8 *)VAR_13 + sizeof(*VAR_13));
 }

 if (VAR_11->magic != FUNC_1(VAR_4))
  goto out;
 if (VAR_10->packet->exp_hash && !VAR_6->hash)
  goto out;
 if (VAR_10->packet->id != VAR_11->id)
  goto out;

 VAR_10->ok = 1;
 FUNC_0(&VAR_10->comp);
out:
 FUNC_5(VAR_6);
 return 0;
}
