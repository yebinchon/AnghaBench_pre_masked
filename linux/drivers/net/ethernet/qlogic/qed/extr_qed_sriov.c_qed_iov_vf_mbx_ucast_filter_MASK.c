
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vfpf_ucast_filter_tlv {int vlan; int mac; scalar_t__ type; scalar_t__ opcode; } ;
struct qed_iov_vf_mbx {TYPE_2__* req_virt; } ;
struct TYPE_3__ {struct qed_bulletin_content* p_virt; } ;
struct qed_vf_info {int opaque_fid; int relative_vf_id; int abs_vf_id; int vport_instance; int vport_id; struct qed_iov_vf_mbx vf_mbx; TYPE_1__ bulletin; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {int opcode; int type; int is_rx_filter; int is_tx_filter; int * mac; int vlan; int vport_to_add_to; int vport_to_remove_from; } ;
struct qed_bulletin_content {int valid_bitmap; int mac; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
typedef enum qed_filter_ucast_type { ____Placeholder_qed_filter_ucast_type } qed_filter_ucast_type ;
typedef enum qed_filter_opcode { ____Placeholder_qed_filter_opcode } qed_filter_opcode ;
struct TYPE_4__ {struct vfpf_ucast_filter_tlv ucast_filter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct qed_filter_ucast*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,int ,struct qed_filter_ucast*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct qed_hwfn*,struct qed_vf_info*,struct qed_filter_ucast*) ;
 int FUNC_8 (struct qed_hwfn*,int ,struct qed_filter_ucast*,int ,int *) ;

__attribute__((used)) static void FUNC_9(struct qed_hwfn *VAR_14,
     struct qed_ptt *VAR_15,
     struct qed_vf_info *VAR_16)
{
 struct qed_bulletin_content *VAR_17 = VAR_16->bulletin.p_virt;
 struct qed_iov_vf_mbx *VAR_18 = &VAR_16->vf_mbx;
 struct vfpf_ucast_filter_tlv *VAR_19;
 u8 VAR_20 = VAR_5;
 struct qed_filter_ucast VAR_21;
 int VAR_22;


 FUNC_4(&VAR_21, 0, sizeof(struct qed_filter_ucast));
 VAR_19 = &VAR_18->req_virt->ucast_filter;
 VAR_21.opcode = (enum qed_filter_opcode)VAR_19->opcode;
 VAR_21.type = (enum qed_filter_ucast_type)VAR_19->type;

 VAR_21.is_rx_filter = 1;
 VAR_21.is_tx_filter = 1;
 VAR_21.vport_to_remove_from = VAR_16->vport_id;
 VAR_21.vport_to_add_to = VAR_16->vport_id;
 FUNC_3(VAR_21.mac, VAR_19->mac, VAR_1);
 VAR_21.vlan = VAR_19->vlan;

 FUNC_1(VAR_14,
     VAR_11,
     "VF[%d]: opcode 0x%02x type 0x%02x [%s %s] [vport 0x%02x] MAC %02x:%02x:%02x:%02x:%02x:%02x, vlan 0x%04x\n",
     VAR_16->abs_vf_id, VAR_21.opcode, VAR_21.type,
     VAR_21.is_rx_filter ? "RX" : "",
     VAR_21.is_tx_filter ? "TX" : "",
     VAR_21.vport_to_add_to,
     VAR_21.mac[0], VAR_21.mac[1],
     VAR_21.mac[2], VAR_21.mac[3],
     VAR_21.mac[4], VAR_21.mac[5], VAR_21.vlan);

 if (!VAR_16->vport_instance) {
  FUNC_1(VAR_14,
      VAR_11,
      "No VPORT instance available for VF[%d], failing ucast MAC configuration\n",
      VAR_16->abs_vf_id);
  VAR_20 = VAR_3;
  goto out;
 }


 if (FUNC_7(VAR_14, VAR_16, &VAR_21)) {
  VAR_20 = VAR_3;
  goto out;
 }


 if ((VAR_17->valid_bitmap & FUNC_0(VAR_13)) &&
     (VAR_21.type == VAR_10 ||
      VAR_21.type == VAR_8)) {



  if (VAR_21.opcode == VAR_6 ||
      VAR_21.opcode == VAR_9)
   VAR_20 = VAR_4;
  goto out;
 }

 if ((VAR_17->valid_bitmap & FUNC_0(VAR_2)) &&
     (VAR_21.type == VAR_7 ||
      VAR_21.type == VAR_8)) {
  if (!FUNC_2(VAR_17->mac, VAR_21.mac) ||
      (VAR_21.opcode != VAR_6 &&
       VAR_21.opcode != VAR_9))
   VAR_20 = VAR_4;
  goto out;
 }

 VAR_22 = FUNC_5(VAR_14, VAR_16->relative_vf_id, &VAR_21);
 if (VAR_22) {
  VAR_20 = VAR_3;
  goto out;
 }

 VAR_22 = FUNC_8(VAR_14, VAR_16->opaque_fid, &VAR_21,
         VAR_12, ((void*)0));
 if (VAR_22)
  VAR_20 = VAR_3;

out:
 FUNC_6(VAR_14, VAR_15, VAR_16, VAR_0,
        sizeof(struct pfvf_def_resp_tlv), VAR_20);
}
