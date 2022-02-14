
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct qlcnic_vport {int spoofchk; int mac; int min_tx_bw; int max_tx_bw; int vlan_mode; } ;
struct TYPE_6__ {int lock; int wait_list; } ;
struct TYPE_5__ {int lock; int wait_list; } ;
struct qlcnic_back_channel {struct workqueue_struct* bc_trans_wq; struct workqueue_struct* bc_async_wq; struct qlcnic_adapter* adapter; int queue_lock; int vf_async_work; int async_cmd_list; } ;
struct qlcnic_vf_info {int num_vfs; struct qlcnic_vf_info* vf_info; struct qlcnic_vport* vp; int trans_work; int ch_free_cmpl; TYPE_2__ rcv_pend; TYPE_1__ rcv_act; int vlan_list_lock; int send_cmd_lock; int pci_func; struct qlcnic_adapter* adapter; struct qlcnic_back_channel bc; } ;
struct qlcnic_sriov {int num_vfs; struct qlcnic_sriov* vf_info; struct qlcnic_vport* vp; int trans_work; int ch_free_cmpl; TYPE_2__ rcv_pend; TYPE_1__ rcv_act; int vlan_list_lock; int send_cmd_lock; int pci_func; struct qlcnic_adapter* adapter; struct qlcnic_back_channel bc; } ;
struct qlcnic_adapter {TYPE_4__* ahw; TYPE_3__* pdev; } ;
struct TYPE_8__ {struct qlcnic_vf_info* sriov; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct workqueue_struct* FUNC_2 (char*) ;
 int FUNC_3 (struct workqueue_struct*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 struct qlcnic_vf_info* FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct qlcnic_vf_info*) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;
 int VAR_7 ;
 int FUNC_14 (struct qlcnic_adapter*,int) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct qlcnic_adapter *VAR_8, int VAR_9)
{
 struct qlcnic_sriov *VAR_10;
 struct qlcnic_back_channel *VAR_11;
 struct workqueue_struct *VAR_12;
 struct qlcnic_vport *VAR_13;
 struct qlcnic_vf_info *VAR_14;
 int VAR_15, VAR_16;

 if (!FUNC_12(VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_10(sizeof(struct qlcnic_sriov), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_8->ahw->sriov = VAR_10;
 VAR_10->num_vfs = VAR_9;
 VAR_11 = &VAR_10->bc;
 VAR_10->vf_info = FUNC_8(VAR_9, sizeof(struct qlcnic_vf_info),
     VAR_2);
 if (!VAR_10->vf_info) {
  VAR_15 = -VAR_1;
  goto qlcnic_free_sriov;
 }

 VAR_12 = FUNC_2("bc-trans");
 if (VAR_12 == ((void*)0)) {
  VAR_15 = -VAR_1;
  FUNC_4(&VAR_8->pdev->dev,
   "Cannot create bc-trans workqueue\n");
  goto qlcnic_free_vf_info;
 }

 VAR_11->bc_trans_wq = VAR_12;

 VAR_12 = FUNC_2("async");
 if (VAR_12 == ((void*)0)) {
  VAR_15 = -VAR_1;
  FUNC_4(&VAR_8->pdev->dev, "Cannot create async workqueue\n");
  goto qlcnic_destroy_trans_wq;
 }

 VAR_11->bc_async_wq = VAR_12;
 FUNC_0(&VAR_11->async_cmd_list);
 FUNC_1(&VAR_11->vf_async_work, VAR_6);
 FUNC_15(&VAR_11->queue_lock);
 VAR_11->adapter = VAR_8;

 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  VAR_14 = &VAR_10->vf_info[VAR_16];
  VAR_14->adapter = VAR_8;
  VAR_14->pci_func = FUNC_14(VAR_8, VAR_16);
  FUNC_11(&VAR_14->send_cmd_lock);
  FUNC_15(&VAR_14->vlan_list_lock);
  FUNC_0(&VAR_14->rcv_act.wait_list);
  FUNC_0(&VAR_14->rcv_pend.wait_list);
  FUNC_15(&VAR_14->rcv_act.lock);
  FUNC_15(&VAR_14->rcv_pend.lock);
  FUNC_7(&VAR_14->ch_free_cmpl);

  FUNC_1(&VAR_14->trans_work, VAR_7);

  if (FUNC_13(VAR_8)) {
   VAR_13 = FUNC_10(sizeof(struct qlcnic_vport), VAR_2);
   if (!VAR_13) {
    VAR_15 = -VAR_1;
    goto qlcnic_destroy_async_wq;
   }
   VAR_10->vf_info[VAR_16].vp = VAR_13;
   VAR_13->vlan_mode = VAR_5;
   VAR_13->max_tx_bw = VAR_3;
   VAR_13->min_tx_bw = VAR_4;
   VAR_13->spoofchk = 0;
   FUNC_6(VAR_13->mac);
   FUNC_5(&VAR_8->pdev->dev,
     "MAC Address %pM is configured for VF %d\n",
     VAR_13->mac, VAR_16);
  }
 }

 return 0;

qlcnic_destroy_async_wq:
 FUNC_3(VAR_11->bc_async_wq);

qlcnic_destroy_trans_wq:
 FUNC_3(VAR_11->bc_trans_wq);

qlcnic_free_vf_info:
 FUNC_9(VAR_10->vf_info);

qlcnic_free_sriov:
 FUNC_9(VAR_8->ahw->sriov);
 return VAR_15;
}
