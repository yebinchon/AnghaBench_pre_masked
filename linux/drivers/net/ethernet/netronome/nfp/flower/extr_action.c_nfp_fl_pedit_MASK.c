
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_flower_pedit_acts {int set_tport; int set_ip6_tc_hl_fl; int set_ip6_src; int set_ip6_dst; int set_ip_ttl_tos; int set_ip_addr; int set_eth; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_2__ {int htype; int offset; } ;
struct flow_action_entry {TYPE_1__ mangle; } ;
typedef enum flow_action_mangle_base { ____Placeholder_flow_action_mangle_base } flow_action_mangle_base ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;





 int FUNC_1 (struct flow_action_entry const*,int ,int *,struct netlink_ext_ack*) ;
 int FUNC_2 (struct flow_action_entry const*,int ,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_3 (struct flow_action_entry const*,int ,int *,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_4 (struct flow_action_entry const*,int ,int *,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_5(const struct flow_action_entry *VAR_3,
      struct flow_cls_offload *VAR_4, char *VAR_5, int *VAR_6,
      u32 *VAR_7, struct nfp_flower_pedit_acts *VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 enum flow_action_mangle_base VAR_10;
 u32 VAR_11;

 VAR_10 = VAR_3->mangle.htype;
 VAR_11 = VAR_3->mangle.offset;

 switch (VAR_10) {
 case 132:
  return FUNC_1(VAR_3, VAR_11, &VAR_8->set_eth, VAR_9);
 case 131:
  return FUNC_2(VAR_3, VAR_11, &VAR_8->set_ip_addr,
          &VAR_8->set_ip_ttl_tos, VAR_9);
 case 130:
  return FUNC_3(VAR_3, VAR_11, &VAR_8->set_ip6_dst,
          &VAR_8->set_ip6_src,
          &VAR_8->set_ip6_tc_hl_fl, VAR_9);
 case 129:
  return FUNC_4(VAR_3, VAR_11, &VAR_8->set_tport,
     VAR_1, VAR_9);
 case 128:
  return FUNC_4(VAR_3, VAR_11, &VAR_8->set_tport,
     VAR_2, VAR_9);
 default:
  FUNC_0(VAR_9, "unsupported offload: pedit on unsupported header");
  return -VAR_0;
 }
}
