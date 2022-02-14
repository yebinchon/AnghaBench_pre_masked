
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_flower_pedit_acts {int dummy; } ;
struct nfp_fl_set_mpls {int dummy; } ;
struct nfp_fl_set_ipv4_tun {int dummy; } ;
struct nfp_fl_push_vlan {int dummy; } ;
struct nfp_fl_push_mpls {int dummy; } ;
struct nfp_fl_pre_tunnel {int dummy; } ;
struct nfp_fl_pop_vlan {int dummy; } ;
struct nfp_fl_pop_mpls {int dummy; } ;
struct TYPE_2__ {void* shortcut; } ;
struct nfp_fl_payload {TYPE_1__ meta; int * action_data; } ;
struct nfp_app {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ip_tunnel_info {int mode; } ;
struct flow_cls_offload {int dummy; } ;
struct flow_action_entry {int id; int csum_flags; int ptype; struct ip_tunnel_info* tunnel; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_app*,struct flow_cls_offload*,struct flow_action_entry const*,int) ;
 int FUNC_3 (struct flow_action_entry const*,struct flow_cls_offload*,int *,int*,int*,struct nfp_flower_pedit_acts*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nfp_fl_pop_mpls*,struct flow_action_entry const*) ;
 int FUNC_5 (struct nfp_fl_pop_vlan*) ;
 struct nfp_fl_pre_tunnel* FUNC_6 (int *,int) ;
 int FUNC_7 (struct nfp_fl_payload*,int*,struct flow_action_entry const*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct nfp_fl_push_mpls*,struct flow_action_entry const*,struct netlink_ext_ack*) ;
 int FUNC_9 (struct nfp_fl_push_vlan*,struct flow_action_entry const*) ;
 int FUNC_10 (struct nfp_app*,struct nfp_fl_set_ipv4_tun*,struct flow_action_entry const*,struct nfp_fl_pre_tunnel*,int,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_11 (struct nfp_fl_set_mpls*,struct flow_action_entry const*) ;
 int FUNC_12 (struct nfp_app*,struct flow_action_entry const*,struct nfp_fl_payload*,int*,struct net_device*,int,int*,int*,int*,int*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_13(struct nfp_app *VAR_8, const struct flow_action_entry *VAR_9,
         struct flow_cls_offload *VAR_10,
         struct nfp_fl_payload *VAR_11, int *VAR_12,
         struct net_device *VAR_13,
         enum nfp_flower_tun_type *VAR_14, int *VAR_15,
         int *VAR_16, u32 *VAR_17,
         struct nfp_flower_pedit_acts *VAR_18, bool *VAR_19,
         struct netlink_ext_ack *VAR_20, int VAR_21)
{
 struct nfp_fl_set_ipv4_tun *VAR_22;
 struct nfp_fl_pre_tunnel *VAR_23;
 struct nfp_fl_push_vlan *VAR_24;
 struct nfp_fl_push_mpls *VAR_25;
 struct nfp_fl_pop_vlan *VAR_26;
 struct nfp_fl_pop_mpls *VAR_27;
 struct nfp_fl_set_mpls *VAR_28;
 int VAR_29;

 switch (VAR_9->id) {
 case 141:
  VAR_11->meta.shortcut = FUNC_1(VAR_2);
  break;
 case 132:
 case 133:
  VAR_29 = FUNC_12(VAR_8, VAR_9, VAR_11, VAR_12, VAR_13,
            1, VAR_14, VAR_15,
            VAR_16, VAR_17, *VAR_19,
            VAR_20);
  if (VAR_29)
   return VAR_29;
  break;
 case 138:
 case 139:
  VAR_29 = FUNC_12(VAR_8, VAR_9, VAR_11, VAR_12, VAR_13,
            0, VAR_14, VAR_15,
            VAR_16, VAR_17, *VAR_19,
            VAR_20);
  if (VAR_29)
   return VAR_29;
  break;
 case 129:
  if (*VAR_12 +
      sizeof(struct nfp_fl_pop_vlan) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at pop vlan");
   return -VAR_0;
  }

  VAR_26 = (struct nfp_fl_pop_vlan *)&VAR_11->action_data[*VAR_12];
  VAR_11->meta.shortcut = FUNC_1(VAR_4);

  FUNC_5(VAR_26);
  *VAR_12 += sizeof(struct nfp_fl_pop_vlan);
  break;
 case 128:
  if (*VAR_12 +
      sizeof(struct nfp_fl_push_vlan) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at push vlan");
   return -VAR_0;
  }

  VAR_24 = (struct nfp_fl_push_vlan *)&VAR_11->action_data[*VAR_12];
  VAR_11->meta.shortcut = FUNC_1(VAR_3);

  FUNC_9(VAR_24, VAR_9);
  *VAR_12 += sizeof(struct nfp_fl_push_vlan);
  break;
 case 130: {
  const struct ip_tunnel_info *VAR_30 = VAR_9->tunnel;

  *VAR_14 = FUNC_2(VAR_8, VAR_10, VAR_9, VAR_21);
  if (*VAR_14 == VAR_6) {
   FUNC_0(VAR_20, "unsupported offload: unsupported tunnel type in action list");
   return -VAR_0;
  }

  if (VAR_30->mode & ~VAR_5) {
   FUNC_0(VAR_20, "unsupported offload: unsupported tunnel flags in action list");
   return -VAR_0;
  }





  if (*VAR_12 + sizeof(struct nfp_fl_pre_tunnel) +
      sizeof(struct nfp_fl_set_ipv4_tun) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at tunnel encap");
   return -VAR_0;
  }

  VAR_23 = FUNC_6(VAR_11->action_data, *VAR_12);
  VAR_11->meta.shortcut = FUNC_1(VAR_3);
  *VAR_12 += sizeof(struct nfp_fl_pre_tunnel);

  VAR_29 = FUNC_7(VAR_11, VAR_12, VAR_9, VAR_20);
  if (VAR_29)
   return VAR_29;

  VAR_22 = (void *)&VAR_11->action_data[*VAR_12];
  VAR_29 = FUNC_10(VAR_8, VAR_22, VAR_9, VAR_23,
       *VAR_14, VAR_13, VAR_20);
  if (VAR_29)
   return VAR_29;
  *VAR_12 += sizeof(struct nfp_fl_set_ipv4_tun);
  }
  break;
 case 131:

  return 0;
 case 140:
  if (FUNC_3(VAR_9, VAR_10, &VAR_11->action_data[*VAR_12],
     VAR_12, VAR_17, VAR_18, VAR_20))
   return -VAR_0;
  break;
 case 142:

  if (VAR_9->csum_flags & ~*VAR_17) {
   FUNC_0(VAR_20, "unsupported offload: unsupported csum update action in action list");
   return -VAR_0;
  }



  *VAR_17 &= ~VAR_9->csum_flags;
  break;
 case 135:
  if (*VAR_12 +
      sizeof(struct nfp_fl_push_mpls) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at push MPLS");
   return -VAR_0;
  }

  VAR_25 = (struct nfp_fl_push_mpls *)&VAR_11->action_data[*VAR_12];
  VAR_11->meta.shortcut = FUNC_1(VAR_3);

  VAR_29 = FUNC_8(VAR_25, VAR_9, VAR_20);
  if (VAR_29)
   return VAR_29;
  *VAR_12 += sizeof(struct nfp_fl_push_mpls);
  break;
 case 136:
  if (*VAR_12 +
      sizeof(struct nfp_fl_pop_mpls) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at pop MPLS");
   return -VAR_0;
  }

  VAR_27 = (struct nfp_fl_pop_mpls *)&VAR_11->action_data[*VAR_12];
  VAR_11->meta.shortcut = FUNC_1(VAR_3);

  FUNC_4(VAR_27, VAR_9);
  *VAR_12 += sizeof(struct nfp_fl_pop_mpls);
  break;
 case 137:
  if (*VAR_12 +
      sizeof(struct nfp_fl_set_mpls) > VAR_1) {
   FUNC_0(VAR_20, "unsupported offload: maximum allowed action list size exceeded at set MPLS");
   return -VAR_0;
  }

  VAR_28 = (struct nfp_fl_set_mpls *)&VAR_11->action_data[*VAR_12];
  VAR_11->meta.shortcut = FUNC_1(VAR_3);

  FUNC_11(VAR_28, VAR_9);
  *VAR_12 += sizeof(struct nfp_fl_set_mpls);
  break;
 case 134:

  if (VAR_9->ptype != VAR_7)
   return -VAR_0;

  *VAR_19 = 1;
  break;
 default:

  FUNC_0(VAR_20, "unsupported offload: unsupported action in action list");
  return -VAR_0;
 }

 return 0;
}
