
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vfpf_vport_update_accept_param_tlv {int tx_accept_filter; int update_tx_mode; int rx_accept_filter; int update_rx_mode; } ;
struct qed_filter_accept_flags {int tx_accept_filter; int update_tx_mode_config; int rx_accept_filter; int update_rx_mode_config; } ;
struct qed_sp_vport_update_params {struct qed_filter_accept_flags accept_flags; } ;
struct qed_iov_vf_mbx {int req_virt; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct qed_hwfn *VAR_2,
         struct qed_sp_vport_update_params *VAR_3,
         struct qed_iov_vf_mbx *VAR_4, u16 *VAR_5)
{
 struct qed_filter_accept_flags *VAR_6 = &VAR_3->accept_flags;
 struct vfpf_vport_update_accept_param_tlv *VAR_7;
 u16 VAR_8 = VAR_0;

 VAR_7 = (struct vfpf_vport_update_accept_param_tlv *)
     FUNC_0(VAR_2, VAR_4->req_virt, VAR_8);
 if (!VAR_7)
  return;

 VAR_6->update_rx_mode_config = VAR_7->update_rx_mode;
 VAR_6->rx_accept_filter = VAR_7->rx_accept_filter;
 VAR_6->update_tx_mode_config = VAR_7->update_tx_mode;
 VAR_6->tx_accept_filter = VAR_7->tx_accept_filter;
 *VAR_5 |= 1 << VAR_1;
}
