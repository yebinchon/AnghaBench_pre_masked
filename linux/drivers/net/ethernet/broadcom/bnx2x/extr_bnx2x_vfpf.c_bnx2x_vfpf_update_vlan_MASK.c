
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_23__ {int length; } ;
struct TYPE_14__ {TYPE_9__ tl; } ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; TYPE_11__ first_tlv; TYPE_8__* filters; int vf_qid; int flags; } ;
struct TYPE_13__ {scalar_t__ status; } ;
struct pfvf_general_resp_tlv {TYPE_10__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_20__ {int valid_bitmap; } ;
struct TYPE_21__ {TYPE_6__ content; } ;
struct TYPE_18__ {int pf_cap; } ;
struct TYPE_19__ {TYPE_4__ pfdev_info; } ;
struct bnx2x {int vf2pf_mbox_mapping; TYPE_7__ shadow_bulletin; TYPE_5__ acquire_resp; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_22__ {int vlan_tag; int flags; } ;
struct TYPE_16__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_15__ {struct vfpf_set_q_filters_tlv set_q_filters; } ;
struct TYPE_17__ {TYPE_2__ resp; TYPE_1__ req; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_set_q_filters_tlv*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_set_q_filters_tlv*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,scalar_t__*,int ) ;
 int FUNC_6 (struct bnx2x*,TYPE_11__*) ;
 int FUNC_7 (struct bnx2x*,TYPE_11__*,int ,int) ;

int FUNC_8(struct bnx2x *VAR_10, u16 VAR_11, u8 VAR_12, bool VAR_13)
{
 struct vfpf_set_q_filters_tlv *VAR_14 = &VAR_10->vf2pf_mbox->req.set_q_filters;
 struct pfvf_general_resp_tlv *VAR_15 = &VAR_10->vf2pf_mbox->resp.general_resp;
 int VAR_16 = 0;

 if (!(VAR_10->acquire_resp.pfdev_info.pf_cap & VAR_4)) {
  FUNC_1(VAR_0, "HV does not support vlan filtering\n");
  return 0;
 }


 FUNC_7(VAR_10, &VAR_14->first_tlv, VAR_2,
   sizeof(*VAR_14));

 VAR_14->flags = VAR_8;
 VAR_14->vf_qid = VAR_12;
 VAR_14->n_mac_vlan_filters = 1;

 VAR_14->filters[0].flags = VAR_7;

 if (VAR_13)
  VAR_14->filters[0].flags |= VAR_6;


 FUNC_4(VAR_10);

 if (VAR_10->shadow_bulletin.content.valid_bitmap & 1 << VAR_9) {
  FUNC_0("Hypervisor will decline the request, avoiding\n");
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_14->filters[0].vlan_tag = VAR_11;


 FUNC_2(VAR_10, VAR_14, VAR_14->first_tlv.tl.length, VAR_1,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_10, VAR_14);


 VAR_16 = FUNC_5(VAR_10, &VAR_15->hdr.status, VAR_10->vf2pf_mbox_mapping);
 if (VAR_16) {
  FUNC_0("failed to send message to pf. rc was %d\n", VAR_16);
  goto out;
 }

 if (VAR_15->hdr.status != VAR_5) {
  FUNC_0("vfpf %s VLAN %d failed\n", VAR_13 ? "add" : "del",
     VAR_11);
  VAR_16 = -VAR_3;
 }
out:
 FUNC_6(VAR_10, &VAR_14->first_tlv);

 return VAR_16;
}
