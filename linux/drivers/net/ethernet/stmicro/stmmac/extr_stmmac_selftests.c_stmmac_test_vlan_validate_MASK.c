
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct udphdr {scalar_t__ dest; } ;
struct stmmachdr {scalar_t__ magic; } ;
struct stmmac_test_priv {scalar_t__ vlan_id; int ok; int comp; TYPE_1__* packet; scalar_t__ double_vlan; } ;
struct sk_buff {scalar_t__ vlan_proto; scalar_t__ vlan_tci; } ;
struct packet_type {struct stmmac_test_priv* af_packet_priv; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct ethhdr {int h_dest; } ;
struct TYPE_2__ {int dport; int dst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_7,
         struct net_device *VAR_8,
         struct packet_type *VAR_9,
         struct net_device *VAR_10)
{
 struct stmmac_test_priv *VAR_11 = VAR_9->af_packet_priv;
 struct stmmachdr *VAR_12;
 struct ethhdr *VAR_13;
 struct udphdr *VAR_14;
 struct iphdr *VAR_15;
 u16 VAR_16;

 VAR_16 = VAR_11->double_vlan ? VAR_1 : VAR_2;

 VAR_7 = FUNC_10(VAR_7, VAR_3);
 if (!VAR_7)
  goto out;

 if (FUNC_7(VAR_7))
  goto out;
 if (FUNC_6(VAR_7) < (VAR_6 - VAR_0))
  goto out;
 if (VAR_11->vlan_id) {
  if (VAR_7->vlan_proto != FUNC_3(VAR_16))
   goto out;
  if (VAR_7->vlan_tci != VAR_11->vlan_id)
   goto out;
 }

 VAR_13 = (struct ethhdr *)FUNC_8(VAR_7);
 if (!FUNC_2(VAR_13->h_dest, VAR_11->packet->dst))
  goto out;

 VAR_15 = FUNC_4(VAR_7);
 if (VAR_11->double_vlan)
  VAR_15 = (struct iphdr *)(FUNC_9(VAR_7) + 4);
 if (VAR_15->protocol != VAR_4)
  goto out;

 VAR_14 = (struct udphdr *)((u8 *)VAR_15 + 4 * VAR_15->ihl);
 if (VAR_14->dest != FUNC_3(VAR_11->packet->dport))
  goto out;

 VAR_12 = (struct stmmachdr *)((u8 *)VAR_14 + sizeof(*VAR_14));
 if (VAR_12->magic != FUNC_1(VAR_5))
  goto out;

 VAR_11->ok = 1;
 FUNC_0(&VAR_11->comp);

out:
 FUNC_5(VAR_7);
 return 0;
}
