
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int lock; int count; int wait_list; } ;
struct qlcnic_vf_info {TYPE_2__ rcv_pend; int pci_func; struct qlcnic_adapter* adapter; int state; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_cmd_args {scalar_t__ op_type; } ;
struct qlcnic_bc_trans {int curr_req_frag; int req_pay; int list; TYPE_1__* req_hdr; int trans_id; struct qlcnic_vf_info* vf; int func_id; int req_pay_size; } ;
struct qlcnic_bc_hdr {scalar_t__ op_type; scalar_t__ cmd_op; int frag_num; int seq_id; } ;
struct qlcnic_adapter {scalar_t__ need_fw_reset; } ;
struct TYPE_3__ {scalar_t__ num_frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct qlcnic_cmd_args*,int ,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_4 (struct qlcnic_sriov*,struct qlcnic_vf_info*,struct qlcnic_bc_trans*) ;
 int FUNC_5 (struct qlcnic_cmd_args*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct qlcnic_bc_trans**) ;
 int FUNC_7 (struct qlcnic_bc_trans*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct qlcnic_sriov*,struct qlcnic_vf_info*,struct qlcnic_bc_hdr*) ;
 scalar_t__ FUNC_10 (struct qlcnic_bc_trans*,struct qlcnic_cmd_args*,int ,int ) ;
 int FUNC_11 (struct qlcnic_adapter*,int *,int *,int ) ;
 scalar_t__ FUNC_12 (struct qlcnic_adapter*,struct qlcnic_bc_trans*,struct qlcnic_vf_info*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct qlcnic_sriov *VAR_4,
           struct qlcnic_bc_hdr *VAR_5,
           struct qlcnic_vf_info *VAR_6)
{
 struct qlcnic_bc_trans *VAR_7;
 struct qlcnic_adapter *VAR_8 = VAR_6->adapter;
 struct qlcnic_cmd_args VAR_9;
 u32 VAR_10;
 int VAR_11;
 u8 VAR_12;

 if (VAR_8->need_fw_reset)
  return;

 if (!FUNC_15(VAR_3, &VAR_6->state) &&
     VAR_5->op_type != VAR_1 &&
     VAR_5->cmd_op != VAR_0)
  return;

 if (VAR_5->frag_num > 1) {
  FUNC_9(VAR_4, VAR_6, VAR_5);
  return;
 }

 FUNC_1(&VAR_9, 0, sizeof(struct qlcnic_cmd_args));
 VAR_12 = VAR_5->cmd_op;
 if (FUNC_6(&VAR_7))
  return;

 if (VAR_5->op_type == VAR_1)
  VAR_11 = FUNC_5(&VAR_9, VAR_12);
 else
  VAR_11 = FUNC_2(&VAR_9, VAR_8, VAR_12);

 if (VAR_11) {
  FUNC_7(VAR_7);
  return;
 }

 VAR_9.op_type = VAR_5->op_type;
 if (FUNC_10(VAR_7, &VAR_9, VAR_5->seq_id,
     VAR_2)) {
  FUNC_3(&VAR_9);
  FUNC_7(VAR_7);
  return;
 }

 VAR_10 = FUNC_8(VAR_7->req_pay_size,
      VAR_7->curr_req_frag);
 FUNC_11(VAR_6->adapter,
     (u32 *)(VAR_7->req_hdr + VAR_7->curr_req_frag),
     (u32 *)(VAR_7->req_pay + VAR_7->curr_req_frag),
     VAR_10);
 VAR_7->func_id = VAR_6->pci_func;
 VAR_7->vf = VAR_6;
 VAR_7->trans_id = VAR_5->seq_id;
 VAR_7->curr_req_frag++;

 if (FUNC_12(VAR_8, VAR_7, VAR_6))
  return;

 if (VAR_7->curr_req_frag == VAR_7->req_hdr->num_frags) {
  if (FUNC_4(VAR_4, VAR_6, VAR_7)) {
   FUNC_3(&VAR_9);
   FUNC_7(VAR_7);
  }
 } else {
  FUNC_13(&VAR_6->rcv_pend.lock);
  FUNC_0(&VAR_7->list, &VAR_6->rcv_pend.wait_list);
  VAR_6->rcv_pend.count++;
  FUNC_14(&VAR_6->rcv_pend.lock);
 }
}
