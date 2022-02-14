
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {unsigned int miimon; unsigned int updelay; unsigned int downdelay; unsigned int peer_notif_delay; scalar_t__ use_carrier; unsigned int arp_interval; unsigned int arp_validate; unsigned int arp_all_targets; scalar_t__ primary_reselect; scalar_t__ fail_over_mac; scalar_t__ xmit_policy; unsigned int resend_igmp; scalar_t__ num_peer_notif; scalar_t__ all_slaves_active; unsigned int min_links; unsigned int lp_interval; unsigned int packets_per_slave; scalar_t__ lacp_fast; scalar_t__ ad_select; scalar_t__ tlb_dynamic_lb; int ad_actor_system; int ad_user_port_key; int ad_actor_sys_prio; scalar_t__* arp_targets; } ;
struct bonding {TYPE_2__ params; int primary_slave; } ;
struct ad_info {int partner_system; int partner_key; int actor_key; int ports; int aggregator_id; } ;
struct TYPE_3__ {unsigned int ifindex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (struct bonding*,struct ad_info*) ;
 int FUNC_2 (struct bonding*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct bonding* FUNC_4 (struct net_device const*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,scalar_t__) ;
 struct slave* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_38,
     const struct net_device *VAR_39)
{
 struct bonding *VAR_40 = FUNC_4(VAR_39);
 unsigned int VAR_41;
 int VAR_42, VAR_43, VAR_44;
 struct nlattr *VAR_45;
 struct slave *VAR_46;

 if (FUNC_12(VAR_38, VAR_27, FUNC_0(VAR_40)))
  goto nla_put_failure;

 VAR_42 = FUNC_2(VAR_40);
 if (VAR_42 && FUNC_11(VAR_38, VAR_5, VAR_42))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_25, VAR_40->params.miimon))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_35,
   VAR_40->params.updelay * VAR_40->params.miimon))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_22,
   VAR_40->params.downdelay * VAR_40->params.miimon))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_30,
   VAR_40->params.peer_notif_delay * VAR_40->params.miimon))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_36, VAR_40->params.use_carrier))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_19, VAR_40->params.arp_interval))
  goto nla_put_failure;

 VAR_45 = FUNC_7(VAR_38, VAR_20);
 if (!VAR_45)
  goto nla_put_failure;

 VAR_44 = 0;
 for (VAR_43 = 0; VAR_43 < VAR_0; VAR_43++) {
  if (VAR_40->params.arp_targets[VAR_43]) {
   if (FUNC_9(VAR_38, VAR_43, VAR_40->params.arp_targets[VAR_43]))
    goto nla_put_failure;
   VAR_44 = 1;
  }
 }

 if (VAR_44)
  FUNC_6(VAR_38, VAR_45);
 else
  FUNC_5(VAR_38, VAR_45);

 if (FUNC_11(VAR_38, VAR_21, VAR_40->params.arp_validate))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_18,
   VAR_40->params.arp_all_targets))
  goto nla_put_failure;

 VAR_46 = FUNC_13(VAR_40->primary_slave);
 if (VAR_46 &&
     FUNC_11(VAR_38, VAR_31, VAR_46->dev->ifindex))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_32,
         VAR_40->params.primary_reselect))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_23,
         VAR_40->params.fail_over_mac))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_37,
         VAR_40->params.xmit_policy))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_33,
          VAR_40->params.resend_igmp))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_28,
         VAR_40->params.num_peer_notif))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_17,
         VAR_40->params.all_slaves_active))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_26,
   VAR_40->params.min_links))
  goto nla_put_failure;

 if (FUNC_11(VAR_38, VAR_24,
   VAR_40->params.lp_interval))
  goto nla_put_failure;

 VAR_41 = VAR_40->params.packets_per_slave;
 if (FUNC_11(VAR_38, VAR_29,
   VAR_41))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_14,
         VAR_40->params.lacp_fast))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_15,
         VAR_40->params.ad_select))
  goto nla_put_failure;

 if (FUNC_12(VAR_38, VAR_34,
         VAR_40->params.tlb_dynamic_lb))
  goto nla_put_failure;

 if (FUNC_0(VAR_40) == VAR_1) {
  struct ad_info VAR_47;

  if (FUNC_3(VAR_2)) {
   if (FUNC_10(VAR_38, VAR_7,
     VAR_40->params.ad_actor_sys_prio))
    goto nla_put_failure;

   if (FUNC_10(VAR_38, VAR_16,
     VAR_40->params.ad_user_port_key))
    goto nla_put_failure;

   if (FUNC_8(VAR_38, VAR_6,
        VAR_4, &VAR_40->params.ad_actor_system))
    goto nla_put_failure;
  }
  if (!FUNC_1(VAR_40, &VAR_47)) {
   struct nlattr *VAR_48;

   VAR_48 = FUNC_7(VAR_38, VAR_8);
   if (!VAR_48)
    goto nla_put_failure;

   if (FUNC_10(VAR_38, VAR_10,
     VAR_47.aggregator_id))
    goto nla_put_failure;
   if (FUNC_10(VAR_38, VAR_11,
     VAR_47.ports))
    goto nla_put_failure;
   if (FUNC_10(VAR_38, VAR_9,
     VAR_47.actor_key))
    goto nla_put_failure;
   if (FUNC_10(VAR_38, VAR_12,
     VAR_47.partner_key))
    goto nla_put_failure;
   if (FUNC_8(VAR_38, VAR_13,
        sizeof(VAR_47.partner_system),
        &VAR_47.partner_system))
    goto nla_put_failure;

   FUNC_6(VAR_38, VAR_48);
  }
 }

 return 0;

nla_put_failure:
 return -VAR_3;
}
