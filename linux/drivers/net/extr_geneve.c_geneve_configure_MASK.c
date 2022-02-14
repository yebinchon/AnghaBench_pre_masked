
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int max_mtu; int needed_headroom; } ;
struct net {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel_info {int dst_cache; } ;
struct geneve_net {int geneve_list; } ;
struct geneve_dev {int collect_md; int use_udp6_rx_checksums; int ttl_inherit; int df; int next; struct ip_tunnel_info info; struct net_device* dev; struct net* net; } ;
typedef enum ifla_geneve_df { ____Placeholder_ifla_geneve_df } ifla_geneve_df ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int *) ;
 struct geneve_dev* FUNC_2 (struct geneve_net*,struct ip_tunnel_info const*,int*,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct ip_tunnel_info const*) ;
 int FUNC_4 (struct ip_tunnel_info const*) ;
 int FUNC_5 (int *,int *) ;
 struct geneve_net* FUNC_6 (struct net*,int ) ;
 struct geneve_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_7, struct net_device *VAR_8,
       struct netlink_ext_ack *VAR_9,
       const struct ip_tunnel_info *VAR_10,
       bool VAR_11, bool VAR_12,
       bool VAR_13, enum ifla_geneve_df VAR_14)
{
 struct geneve_net *VAR_15 = FUNC_6(VAR_7, VAR_6);
 struct geneve_dev *VAR_16, *VAR_17 = FUNC_7(VAR_8);
 bool VAR_18, VAR_19;
 int VAR_20, VAR_21;

 if (VAR_11 && !FUNC_4(VAR_10)) {
  FUNC_0(VAR_9,
          "Device is externally controlled, so attributes (VNI, Port, and so on) must not be specified");
  return -VAR_2;
 }

 VAR_17->net = VAR_7;
 VAR_17->dev = VAR_8;

 VAR_16 = FUNC_2(VAR_15, VAR_10, &VAR_19, &VAR_18);
 if (VAR_16)
  return -VAR_1;


 VAR_21 = VAR_5 + VAR_4;
 if (!VAR_11 && FUNC_3(VAR_10) == VAR_0) {
  VAR_21 += sizeof(struct iphdr);
  VAR_8->max_mtu -= sizeof(struct iphdr);
 } else {
  VAR_21 += sizeof(struct ipv6hdr);
  VAR_8->max_mtu -= sizeof(struct ipv6hdr);
 }
 VAR_8->needed_headroom = VAR_21 + VAR_4;

 if (VAR_11) {
  if (VAR_19) {
   FUNC_0(VAR_9,
           "There can be only one externally controlled device on a destination port");
   return -VAR_3;
  }
 } else {
  if (VAR_18) {
   FUNC_0(VAR_9,
           "There already exists an externally controlled device on this destination port");
   return -VAR_3;
  }
 }

 FUNC_1(&VAR_17->info.dst_cache);
 VAR_17->info = *VAR_10;
 VAR_17->collect_md = VAR_11;
 VAR_17->use_udp6_rx_checksums = VAR_12;
 VAR_17->ttl_inherit = VAR_13;
 VAR_17->df = VAR_14;

 VAR_20 = FUNC_8(VAR_8);
 if (VAR_20)
  return VAR_20;

 FUNC_5(&VAR_17->next, &VAR_15->geneve_list);
 return 0;
}
