
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef void* u8 ;
typedef int u32 ;
struct vfpf_port_phys_id_resp_tlv {struct pfvf_acquire_resp_tlv* id; } ;
struct vfpf_fp_hsi_resp_tlv {int is_supported; } ;
struct TYPE_33__ {scalar_t__ length; } ;
struct TYPE_24__ {TYPE_9__ tl; } ;
struct TYPE_21__ {void* num_mc_filters; void* num_vlan_filters; void* num_mac_filters; void* num_sbs; void* num_rxqs; void* num_txqs; } ;
struct TYPE_32__ {int caps; scalar_t__ fp_hsi_ver; scalar_t__ vf_os; int vf_id; } ;
struct vfpf_acquire_tlv {TYPE_16__ first_tlv; TYPE_13__ resc_request; TYPE_8__ vfdev_info; int bulletin_addr; } ;
struct TYPE_18__ {int status; } ;
struct pfvf_acquire_resp_tlv {TYPE_10__ hdr; } ;
struct channel_tlv {int dummy; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_20__ {struct pfvf_acquire_resp_tlv* current_mac_addr; void* num_vlan_filters; TYPE_3__* hw_sbs; void* num_sbs; void* num_mc_filters; void* num_mac_filters; void* num_rxqs; void* num_txqs; } ;
struct TYPE_28__ {int chip_num; int fw_ver; int db_size; } ;
struct TYPE_19__ {scalar_t__ status; } ;
struct TYPE_23__ {TYPE_12__ resc; TYPE_4__ pfdev_info; TYPE_11__ hdr; } ;
struct TYPE_26__ {int chip_id; scalar_t__ flash_size; int chip_port_mode; int int_block; } ;
struct TYPE_25__ {int chip_id; } ;
struct bnx2x {int flags; int igu_dsb_id; TYPE_15__ acquire_resp; TYPE_5__* dev; int fw_ver; void* vlan_credit; int igu_base_sb; void* igu_sb_cnt; TYPE_2__ common; scalar_t__ mf_mode; scalar_t__ mf_ov; int db_size; TYPE_1__ link_params; TYPE_15__* phys_port_id; TYPE_7__* vf2pf_mbox; int vf2pf_mbox_mapping; int pf2vf_bulletin_mapping; } ;
struct TYPE_22__ {struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct TYPE_30__ {struct vfpf_acquire_tlv acquire; } ;
struct TYPE_31__ {TYPE_14__ resp; TYPE_6__ req; } ;
struct TYPE_29__ {TYPE_15__* dev_addr; } ;
struct TYPE_27__ {int hw_sb_id; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct bnx2x*,struct vfpf_acquire_tlv*,scalar_t__,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct vfpf_acquire_tlv*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int *) ;
 struct vfpf_fp_hsi_resp_tlv* FUNC_5 (struct bnx2x*,struct pfvf_acquire_resp_tlv*,int ) ;
 int FUNC_6 (struct bnx2x*,int *,int ) ;
 int FUNC_7 (struct bnx2x*,TYPE_16__*) ;
 int FUNC_8 (struct bnx2x*,TYPE_16__*,int ,int) ;
 int FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (struct pfvf_acquire_resp_tlv*) ;
 int FUNC_11 (TYPE_15__*,struct pfvf_acquire_resp_tlv*,int) ;
 int FUNC_12 (TYPE_14__*,int ,int) ;
 void* FUNC_13 (void*,void*) ;
 int FUNC_14 (int ,int ,int) ;

int FUNC_15(struct bnx2x *VAR_25, u8 VAR_26, u8 VAR_27)
{
 int VAR_28 = 0, VAR_29 = 0;
 struct vfpf_acquire_tlv *VAR_30 = &VAR_25->vf2pf_mbox->req.acquire;
 struct pfvf_acquire_resp_tlv *VAR_31 = &VAR_25->vf2pf_mbox->resp.acquire_resp;
 struct vfpf_port_phys_id_resp_tlv *VAR_32;
 struct vfpf_fp_hsi_resp_tlv *VAR_33;
 u32 VAR_34;
 bool VAR_35 = 0;


 FUNC_8(VAR_25, &VAR_30->first_tlv, VAR_1, sizeof(*VAR_30));

 if (FUNC_4(VAR_25, &VAR_34)) {
  VAR_28 = -VAR_6;
  goto out;
 }

 VAR_30->vfdev_info.vf_id = VAR_34;
 VAR_30->vfdev_info.vf_os = 0;
 VAR_30->vfdev_info.fp_hsi_ver = VAR_9;

 VAR_30->resc_request.num_rxqs = VAR_27;
 VAR_30->resc_request.num_txqs = VAR_26;
 VAR_30->resc_request.num_sbs = VAR_25->igu_sb_cnt;
 VAR_30->resc_request.num_mac_filters = VAR_19;
 VAR_30->resc_request.num_mc_filters = VAR_20;
 VAR_30->resc_request.num_vlan_filters = VAR_22;


 VAR_30->bulletin_addr = VAR_25->pf2vf_bulletin_mapping;


 FUNC_2(VAR_25, VAR_30, VAR_30->first_tlv.tl.length,
        VAR_4, sizeof(struct channel_tlv));


 VAR_30->vfdev_info.caps |= VAR_23;

 VAR_30->vfdev_info.caps |= VAR_24;


 FUNC_2(VAR_25, VAR_30,
        VAR_30->first_tlv.tl.length + sizeof(struct channel_tlv),
        VAR_3,
        sizeof(struct channel_list_end_tlv));


 FUNC_3(VAR_25, VAR_30);

 while (!VAR_35) {
  FUNC_1(VAR_0, "attempting to acquire resources\n");


  VAR_28 = FUNC_6(VAR_25,
           &VAR_31->hdr.status,
           VAR_25->vf2pf_mbox_mapping);


  if (VAR_28)
   goto out;


  FUNC_11(&VAR_25->acquire_resp, VAR_31, sizeof(VAR_25->acquire_resp));

  VAR_29++;




  if (VAR_25->acquire_resp.hdr.status == VAR_18) {
   FUNC_1(VAR_0, "resources acquired\n");
   VAR_35 = 1;
  } else if (VAR_25->acquire_resp.hdr.status ==
      VAR_17 &&
      VAR_29 < VAR_21) {
   FUNC_1(VAR_0,
      "PF unwilling to fulfill resource request. Try PF recommended amount\n");


   VAR_30->resc_request.num_txqs =
    FUNC_13(VAR_30->resc_request.num_txqs,
        VAR_25->acquire_resp.resc.num_txqs);
   VAR_30->resc_request.num_rxqs =
    FUNC_13(VAR_30->resc_request.num_rxqs,
        VAR_25->acquire_resp.resc.num_rxqs);
   VAR_30->resc_request.num_sbs =
    FUNC_13(VAR_30->resc_request.num_sbs,
        VAR_25->acquire_resp.resc.num_sbs);
   VAR_30->resc_request.num_mac_filters =
    FUNC_13(VAR_30->resc_request.num_mac_filters,
        VAR_25->acquire_resp.resc.num_mac_filters);
   VAR_30->resc_request.num_vlan_filters =
    FUNC_13(VAR_30->resc_request.num_vlan_filters,
        VAR_25->acquire_resp.resc.num_vlan_filters);
   VAR_30->resc_request.num_mc_filters =
    FUNC_13(VAR_30->resc_request.num_mc_filters,
        VAR_25->acquire_resp.resc.num_mc_filters);


   FUNC_12(&VAR_25->vf2pf_mbox->resp, 0,
          sizeof(union pfvf_tlvs));
  } else {

   VAR_33 = FUNC_5(VAR_25, VAR_31,
           VAR_2);
   if (VAR_33 && !VAR_33->is_supported)
    FUNC_0("Old hypervisor - doesn't support current fastpath HSI version; Need to downgrade VF driver [or upgrade hypervisor]\n");
   else
    FUNC_0("Failed to get the requested amount of resources: %d. Breaking...\n",
       VAR_25->acquire_resp.hdr.status);
   VAR_28 = -VAR_6;
   goto out;
  }
 }


 VAR_32 = (struct vfpf_port_phys_id_resp_tlv *)
    FUNC_5(VAR_25, VAR_31,
            VAR_4);
 if (VAR_32) {
  FUNC_11(VAR_25->phys_port_id, VAR_32->id, VAR_8);
  VAR_25->flags |= VAR_11;
 }





 VAR_33 = FUNC_5(VAR_25, VAR_31,
         VAR_2);
 if (!VAR_33 && (VAR_9 > VAR_10)) {
  FUNC_0("Old hypervisor - need to downgrade VF's driver\n");




  FUNC_7(VAR_25, &VAR_30->first_tlv);
  FUNC_9(VAR_25);

  VAR_28 = -VAR_7;
  goto out;
 }


 VAR_25->common.chip_id |= (VAR_25->acquire_resp.pfdev_info.chip_num & 0xffff);
 VAR_25->link_params.chip_id = VAR_25->common.chip_id;
 VAR_25->db_size = VAR_25->acquire_resp.pfdev_info.db_size;
 VAR_25->common.int_block = VAR_12;
 VAR_25->common.chip_port_mode = VAR_5;
 VAR_25->igu_dsb_id = -1;
 VAR_25->mf_ov = 0;
 VAR_25->mf_mode = 0;
 VAR_25->common.flash_size = 0;
 VAR_25->flags |=
  VAR_16 | VAR_15 | VAR_14 | VAR_13;
 VAR_25->igu_sb_cnt = VAR_25->acquire_resp.resc.num_sbs;
 VAR_25->igu_base_sb = VAR_25->acquire_resp.resc.hw_sbs[0].hw_sb_id;
 VAR_25->vlan_credit = VAR_25->acquire_resp.resc.num_vlan_filters;

 FUNC_14(VAR_25->fw_ver, VAR_25->acquire_resp.pfdev_info.fw_ver,
  sizeof(VAR_25->fw_ver));

 if (FUNC_10(VAR_25->acquire_resp.resc.current_mac_addr))
  FUNC_11(VAR_25->dev->dev_addr,
         VAR_25->acquire_resp.resc.current_mac_addr,
         VAR_8);

out:
 FUNC_7(VAR_25, &VAR_30->first_tlv);
 return VAR_28;
}
