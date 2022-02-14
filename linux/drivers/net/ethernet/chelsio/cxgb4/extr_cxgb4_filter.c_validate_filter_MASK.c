
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ fcoe; scalar_t__ iport; scalar_t__ tos; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ matchtype; scalar_t__ frag; scalar_t__ proto; scalar_t__ pfvf_vld; scalar_t__ ovlan_vld; scalar_t__ encap_vld; scalar_t__ ivlan_vld; int pf; int vf; } ;
struct TYPE_6__ {int pf; int vf; int ovlan_vld; int pfvf_vld; int encap_vld; int ivlan_vld; int proto; int frag; int matchtype; int macidx; int ethtype; int tos; int iport; int fcoe; } ;
struct ch_filter_specification {scalar_t__ action; scalar_t__ eport; scalar_t__ newvlan; TYPE_3__ val; TYPE_2__ mask; scalar_t__ hash; } ;
struct TYPE_5__ {int ingress_config; int filter_mask; int vlan_pri_map; } ;
struct TYPE_8__ {scalar_t__ nports; int chip; TYPE_1__ tp; } ;
struct adapter {TYPE_4__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_17,
      struct ch_filter_specification *VAR_18)
{
 struct adapter *VAR_19 = FUNC_3(VAR_17);
 u32 VAR_20, VAR_21;


 VAR_21 = VAR_19->params.tp.ingress_config;
 VAR_20 = VAR_18->hash ? VAR_19->params.tp.filter_mask :
      VAR_19->params.tp.vlan_pri_map;

 if (FUNC_4(VAR_20, VAR_4, VAR_18->val.fcoe, VAR_18->mask.fcoe) ||
     FUNC_4(VAR_20, VAR_9, VAR_18->val.iport, VAR_18->mask.iport) ||
     FUNC_4(VAR_20, VAR_11, VAR_18->val.tos, VAR_18->mask.tos) ||
     FUNC_4(VAR_20, VAR_3, VAR_18->val.ethtype,
   VAR_18->mask.ethtype) ||
     FUNC_4(VAR_20, VAR_7, VAR_18->val.macidx, VAR_18->mask.macidx) ||
     FUNC_4(VAR_20, VAR_8, VAR_18->val.matchtype,
   VAR_18->mask.matchtype) ||
     FUNC_4(VAR_20, VAR_6, VAR_18->val.frag, VAR_18->mask.frag) ||
     FUNC_4(VAR_20, VAR_10, VAR_18->val.proto, VAR_18->mask.proto) ||
     FUNC_4(VAR_20, VAR_16, VAR_18->val.pfvf_vld,
   VAR_18->mask.pfvf_vld) ||
     FUNC_4(VAR_20, VAR_16, VAR_18->val.ovlan_vld,
   VAR_18->mask.ovlan_vld) ||
     FUNC_4(VAR_20, VAR_16, VAR_18->val.encap_vld,
   VAR_18->mask.encap_vld) ||
     FUNC_4(VAR_20, VAR_12, VAR_18->val.ivlan_vld, VAR_18->mask.ivlan_vld))
  return -VAR_1;
 if ((FUNC_1(VAR_18->val.pfvf_vld, VAR_18->mask.pfvf_vld) &&
      FUNC_1(VAR_18->val.ovlan_vld, VAR_18->mask.ovlan_vld)) ||
     (FUNC_1(VAR_18->val.pfvf_vld, VAR_18->mask.pfvf_vld) &&
      FUNC_1(VAR_18->val.encap_vld, VAR_18->mask.encap_vld)) ||
     (FUNC_1(VAR_18->val.ovlan_vld, VAR_18->mask.ovlan_vld) &&
      FUNC_1(VAR_18->val.encap_vld, VAR_18->mask.encap_vld)))
  return -VAR_1;
 if (FUNC_4(VAR_21, VAR_15, VAR_18->val.pfvf_vld, VAR_18->mask.pfvf_vld) ||
     (FUNC_1(VAR_18->val.ovlan_vld, VAR_18->mask.ovlan_vld) &&
      (VAR_21 & VAR_15)))
  return -VAR_1;
 if (VAR_18->val.pf > 0x7 || VAR_18->val.vf > 0x7f)
  return -VAR_2;
 VAR_18->mask.pf &= 0x7;
 VAR_18->mask.vf &= 0x7f;





 if (VAR_18->action == VAR_5 &&
     VAR_18->eport >= VAR_19->params.nports)
  return -VAR_2;


 if (VAR_18->val.iport >= VAR_19->params.nports)
  return -VAR_2;


 if (FUNC_2(VAR_19->params.chip) &&
     VAR_18->action == VAR_5 &&
     (VAR_18->newvlan == VAR_13 ||
      VAR_18->newvlan == VAR_14))
  return -VAR_1;

 if (VAR_18->val.encap_vld &&
     FUNC_0(VAR_19->params.chip) < VAR_0)
  return -VAR_1;
 return 0;
}
