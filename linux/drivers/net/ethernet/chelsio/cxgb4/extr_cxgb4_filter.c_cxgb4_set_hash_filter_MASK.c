
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tid_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct port_info {int viid; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int ovlan; int pf; int vf; int ovlan_vld; int pfvf_vld; int iport; scalar_t__ encap_vld; int lip; int vni; } ;
struct TYPE_9__ {int ovlan; int pf; int vf; int ovlan_vld; int pfvf_vld; int vni; } ;
struct ch_filter_specification {int iq; TYPE_4__ val; scalar_t__ type; TYPE_3__ mask; int smac; scalar_t__ newsmac; int dmac; int eport; int vlan; scalar_t__ newvlan; scalar_t__ newdmac; } ;
struct filter_entry {int pending; int * l2t; int * smt; struct ch_filter_specification fs; struct net_device* dev; struct filter_ctx* ctx; } ;
struct filter_ctx {int dummy; } ;
struct cpl_t6_act_open_req {int dummy; } ;
struct TYPE_11__ {int abs_id; } ;
struct TYPE_12__ {TYPE_5__ fw_evtq; } ;
struct TYPE_7__ {int ingress_config; } ;
struct TYPE_8__ {TYPE_1__ tp; } ;
struct adapter {TYPE_6__ sge; TYPE_2__ params; struct tid_info tids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct tid_info*,struct filter_entry*) ;
 int FUNC_2 (struct net_device*,int const*,int) ;
 int FUNC_3 (struct net_device*,int const*,int) ;
 int FUNC_4 (struct tid_info*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ch_filter_specification*) ;
 int FUNC_9 (struct net_device*,struct ch_filter_specification*) ;
 int FUNC_10 (struct filter_entry*) ;
 struct filter_entry* FUNC_11 (int,int ) ;
 int FUNC_12 (struct filter_entry*,struct sk_buff*,int,struct adapter*) ;
 int FUNC_13 (struct filter_entry*,struct sk_buff*,int,struct adapter*) ;
 struct adapter* FUNC_14 (struct net_device*) ;
 struct port_info* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct sk_buff*,int ,int) ;
 int FUNC_17 (struct adapter*,int ,int *,int *,int ,int ,int ,int,int) ;
 int FUNC_18 (struct adapter*,int ,int,int) ;
 int * FUNC_19 (struct adapter*,int ,int ,int ) ;
 int FUNC_20 (struct adapter*,struct sk_buff*) ;
 int FUNC_21 (struct net_device*,struct ch_filter_specification*) ;

__attribute__((used)) static int FUNC_22(struct net_device *VAR_5,
     struct ch_filter_specification *VAR_6,
     struct filter_ctx *VAR_7)
{
 struct adapter *VAR_8 = FUNC_14(VAR_5);
 struct port_info *VAR_9 = FUNC_15(VAR_5);
 struct tid_info *VAR_10 = &VAR_8->tids;
 struct filter_entry *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;
 u32 VAR_17;

 FUNC_8(VAR_6);
 VAR_16 = FUNC_21(VAR_5, VAR_6);
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_9(VAR_5, VAR_6);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->fs = *VAR_6;
 VAR_11->ctx = VAR_7;
 VAR_11->dev = VAR_5;
 VAR_11->fs.iq = VAR_13;





 if (VAR_11->fs.newdmac || VAR_11->fs.newvlan) {

  VAR_11->l2t = FUNC_19(VAR_8, VAR_11->fs.vlan,
      VAR_11->fs.eport, VAR_11->fs.dmac);
  if (!VAR_11->l2t) {
   VAR_16 = -VAR_1;
   goto out_err;
  }
 }




 if (VAR_11->fs.newsmac) {
  VAR_11->smt = FUNC_6(VAR_11->dev, VAR_11->fs.smac);
  if (!VAR_11->smt) {
   if (VAR_11->l2t) {
    FUNC_5(VAR_11->l2t);
    VAR_11->l2t = ((void*)0);
   }
   VAR_16 = -VAR_1;
   goto free_l2t;
  }
 }

 VAR_14 = FUNC_1(VAR_10, VAR_11);
 if (VAR_14 < 0) {
  VAR_16 = VAR_14;
  goto free_smt;
 }

 VAR_17 = VAR_8->params.tp.ingress_config;
 if (VAR_17 & VAR_4) {
  VAR_11->fs.val.ovlan = (VAR_6->val.pf << 13) | VAR_6->val.vf;
  VAR_11->fs.mask.ovlan = (VAR_6->mask.pf << 13) | VAR_6->mask.vf;
  VAR_11->fs.val.ovlan_vld = VAR_6->val.pfvf_vld;
  VAR_11->fs.mask.ovlan_vld = VAR_6->mask.pfvf_vld;
 } else if (VAR_17 & VAR_3) {
  if (VAR_11->fs.val.encap_vld) {
   struct port_info *VAR_18 = FUNC_15(VAR_11->dev);
   u8 VAR_19[] = { 0, 0, 0, 0, 0, 0 };


   VAR_16 = FUNC_17(VAR_8, VAR_18->viid,
            VAR_19,
            VAR_19,
            VAR_11->fs.val.vni,
            VAR_11->fs.mask.vni,
            0, 1, 1);
   if (VAR_16 < 0)
    goto free_atid;

   VAR_11->fs.val.ovlan = VAR_16;
   VAR_11->fs.mask.ovlan = 0xffff;
   VAR_11->fs.val.ovlan_vld = 1;
   VAR_11->fs.mask.ovlan_vld = 1;
  }
 }

 VAR_15 = sizeof(struct cpl_t6_act_open_req);
 if (VAR_11->fs.type) {
  VAR_16 = FUNC_2(VAR_11->dev, (const u32 *)&VAR_11->fs.val.lip, 1);
  if (VAR_16)
   goto free_mps;

  VAR_12 = FUNC_0(VAR_15, VAR_2);
  if (!VAR_12) {
   VAR_16 = -VAR_1;
   goto free_clip;
  }

  FUNC_13(VAR_11, VAR_12,
     ((VAR_8->sge.fw_evtq.abs_id << 14) | VAR_14),
     VAR_8);
 } else {
  VAR_12 = FUNC_0(VAR_15, VAR_2);
  if (!VAR_12) {
   VAR_16 = -VAR_1;
   goto free_mps;
  }

  FUNC_12(VAR_11, VAR_12,
    ((VAR_8->sge.fw_evtq.abs_id << 14) | VAR_14),
    VAR_8);
 }

 VAR_11->pending = 1;
 FUNC_16(VAR_12, VAR_0, VAR_11->fs.val.iport & 0x3);
 FUNC_20(VAR_8, VAR_12);
 return 0;

free_clip:
 FUNC_3(VAR_11->dev, (const u32 *)&VAR_11->fs.val.lip, 1);

free_mps:
 if (VAR_11->fs.val.encap_vld && VAR_11->fs.val.ovlan_vld)
  FUNC_18(VAR_8, VAR_9->viid, VAR_11->fs.val.ovlan, 1);

free_atid:
 FUNC_4(VAR_10, VAR_14);

free_smt:
 if (VAR_11->smt) {
  FUNC_7(VAR_11->smt);
  VAR_11->smt = ((void*)0);
 }

free_l2t:
 if (VAR_11->l2t) {
  FUNC_5(VAR_11->l2t);
  VAR_11->l2t = ((void*)0);
 }

out_err:
 FUNC_10(VAR_11);
 return VAR_16;
}
