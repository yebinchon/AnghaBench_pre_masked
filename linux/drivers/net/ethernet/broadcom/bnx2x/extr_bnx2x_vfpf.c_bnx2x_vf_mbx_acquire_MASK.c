
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int caps; int fp_hsi_ver; int vf_os; int vf_id; } ;
struct TYPE_8__ {int num_mc_filters; int num_vlan_filters; int num_mac_filters; int num_sbs; int num_txqs; int num_rxqs; } ;
struct vfpf_acquire_tlv {TYPE_3__ vfdev_info; int bulletin_addr; TYPE_4__ resc_request; } ;
struct bnx2x_virtf {int cfg_flags; int abs_vfid; int bulletin_map; int fp_hsi; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_5__ {struct vfpf_acquire_tlv acquire; } ;
struct TYPE_6__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,TYPE_4__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_mbx*,int) ;
 scalar_t__ FUNC_4 (struct bnx2x*,struct vfpf_acquire_tlv*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_9, struct bnx2x_virtf *VAR_10,
     struct bnx2x_vf_mbx *VAR_11)
{
 int VAR_12;
 struct vfpf_acquire_tlv *VAR_13 = &VAR_11->msg->req.acquire;


 FUNC_0(VAR_0,
    "VF[%d] ACQUIRE: vfdev_info- vf_id %d, vf_os %d resources- n_rxq-%d, n_txq-%d, n_sbs-%d, n_macs-%d, n_vlans-%d, n_mcs-%d\n",
    VAR_10->abs_vfid, VAR_13->vfdev_info.vf_id, VAR_13->vfdev_info.vf_os,
    VAR_13->resc_request.num_rxqs, VAR_13->resc_request.num_txqs,
    VAR_13->resc_request.num_sbs, VAR_13->resc_request.num_mac_filters,
    VAR_13->resc_request.num_vlan_filters,
    VAR_13->resc_request.num_mc_filters);





 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_0,
     "VF [%d] - Can't support acquire request due to doorbell mismatch. Please update VM driver\n",
     VAR_10->abs_vfid);
  goto out;
 }




 if (FUNC_4(VAR_9, &VAR_11->msg->req.acquire))
  VAR_10->fp_hsi = VAR_13->vfdev_info.fp_hsi_ver;
 else
  VAR_10->fp_hsi = FUNC_5(VAR_8, VAR_13->vfdev_info.fp_hsi_ver,
       VAR_3);
 if (VAR_10->fp_hsi > VAR_2) {
  FUNC_0(VAR_0,
     "VF [%d] - Can't support acquire request since VF requests a FW version which is too new [%02x > %02x]\n",
     VAR_10->abs_vfid, VAR_13->vfdev_info.fp_hsi_ver,
     VAR_2);
  VAR_12 = -VAR_1;
  goto out;
 }


 VAR_12 = FUNC_1(VAR_9, VAR_10, &VAR_13->resc_request);


 VAR_10->bulletin_map = VAR_13->bulletin_addr;
 if (VAR_13->vfdev_info.caps & VAR_4) {
  FUNC_0(VAR_0, "VF[%d] supports long bulletin boards\n",
     VAR_10->abs_vfid);
  VAR_10->cfg_flags |= VAR_6;
 } else {
  VAR_10->cfg_flags &= ~VAR_6;
 }

 if (VAR_13->vfdev_info.caps & VAR_5) {
  FUNC_0(VAR_0, "VF[%d] supports vlan filtering\n",
     VAR_10->abs_vfid);
  VAR_10->cfg_flags |= VAR_7;
 } else {
  VAR_10->cfg_flags &= ~VAR_7;
 }

out:

 FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);
}
