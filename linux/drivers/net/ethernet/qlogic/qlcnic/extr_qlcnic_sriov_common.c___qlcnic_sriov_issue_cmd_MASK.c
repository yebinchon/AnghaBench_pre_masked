
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
typedef int u16 ;
struct qlcnic_mailbox {int status; } ;
struct qlcnic_hardware_context {int reset_context; int pci_func; TYPE_3__* sriov; struct qlcnic_mailbox* mailbox; } ;
struct TYPE_12__ {int* arg; } ;
struct TYPE_11__ {int* arg; } ;
struct qlcnic_cmd_args {scalar_t__ type; TYPE_6__ req; TYPE_5__ rsp; } ;
struct qlcnic_bc_trans {TYPE_4__* req_hdr; } ;
struct qlcnic_adapter {int need_fw_reset; struct qlcnic_hardware_context* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_10__ {scalar_t__ cmd_op; } ;
struct TYPE_8__ {int trans_counter; } ;
struct TYPE_9__ {TYPE_2__ bc; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,char*,int,int,...) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_cmd_args*) ;
 int FUNC_7 (struct qlcnic_bc_trans**) ;
 int FUNC_8 (struct qlcnic_bc_trans*) ;
 int FUNC_9 (struct qlcnic_bc_trans*,struct qlcnic_cmd_args*,int ,int ) ;
 int FUNC_10 (struct qlcnic_adapter*,struct qlcnic_bc_trans*) ;
 int FUNC_11 (struct qlcnic_adapter*,struct qlcnic_bc_trans*,int ) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct qlcnic_adapter *VAR_10,
      struct qlcnic_cmd_args *VAR_11)
{
 struct qlcnic_hardware_context *VAR_12 = VAR_10->ahw;
 struct qlcnic_mailbox *VAR_13 = VAR_12->mailbox;
 struct device *VAR_14 = &VAR_10->pdev->dev;
 struct qlcnic_bc_trans *VAR_15;
 int VAR_16;
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 u16 VAR_21 = ++VAR_10->ahw->sriov->bc.trans_counter;
 u8 VAR_22 = VAR_12->pci_func;

 VAR_20 = FUNC_7(&VAR_15);
 if (VAR_20)
  goto free_cmd;

 VAR_20 = FUNC_9(VAR_15, VAR_11, VAR_21, VAR_9);
 if (VAR_20)
  goto cleanup_transaction;

retry:
 if (!FUNC_12(VAR_8, &VAR_13->status)) {
  VAR_20 = -VAR_1;
  FUNC_0(VAR_10, VAR_0, "MBX not Ready!(cmd 0x%x) for VF 0x%x\n",
        FUNC_1(VAR_11->req.arg[0]), VAR_22);
  goto err_out;
 }

 VAR_16 = FUNC_11(VAR_10, VAR_15, VAR_22);
 if (VAR_16) {
  FUNC_4(VAR_14, "MBX command 0x%x timed out for VF %d\n",
   (VAR_11->req.arg[0] & 0xffff), VAR_22);
  VAR_20 = VAR_6;




  if ((VAR_15->req_hdr->cmd_op == VAR_2) &&
      !FUNC_10(VAR_10, VAR_15))
   goto retry;

  goto err_out;
 }

 VAR_17 = VAR_11->rsp.arg[0];
 VAR_19 = FUNC_2(VAR_17);
 VAR_18 = FUNC_1(VAR_11->req.arg[0]);

 if ((VAR_19 == VAR_4) ||
     (VAR_19 == VAR_3)) {
  VAR_20 = VAR_5;
 } else {
  if (VAR_11->type == VAR_7) {
   VAR_20 = VAR_5;
  } else {
   VAR_20 = VAR_19;
   if (!VAR_20)
    VAR_20 = 1;

   FUNC_4(VAR_14,
    "MBX command 0x%x failed with err:0x%x for VF %d\n",
    VAR_18, VAR_19, VAR_22);
  }
 }

err_out:
 if (VAR_20 == VAR_6) {
  VAR_12->reset_context = 1;
  VAR_10->need_fw_reset = 1;
  FUNC_3(VAR_8, &VAR_13->status);
 }

cleanup_transaction:
 FUNC_8(VAR_15);

free_cmd:
 if (VAR_11->type == VAR_7) {
  FUNC_6(VAR_11);
  FUNC_5(VAR_11);
 }

 return VAR_20;
}
