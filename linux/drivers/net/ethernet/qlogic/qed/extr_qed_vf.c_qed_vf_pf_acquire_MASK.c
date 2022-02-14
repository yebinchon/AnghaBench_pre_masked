
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u8 ;
struct TYPE_12__ {int capabilities; scalar_t__ eth_fp_hsi_minor; scalar_t__ eth_fp_hsi_major; int fw_engineering; int fw_revision; int fw_minor; int fw_major; int os_type; int opaque_fid; } ;
struct vf_pf_resc_request {int num_cids; int num_vlan_filters; int num_mac_filters; void* num_sbs; void* num_txqs; void* num_rxqs; } ;
struct vfpf_acquire_tlv {TYPE_5__ vfdev_info; int bulletin_size; int bulletin_addr; struct vf_pf_resc_request resc_request; } ;
struct TYPE_10__ {int size; int phys; } ;
struct qed_vf_iov {int b_pre_fp_hsi; TYPE_3__ bulletin; int acquire_resp; TYPE_7__* pf2vf_reply; int offset; scalar_t__ b_doorbell_bar; } ;
struct TYPE_9__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__* cdev; TYPE_2__ hw_info; struct qed_vf_iov* vf_iov_info; } ;
struct pf_vf_pfdev_info {int capabilities; scalar_t__ major_fp_hsi; scalar_t__ minor_fp_hsi; int chip_num; int chip_rev; int dev_type; } ;
struct TYPE_13__ {scalar_t__ num_txqs; scalar_t__ num_rxqs; scalar_t__ num_cids; } ;
struct TYPE_11__ {scalar_t__ status; } ;
struct pfvf_acquire_resp_tlv {struct pf_vf_pfdev_info pfdev_info; int bulletin_size; TYPE_6__ resc; TYPE_4__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_14__ {struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct TYPE_8__ {int chip_num; int num_hwfns; int chip_rev; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,char*,...) ;
 int FUNC_2 (struct qed_hwfn*,char*,...) ;
 int FUNC_3 (struct qed_hwfn*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct qed_hwfn*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (int *,struct pfvf_acquire_resp_tlv*,int) ;
 int FUNC_6 (TYPE_7__*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_8 (struct qed_hwfn*,scalar_t__*,int) ;
 int FUNC_9 (struct qed_hwfn*,struct vf_pf_resc_request*,TYPE_6__*) ;
 struct vfpf_acquire_tlv* FUNC_10 (struct qed_hwfn*,int ,int) ;
 int FUNC_11 (struct qed_hwfn*,int) ;

__attribute__((used)) static int FUNC_12(struct qed_hwfn *VAR_29)
{
 struct qed_vf_iov *VAR_30 = VAR_29->vf_iov_info;
 struct pfvf_acquire_resp_tlv *VAR_31 = &VAR_30->pf2vf_reply->acquire_resp;
 struct pf_vf_pfdev_info *VAR_32 = &VAR_31->pfdev_info;
 struct vf_pf_resc_request *VAR_33;
 u8 VAR_34 = VAR_28;
 bool VAR_35 = 0;
 struct vfpf_acquire_tlv *VAR_36;
 int VAR_37 = 0, VAR_38 = 0;


 VAR_36 = FUNC_10(VAR_29, VAR_0, sizeof(*VAR_36));
 VAR_33 = &VAR_36->resc_request;


 VAR_36->vfdev_info.opaque_fid = VAR_29->hw_info.opaque_fid;

 VAR_33->num_rxqs = VAR_21;
 VAR_33->num_txqs = VAR_21;
 VAR_33->num_sbs = VAR_21;
 VAR_33->num_mac_filters = VAR_19;
 VAR_33->num_vlan_filters = VAR_20;
 VAR_33->num_cids = VAR_17;

 VAR_36->vfdev_info.os_type = VAR_27;
 VAR_36->vfdev_info.fw_major = VAR_8;
 VAR_36->vfdev_info.fw_minor = VAR_9;
 VAR_36->vfdev_info.fw_revision = VAR_10;
 VAR_36->vfdev_info.fw_engineering = VAR_7;
 VAR_36->vfdev_info.eth_fp_hsi_major = VAR_5;
 VAR_36->vfdev_info.eth_fp_hsi_minor = VAR_6;


 VAR_36->vfdev_info.capabilities |= VAR_23;


 if (VAR_30->b_doorbell_bar) {
  VAR_36->vfdev_info.capabilities |= VAR_24 |
      VAR_26;
  VAR_33->num_cids = VAR_18;
 }


 VAR_36->bulletin_addr = VAR_30->bulletin.phys;
 VAR_36->bulletin_size = VAR_30->bulletin.size;


 FUNC_7(VAR_29, &VAR_30->offset,
      VAR_1, sizeof(struct channel_list_end_tlv));

 while (!VAR_35) {
  FUNC_3(VAR_29,
      VAR_22, "attempting to acquire resources\n");


  FUNC_6(VAR_30->pf2vf_reply, 0, sizeof(union pfvf_tlvs));


  VAR_37 = FUNC_8(VAR_29, &VAR_31->hdr.status, sizeof(*VAR_31));


  if (VAR_34 && VAR_37 == -VAR_3) {
   FUNC_3(VAR_29, VAR_22,
       "VF retrying to acquire due to VPC timeout\n");
   VAR_34--;
   continue;
  }

  if (VAR_37)
   goto exit;


  FUNC_5(&VAR_30->acquire_resp, VAR_31, sizeof(VAR_30->acquire_resp));

  VAR_38++;

  if (VAR_31->hdr.status == VAR_16) {

   if (!(VAR_31->pfdev_info.capabilities &
         VAR_12)) {




    VAR_36->vfdev_info.capabilities |=
        VAR_25;
   }
   FUNC_3(VAR_29, VAR_22, "resources acquired\n");
   VAR_35 = 1;
  } else if (VAR_31->hdr.status == VAR_15 &&
      VAR_38 < VAR_28) {
   FUNC_9(VAR_29, VAR_33,
            &VAR_31->resc);
  } else if (VAR_31->hdr.status == VAR_14) {
   if (VAR_32->major_fp_hsi &&
       (VAR_32->major_fp_hsi != VAR_5)) {
    FUNC_2(VAR_29,
       "PF uses an incompatible fastpath HSI %02x.%02x [VF requires %02x.%02x]. Please change to a VF driver using %02x.xx.\n",
       VAR_32->major_fp_hsi,
       VAR_32->minor_fp_hsi,
       VAR_5,
       VAR_6,
       VAR_32->major_fp_hsi);
    VAR_37 = -VAR_4;
    goto exit;
   }

   if (!VAR_32->major_fp_hsi) {
    if (VAR_36->vfdev_info.capabilities &
        VAR_25) {
     FUNC_2(VAR_29,
        "PF uses very old drivers. Please change to a VF driver using no later than 8.8.x.x.\n");
     VAR_37 = -VAR_4;
     goto exit;
    } else {
     FUNC_1(VAR_29,
      "PF is old - try re-acquire to see if it supports FW-version override\n");
     VAR_36->vfdev_info.capabilities |=
         VAR_25;
     continue;
    }
   }




   FUNC_2(VAR_29, "PF rejected acquisition by VF\n");
   VAR_37 = -VAR_4;
   goto exit;
  } else {
   FUNC_0(VAR_29,
          "PF returned error %d to VF acquisition request\n",
          VAR_31->hdr.status);
   VAR_37 = -VAR_2;
   goto exit;
  }
 }


 if (VAR_36->vfdev_info.capabilities & VAR_25)
  VAR_30->b_pre_fp_hsi = 1;





 if (!(VAR_31->pfdev_info.capabilities & VAR_13))
  VAR_31->resc.num_cids = VAR_31->resc.num_rxqs + VAR_31->resc.num_txqs;


 VAR_30->bulletin.size = VAR_31->bulletin_size;


 VAR_29->cdev->type = VAR_31->pfdev_info.dev_type;
 VAR_29->cdev->chip_rev = VAR_31->pfdev_info.chip_rev;

 VAR_29->cdev->chip_num = VAR_32->chip_num & 0xffff;


 if (FUNC_4(VAR_29)) {
  if (VAR_31->pfdev_info.capabilities & VAR_11) {
   FUNC_2(VAR_29, "100g VF\n");
   VAR_29->cdev->num_hwfns = 2;
  }
 }

 if (!VAR_30->b_pre_fp_hsi &&
     (VAR_31->pfdev_info.minor_fp_hsi < VAR_6)) {
  FUNC_1(VAR_29,
   "PF is using older fastpath HSI; %02x.%02x is configured\n",
   VAR_5, VAR_31->pfdev_info.minor_fp_hsi);
 }

exit:
 FUNC_11(VAR_29, VAR_37);

 return VAR_37;
}
