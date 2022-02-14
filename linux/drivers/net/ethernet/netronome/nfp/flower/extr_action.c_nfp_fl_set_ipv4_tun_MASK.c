
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct rtable {int dst; } ;
struct nfp_flower_priv {int flower_ext_feats; } ;
struct TYPE_6__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_set_ipv4_tun {int tun_flags; int tun_len; int tun_proto; int tos; scalar_t__ ttl; int tun_id; int tun_type_index; TYPE_1__ head; } ;
struct nfp_fl_pre_tunnel {int ipv4_dst; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ sysctl_ip_default_ttl; } ;
struct net {TYPE_2__ ipv4; } ;
struct TYPE_8__ {int dst; } ;
struct TYPE_9__ {TYPE_3__ ipv4; } ;
struct TYPE_10__ {int tun_flags; TYPE_4__ u; int tos; scalar_t__ ttl; int tun_id; } ;
struct ip_tunnel_info {int options_len; TYPE_5__ key; } ;
struct flowi4 {int flowi4_proto; int daddr; } ;
struct flow_action_entry {struct ip_tunnel_info* tunnel; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (struct rtable*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 struct net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 struct rtable* FUNC_8 (struct net*,struct flowi4*) ;
 int FUNC_9 (struct rtable*) ;

__attribute__((used)) static int
FUNC_10(struct nfp_app *VAR_16, struct nfp_fl_set_ipv4_tun *VAR_17,
      const struct flow_action_entry *VAR_18,
      struct nfp_fl_pre_tunnel *VAR_19,
      enum nfp_flower_tun_type VAR_20,
      struct net_device *VAR_21, struct netlink_ext_ack *VAR_22)
{
 size_t VAR_23 = sizeof(struct nfp_fl_set_ipv4_tun);
 const struct ip_tunnel_info *VAR_24 = VAR_18->tunnel;
 struct nfp_flower_priv *VAR_25 = VAR_16->priv;
 u32 VAR_26 = 0;

 int VAR_27 = 0;

 FUNC_0(VAR_9 != VAR_13 ||
       VAR_12 != VAR_15 ||
       VAR_11 != VAR_14);
 if (VAR_24->options_len &&
     (VAR_20 != VAR_10 ||
     !(VAR_25->flower_ext_feats & VAR_4))) {
  FUNC_2(VAR_22, "unsupported offload: loaded firmware does not support geneve options offload");
  return -VAR_0;
 }

 VAR_17->head.jump_id = VAR_3;
 VAR_17->head.len_lw = VAR_23 >> VAR_7;


 VAR_26 |=
  FUNC_1(VAR_6, VAR_20) |
  FUNC_1(VAR_5, VAR_27);

 VAR_17->tun_type_index = FUNC_4(VAR_26);
 VAR_17->tun_id = VAR_24->key.tun_id;

 if (VAR_24->key.ttl) {
  VAR_17->ttl = VAR_24->key.ttl;
 } else {
  struct net *VAR_28 = FUNC_5(VAR_21);
  struct flowi4 VAR_29 = {};
  struct rtable *VAR_30;
  int VAR_31;





  VAR_29.daddr = VAR_24->key.u.ipv4.dst;
  VAR_29.flowi4_proto = VAR_2;
  VAR_30 = FUNC_8(VAR_28, &VAR_29);
  VAR_31 = FUNC_3(VAR_30);
  if (!VAR_31) {
   VAR_17->ttl = FUNC_7(&VAR_30->dst);
   FUNC_9(VAR_30);
  } else {
   VAR_17->ttl = VAR_28->ipv4.sysctl_ip_default_ttl;
  }
 }

 VAR_17->tos = VAR_24->key.tos;

 if (!(VAR_24->key.tun_flags & VAR_12) ||
     VAR_24->key.tun_flags & ~VAR_8) {
  FUNC_2(VAR_22, "unsupported offload: loaded firmware does not support tunnel flag offload");
  return -VAR_0;
 }
 VAR_17->tun_flags = VAR_24->key.tun_flags;

 if (VAR_20 == VAR_10) {
  VAR_17->tun_proto = FUNC_6(VAR_1);
  VAR_17->tun_len = VAR_24->options_len / 4;
 }


 VAR_19->ipv4_dst = VAR_24->key.u.ipv4.dst;

 return 0;
}
