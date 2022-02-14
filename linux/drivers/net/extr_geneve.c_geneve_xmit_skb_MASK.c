
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtable {int dst; } ;
struct net_device {int dummy; } ;
struct iphdr {int frag_off; } ;
struct ip_tunnel_key {int tun_flags; scalar_t__ ttl; int tos; } ;
struct ip_tunnel_info {struct ip_tunnel_key key; scalar_t__ options_len; } ;
struct geneve_sock {TYPE_1__* sock; } ;
struct TYPE_5__ {int tp_dst; } ;
struct TYPE_6__ {TYPE_2__ key; } ;
struct geneve_dev {scalar_t__ df; int dev; int net; TYPE_3__ info; scalar_t__ ttl_inherit; scalar_t__ collect_md; int sock4; } ;
struct flowi4 {int daddr; int saddr; int flowi4_tos; } ;
struct ethhdr {int h_proto; } ;
typedef scalar_t__ __u8 ;
typedef int __be16 ;
struct TYPE_4__ {int sk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*,struct ip_tunnel_info const*,int,int) ;
 struct rtable* FUNC_5 (struct sk_buff*,struct net_device*,struct geneve_sock*,struct flowi4*,struct ip_tunnel_info const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 struct iphdr* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,struct iphdr*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct iphdr*,struct sk_buff*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct geneve_sock* FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,int *,scalar_t__) ;
 int FUNC_15 (int ,struct sk_buff*,int,int ,int) ;
 int FUNC_16 (struct rtable*,int ,struct sk_buff*,int ,int ,scalar_t__,scalar_t__,int,int,int ,int,int) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_9, struct net_device *VAR_10,
      struct geneve_dev *VAR_11,
      const struct ip_tunnel_info *VAR_12)
{
 bool VAR_13 = !FUNC_11(VAR_11->net, FUNC_2(VAR_11->dev));
 struct geneve_sock *VAR_14 = FUNC_13(VAR_11->sock4);
 const struct ip_tunnel_key *VAR_15 = &VAR_12->key;
 struct rtable *VAR_16;
 struct flowi4 VAR_17;
 __u8 VAR_18, VAR_19;
 __be16 VAR_20 = 0;
 __be16 VAR_21;
 int VAR_22;

 VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_14, &VAR_17, VAR_12);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 FUNC_14(VAR_9, &VAR_16->dst,
         VAR_4 + VAR_12->options_len);

 VAR_21 = FUNC_15(VAR_11->net, VAR_9, 1, VAR_8, 1);
 if (VAR_11->collect_md) {
  VAR_18 = FUNC_9(VAR_15->tos, FUNC_8(VAR_9), VAR_9);
  VAR_19 = VAR_15->ttl;

  VAR_20 = VAR_15->tun_flags & VAR_7 ? FUNC_6(VAR_5) : 0;
 } else {
  VAR_18 = FUNC_9(VAR_17, FUNC_8(VAR_9), VAR_9);
  if (VAR_11->ttl_inherit)
   VAR_19 = FUNC_10(FUNC_8(VAR_9), VAR_9);
  else
   VAR_19 = VAR_15->ttl;
  VAR_19 = VAR_19 ? : FUNC_7(&VAR_16->dst);

  if (VAR_11->df == VAR_3) {
   VAR_20 = FUNC_6(VAR_5);
  } else if (VAR_11->df == VAR_2) {
   struct ethhdr *VAR_23 = FUNC_3(VAR_9);

   if (FUNC_12(VAR_23->h_proto) == VAR_1) {
    VAR_20 = FUNC_6(VAR_5);
   } else if (FUNC_12(VAR_23->h_proto) == VAR_0) {
    struct iphdr *VAR_24 = FUNC_8(VAR_9);

    if (VAR_24->frag_off & FUNC_6(VAR_5))
     VAR_20 = FUNC_6(VAR_5);
   }
  }
 }

 VAR_22 = FUNC_4(&VAR_16->dst, VAR_9, VAR_12, VAR_13, sizeof(struct iphdr));
 if (FUNC_17(VAR_22))
  return VAR_22;

 FUNC_16(VAR_16, VAR_14->sock->sk, VAR_9, VAR_17, VAR_17,
       VAR_18, VAR_19, VAR_20, VAR_21, VAR_11->info.key.tp_dst,
       !FUNC_11(VAR_11->net, FUNC_2(VAR_11->dev)),
       !(VAR_12->key.tun_flags & VAR_6));
 return 0;
}
