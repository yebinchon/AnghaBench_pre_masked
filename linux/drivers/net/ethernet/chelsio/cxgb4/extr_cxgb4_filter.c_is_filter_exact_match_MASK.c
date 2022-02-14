
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tp_params {int hash_filter_mask; int fcoe_shift; int port_shift; int vnic_shift; int ingress_config; int vlan_shift; int tos_shift; int protocol_shift; int ethertype_shift; int macmatch_shift; int matchtype_shift; int frag_shift; } ;
struct TYPE_6__ {int lport; int fport; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ macidx; scalar_t__ ethtype; scalar_t__ proto; scalar_t__ tos; scalar_t__ ivlan; scalar_t__ ovlan_vld; scalar_t__ pfvf_vld; scalar_t__ iport; scalar_t__ fcoe; int lip; int fip; scalar_t__ encap_vld; } ;
struct TYPE_4__ {int fport; int lport; int lip; int fip; } ;
struct ch_filter_specification {TYPE_3__ mask; TYPE_1__ val; scalar_t__ type; } ;
struct TYPE_5__ {struct tp_params tp; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

bool FUNC_3(struct adapter *VAR_3,
      struct ch_filter_specification *VAR_4)
{
 struct tp_params *VAR_5 = &VAR_3->params.tp;
 u64 VAR_6 = VAR_5->hash_filter_mask;
 u64 VAR_7 = 0;

 if (!FUNC_1(VAR_3))
  return 0;


 if (VAR_4->mask.encap_vld)
  return 0;

 if (VAR_4->type) {
  if (FUNC_2(VAR_4->val.fip, VAR_1) ||
      !FUNC_0(VAR_4->mask.fip, VAR_1))
   return 0;

  if (FUNC_2(VAR_4->val.lip, VAR_1) ||
      !FUNC_0(VAR_4->mask.lip, VAR_1))
   return 0;
 } else {
  if (FUNC_2(VAR_4->val.fip, VAR_0) ||
      !FUNC_0(VAR_4->mask.fip, VAR_0))
   return 0;

  if (FUNC_2(VAR_4->val.lip, VAR_0) ||
      !FUNC_0(VAR_4->mask.lip, VAR_0))
   return 0;
 }

 if (!VAR_4->val.lport || VAR_4->mask.lport != 0xffff)
  return 0;

 if (!VAR_4->val.fport || VAR_4->mask.fport != 0xffff)
  return 0;


 if (VAR_5->fcoe_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.fcoe << VAR_5->fcoe_shift;

 if (VAR_5->port_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.iport << VAR_5->port_shift;

 if (VAR_5->vnic_shift >= 0) {
  if ((VAR_3->params.tp.ingress_config & VAR_2))
   VAR_7 |= (u64)VAR_4->mask.pfvf_vld << VAR_5->vnic_shift;
  else
   VAR_7 |= (u64)VAR_4->mask.ovlan_vld <<
    VAR_5->vnic_shift;
 }

 if (VAR_5->vlan_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.ivlan << VAR_5->vlan_shift;

 if (VAR_5->tos_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.tos << VAR_5->tos_shift;

 if (VAR_5->protocol_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.proto << VAR_5->protocol_shift;

 if (VAR_5->ethertype_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.ethtype << VAR_5->ethertype_shift;

 if (VAR_5->macmatch_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.macidx << VAR_5->macmatch_shift;

 if (VAR_5->matchtype_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.matchtype << VAR_5->matchtype_shift;

 if (VAR_5->frag_shift >= 0)
  VAR_7 |= (u64)VAR_4->mask.frag << VAR_5->frag_shift;

 if (VAR_7 != VAR_6)
  return 0;

 return 1;
}
