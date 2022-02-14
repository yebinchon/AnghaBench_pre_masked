
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tp_params {int vlan_shift; int port_shift; int protocol_shift; int tos_shift; int vnic_shift; int ingress_config; int macmatch_shift; int ethertype_shift; int matchtype_shift; int frag_shift; int fcoe_shift; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int ivlan; int encap_vld; int ovlan; int pfvf_vld; int pf; int vf; int ovlan_vld; scalar_t__ fcoe; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ tos; scalar_t__ proto; scalar_t__ iport; } ;
struct TYPE_5__ {scalar_t__ fcoe; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ pfvf_vld; scalar_t__ encap_vld; scalar_t__ tos; scalar_t__ iport; scalar_t__ ivlan; } ;
struct ch_filter_specification {TYPE_3__ val; TYPE_2__ mask; } ;
struct TYPE_4__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u64 FUNC_1(struct ch_filter_specification *VAR_4,
         struct net_device *VAR_5)
{
 struct adapter *VAR_6 = FUNC_0(VAR_5);
 struct tp_params *VAR_7 = &VAR_6->params.tp;
 u64 VAR_8 = 0;




 if (VAR_7->vlan_shift >= 0 && VAR_4->mask.ivlan)
  VAR_8 |= (VAR_0 | VAR_4->val.ivlan) << VAR_7->vlan_shift;

 if (VAR_7->port_shift >= 0 && VAR_4->mask.iport)
  VAR_8 |= (u64)VAR_4->val.iport << VAR_7->port_shift;

 if (VAR_7->protocol_shift >= 0) {
  if (!VAR_4->val.proto)
   VAR_8 |= (u64)VAR_1 << VAR_7->protocol_shift;
  else
   VAR_8 |= (u64)VAR_4->val.proto << VAR_7->protocol_shift;
 }

 if (VAR_7->tos_shift >= 0 && VAR_4->mask.tos)
  VAR_8 |= (u64)(VAR_4->val.tos) << VAR_7->tos_shift;

 if (VAR_7->vnic_shift >= 0) {
  if ((VAR_6->params.tp.ingress_config & VAR_2) &&
      VAR_4->mask.encap_vld)
   VAR_8 |= (u64)((VAR_4->val.encap_vld << 16) |
     (VAR_4->val.ovlan)) << VAR_7->vnic_shift;
  else if ((VAR_6->params.tp.ingress_config & VAR_3) &&
    VAR_4->mask.pfvf_vld)
   VAR_8 |= (u64)((VAR_4->val.pfvf_vld << 16) |
     (VAR_4->val.pf << 13) |
     (VAR_4->val.vf)) << VAR_7->vnic_shift;
  else
   VAR_8 |= (u64)((VAR_4->val.ovlan_vld << 16) |
     (VAR_4->val.ovlan)) << VAR_7->vnic_shift;
 }

 if (VAR_7->macmatch_shift >= 0 && VAR_4->mask.macidx)
  VAR_8 |= (u64)(VAR_4->val.macidx) << VAR_7->macmatch_shift;

 if (VAR_7->ethertype_shift >= 0 && VAR_4->mask.ethtype)
  VAR_8 |= (u64)(VAR_4->val.ethtype) << VAR_7->ethertype_shift;

 if (VAR_7->matchtype_shift >= 0 && VAR_4->mask.matchtype)
  VAR_8 |= (u64)(VAR_4->val.matchtype) << VAR_7->matchtype_shift;

 if (VAR_7->frag_shift >= 0 && VAR_4->mask.frag)
  VAR_8 |= (u64)(VAR_4->val.frag) << VAR_7->frag_shift;

 if (VAR_7->fcoe_shift >= 0 && VAR_4->mask.fcoe)
  VAR_8 |= (u64)(VAR_4->val.fcoe) << VAR_7->fcoe_shift;
 return VAR_8;
}
