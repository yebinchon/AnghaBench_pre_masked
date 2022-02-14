
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int net; } ;
struct sk_buff {int mark; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct ip_tunnel_info {int dummy; } ;
struct flowi4 {int flowi4_oif; void* saddr; void* fl4_sport; void* fl4_dport; void* daddr; int flowi4_proto; int flowi4_mark; int flowi4_tos; } ;
struct dst_cache {int dummy; } ;
typedef int fl4 ;
typedef void* __be32 ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtable* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (scalar_t__) ;
 struct rtable* FUNC_3 (struct dst_cache*,void**) ;
 int FUNC_4 (struct dst_cache*,TYPE_1__*,void*) ;
 struct rtable* FUNC_5 (int ,struct flowi4*) ;
 int FUNC_6 (struct rtable*) ;
 int FUNC_7 (struct sk_buff*,struct ip_tunnel_info const*) ;
 int FUNC_8 (struct flowi4*,int ,int) ;
 int FUNC_9 (struct net_device*,char*,void**) ;

__attribute__((used)) static struct rtable *FUNC_10(struct vxlan_dev *VAR_4, struct net_device *VAR_5,
          struct vxlan_sock *VAR_6,
          struct sk_buff *VAR_7, int VAR_8, u8 VAR_9,
          __be32 VAR_10, __be32 *VAR_11, __be16 VAR_12, __be16 VAR_13,
          struct dst_cache *VAR_14,
          const struct ip_tunnel_info *VAR_15)
{
 bool VAR_16 = FUNC_7(VAR_7, VAR_15);
 struct rtable *VAR_17 = ((void*)0);
 struct flowi4 VAR_18;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 if (VAR_9 && !VAR_15)
  VAR_16 = 0;
 if (VAR_16) {
  VAR_17 = FUNC_3(VAR_14, VAR_11);
  if (VAR_17)
   return VAR_17;
 }

 FUNC_8(&VAR_18, 0, sizeof(VAR_18));
 VAR_18 = VAR_8;
 VAR_18 = FUNC_2(VAR_9);
 VAR_18 = VAR_7->mark;
 VAR_18 = VAR_3;
 VAR_18 = VAR_10;
 VAR_18 = *VAR_11;
 VAR_18 = VAR_12;
 VAR_18 = VAR_13;

 VAR_17 = FUNC_5(VAR_4->net, &VAR_18);
 if (!FUNC_1(VAR_17)) {
  if (VAR_17->dst.dev == VAR_5) {
   FUNC_9(VAR_5, "circular route to %pI4\n", &VAR_10);
   FUNC_6(VAR_17);
   return FUNC_0(-VAR_1);
  }

  *VAR_11 = VAR_18;
  if (VAR_16)
   FUNC_4(VAR_14, &VAR_17->dst, VAR_18);
 } else {
  FUNC_9(VAR_5, "no route to %pI4\n", &VAR_10);
  return FUNC_0(-VAR_2);
 }
 return VAR_17;
}
