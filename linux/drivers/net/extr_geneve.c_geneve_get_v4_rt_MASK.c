
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct TYPE_8__ {struct net_device* dev; } ;
struct rtable {TYPE_4__ dst; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int src; int dst; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_7__ {int tos; TYPE_2__ u; } ;
struct ip_tunnel_info {int dst_cache; TYPE_3__ key; } ;
struct geneve_sock {int dummy; } ;
struct geneve_dev {int net; int collect_md; } ;
struct flowi4 {int saddr; int daddr; int flowi4_tos; int flowi4_proto; int flowi4_mark; } ;
struct dst_cache {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtable* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (int) ;
 struct rtable* FUNC_3 (struct dst_cache*,int *) ;
 int FUNC_4 (struct dst_cache*,TYPE_4__*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct rtable* FUNC_6 (int ,struct flowi4*) ;
 int FUNC_7 (struct rtable*) ;
 int FUNC_8 (struct sk_buff*,struct ip_tunnel_info const*) ;
 int FUNC_9 (int ,struct sk_buff*) ;
 int FUNC_10 (struct flowi4*,int ,int) ;
 int FUNC_11 (struct net_device*,char*,int *) ;
 struct geneve_dev* FUNC_12 (struct net_device*) ;

__attribute__((used)) static struct rtable *FUNC_13(struct sk_buff *VAR_4,
           struct net_device *VAR_5,
           struct geneve_sock *VAR_6,
           struct flowi4 *VAR_7,
           const struct ip_tunnel_info *VAR_8)
{
 bool VAR_9 = FUNC_8(VAR_4, VAR_8);
 struct geneve_dev *VAR_10 = FUNC_12(VAR_5);
 struct dst_cache *VAR_11;
 struct rtable *VAR_12 = ((void*)0);
 __u8 VAR_13;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_10(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->flowi4_mark = VAR_4->mark;
 VAR_7->flowi4_proto = VAR_3;
 VAR_7->daddr = VAR_8->key.u.ipv4.dst;
 VAR_7->saddr = VAR_8->key.u.ipv4.src;

 VAR_13 = VAR_8->key.tos;
 if ((VAR_13 == 1) && !VAR_10->collect_md) {
  VAR_13 = FUNC_9(FUNC_5(VAR_4), VAR_4);
  VAR_9 = 0;
 }
 VAR_7->flowi4_tos = FUNC_2(VAR_13);

 VAR_11 = (struct dst_cache *)&VAR_8->dst_cache;
 if (VAR_9) {
  VAR_12 = FUNC_3(VAR_11, &VAR_7->saddr);
  if (VAR_12)
   return VAR_12;
 }
 VAR_12 = FUNC_6(VAR_10->net, VAR_7);
 if (FUNC_1(VAR_12)) {
  FUNC_11(VAR_5, "no route to %pI4\n", &VAR_7->daddr);
  return FUNC_0(-VAR_2);
 }
 if (VAR_12->dst.dev == VAR_5) {
  FUNC_11(VAR_5, "circular route to %pI4\n", &VAR_7->daddr);
  FUNC_7(VAR_12);
  return FUNC_0(-VAR_1);
 }
 if (VAR_9)
  FUNC_4(VAR_11, &VAR_12->dst, VAR_7->saddr);
 return VAR_12;
}
