
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fw_filter2_wr {int frag_to_ovlan_vldm; int natmode_to_ulp_type; void* newfport; void* newlport; int newfip; int newlip; void* fpm; void* fp; void* lpm; void* lp; int fipm; int fip; int lipm; int lip; void* ovlanm; void* ovlan; void* ivlanm; void* ivlan; int ttypm; int ttyp; int ptclm; int ptcl; void* maci_to_matchtypem; void* rx_chan_rx_rpl_iq; scalar_t__ smac_sel; void* ethtypem; void* ethtype; void* del_filter_to_l2tix; void* tid_to_iq; void* len16_pkd; void* op_pkd; } ;
struct TYPE_13__ {int ethtype; int iport; int ivlan; int ovlan; int lport; int fport; int fip; int lip; int tos; int proto; int matchtype; int fcoe; int macidx; int ovlan_vld; int ivlan_vld; int frag; } ;
struct TYPE_12__ {int ethtype; int ivlan; int ovlan; int lport; int fport; int fip; int lip; int tos; int proto; int matchtype; int iport; int fcoe; int macidx; int ovlan_vld; int ivlan_vld; int frag; } ;
struct TYPE_15__ {scalar_t__ newvlan; scalar_t__ action; int nat_lport; int nat_fport; TYPE_4__ val; int nat_fip; int nat_lip; scalar_t__ nat_mode; TYPE_3__ mask; int prio; int eport; int hitcnts; scalar_t__ newdmac; int dirsteerhash; int maskhash; int dirsteer; int rpttid; int iq; int type; int smac; scalar_t__ newsmac; int dmac; int vlan; } ;
struct filter_entry {int pending; TYPE_6__ fs; TYPE_8__* l2t; int tid; int smt; int dev; } ;
struct TYPE_16__ {scalar_t__ filter2_wr_support; } ;
struct TYPE_10__ {int abs_id; } ;
struct TYPE_11__ {TYPE_1__ fw_evtq; } ;
struct TYPE_14__ {struct filter_entry* ftid_tab; } ;
struct adapter {TYPE_7__ params; TYPE_2__ sge; TYPE_5__ tids; } ;
struct TYPE_17__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct fw_filter2_wr* FUNC_37 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_38 (int,int ) ;
 int FUNC_39 (TYPE_8__*) ;
 int FUNC_40 (int ,int ) ;
 void* FUNC_41 (int) ;
 void* FUNC_42 (int) ;
 int FUNC_43 (struct sk_buff*) ;
 int FUNC_44 (int ,int ,int) ;
 int FUNC_45 (struct sk_buff*,int ,int) ;
 TYPE_8__* FUNC_46 (struct adapter*,int ,int ,int ) ;
 int FUNC_47 (struct adapter*,struct sk_buff*) ;

int FUNC_48(struct adapter *VAR_12, int VAR_13)
{
 struct filter_entry *VAR_14 = &VAR_12->tids.ftid_tab[VAR_13];
 struct fw_filter2_wr *VAR_15;
 struct sk_buff *VAR_16;

 VAR_16 = FUNC_38(sizeof(*VAR_15), VAR_6);
 if (!VAR_16)
  return -VAR_1;





 if (VAR_14->fs.newdmac || VAR_14->fs.newvlan) {

  VAR_14->l2t = FUNC_46(VAR_12, VAR_14->fs.vlan,
      VAR_14->fs.eport, VAR_14->fs.dmac);
  if (!VAR_14->l2t) {
   FUNC_43(VAR_16);
   return -VAR_1;
  }
 }




 if (VAR_14->fs.newsmac) {
  VAR_14->smt = FUNC_40(VAR_14->dev, VAR_14->fs.smac);
  if (!VAR_14->smt) {
   if (VAR_14->l2t) {
    FUNC_39(VAR_14->l2t);
    VAR_14->l2t = ((void*)0);
   }
   FUNC_43(VAR_16);
   return -VAR_1;
  }
 }

 VAR_15 = FUNC_37(VAR_16, sizeof(*VAR_15));
 if (VAR_12->params.filter2_wr_support)
  VAR_15->op_pkd = FUNC_41(FUNC_36(VAR_4));
 else
  VAR_15->op_pkd = FUNC_41(FUNC_36(VAR_5));
 VAR_15->len16_pkd = FUNC_41(FUNC_35(sizeof(*VAR_15) / 16));
 VAR_15->tid_to_iq =
  FUNC_41(FUNC_33(VAR_14->tid) |
        FUNC_30(VAR_14->fs.type) |
        FUNC_22(0) |
        FUNC_12(VAR_14->fs.iq));
 VAR_15->del_filter_to_l2tix =
  FUNC_41(FUNC_29(VAR_14->fs.rpttid) |
        FUNC_5(VAR_14->fs.action == VAR_2) |
        FUNC_3(VAR_14->fs.dirsteer) |
        FUNC_19(VAR_14->fs.maskhash) |
        FUNC_2(VAR_14->fs.dirsteerhash) |
        FUNC_16(VAR_14->fs.action == VAR_3) |
        FUNC_4(VAR_14->fs.newdmac) |
        FUNC_11(VAR_14->fs.newvlan == VAR_9 ||
          VAR_14->fs.newvlan == VAR_11) |
        FUNC_28(VAR_14->fs.newvlan == VAR_10 ||
         VAR_14->fs.newvlan == VAR_11) |
        FUNC_10(VAR_14->fs.hitcnts) |
        FUNC_34(VAR_14->fs.eport) |
        FUNC_27(VAR_14->fs.prio) |
        FUNC_15(VAR_14->l2t ? VAR_14->l2t->idx : 0));
 VAR_15->ethtype = FUNC_42(VAR_14->fs.val.ethtype);
 VAR_15->ethtypem = FUNC_42(VAR_14->fs.mask.ethtype);
 VAR_15->frag_to_ovlan_vldm =
  (FUNC_9(VAR_14->fs.val.frag) |
   FUNC_8(VAR_14->fs.mask.frag) |
   FUNC_14(VAR_14->fs.val.ivlan_vld) |
   FUNC_24(VAR_14->fs.val.ovlan_vld) |
   FUNC_13(VAR_14->fs.mask.ivlan_vld) |
   FUNC_23(VAR_14->fs.mask.ovlan_vld));
 VAR_15->smac_sel = 0;
 VAR_15->rx_chan_rx_rpl_iq =
  FUNC_42(FUNC_31(0) |
        FUNC_32(VAR_12->sge.fw_evtq.abs_id));
 VAR_15->maci_to_matchtypem =
  FUNC_41(FUNC_18(VAR_14->fs.val.macidx) |
        FUNC_17(VAR_14->fs.mask.macidx) |
        FUNC_7(VAR_14->fs.val.fcoe) |
        FUNC_6(VAR_14->fs.mask.fcoe) |
        FUNC_26(VAR_14->fs.val.iport) |
        FUNC_25(VAR_14->fs.mask.iport) |
        FUNC_21(VAR_14->fs.val.matchtype) |
        FUNC_20(VAR_14->fs.mask.matchtype));
 VAR_15->ptcl = VAR_14->fs.val.proto;
 VAR_15->ptclm = VAR_14->fs.mask.proto;
 VAR_15->ttyp = VAR_14->fs.val.tos;
 VAR_15->ttypm = VAR_14->fs.mask.tos;
 VAR_15->ivlan = FUNC_42(VAR_14->fs.val.ivlan);
 VAR_15->ivlanm = FUNC_42(VAR_14->fs.mask.ivlan);
 VAR_15->ovlan = FUNC_42(VAR_14->fs.val.ovlan);
 VAR_15->ovlanm = FUNC_42(VAR_14->fs.mask.ovlan);
 FUNC_44(VAR_15->lip, VAR_14->fs.val.lip, sizeof(VAR_15->lip));
 FUNC_44(VAR_15->lipm, VAR_14->fs.mask.lip, sizeof(VAR_15->lipm));
 FUNC_44(VAR_15->fip, VAR_14->fs.val.fip, sizeof(VAR_15->fip));
 FUNC_44(VAR_15->fipm, VAR_14->fs.mask.fip, sizeof(VAR_15->fipm));
 VAR_15->lp = FUNC_42(VAR_14->fs.val.lport);
 VAR_15->lpm = FUNC_42(VAR_14->fs.mask.lport);
 VAR_15->fp = FUNC_42(VAR_14->fs.val.fport);
 VAR_15->fpm = FUNC_42(VAR_14->fs.mask.fport);

 if (VAR_12->params.filter2_wr_support) {
  VAR_15->natmode_to_ulp_type =
   FUNC_1(VAR_14->fs.nat_mode ?
       VAR_8 :
       VAR_7) |
   FUNC_0(VAR_14->fs.nat_mode);
  FUNC_44(VAR_15->newlip, VAR_14->fs.nat_lip, sizeof(VAR_15->newlip));
  FUNC_44(VAR_15->newfip, VAR_14->fs.nat_fip, sizeof(VAR_15->newfip));
  VAR_15->newlport = FUNC_42(VAR_14->fs.nat_lport);
  VAR_15->newfport = FUNC_42(VAR_14->fs.nat_fport);
 }




 VAR_14->pending = 1;
 FUNC_45(VAR_16, VAR_0, VAR_14->fs.val.iport & 0x3);
 FUNC_47(VAR_12, VAR_16);
 return 0;
}
