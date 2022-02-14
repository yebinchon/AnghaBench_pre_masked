
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wq_name ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int dev; } ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct be_eq_obj* be_eq; } ;
struct TYPE_11__ {int dma; int va; int size; } ;
struct TYPE_15__ {int* mcc_tag; TYPE_2__ mbox_mem_alloced; scalar_t__ mcc_free_index; scalar_t__ mcc_alloc_index; TYPE_1__* ptag_state; int mcc_tag_available; scalar_t__* mcc_tag_status; int * mcc_wait; } ;
struct TYPE_12__ {int ios_per_ctrl; int cxns_per_ctrl; } ;
struct beiscsi_hba {int mac_addr_set; int num_cpus; TYPE_6__* shost; TYPE_4__* pcidev; TYPE_8__ ctrl; int wq; int hw_check; int recover_port; int sess_work; int eqd_update; int state; int boot_work; struct hwi_controller* phwi_ctrlr; TYPE_3__ params; int async_pdu_lock; int mgmt_sgl_lock; int io_sgl_lock; int generation; void* iotask_fn; } ;
struct be_eq_obj {int iopoll; int mcc_work; } ;
struct be_dma_mem {int dummy; } ;
struct TYPE_14__ {int host_no; int can_queue; int max_id; } ;
struct TYPE_13__ {int dev; scalar_t__ msix_enabled; } ;
struct TYPE_10__ {int tag_mem_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int VAR_13 ;
 int FUNC_2 (struct beiscsi_hba*,int ,char*,int ) ;
 int FUNC_3 (char*,int ,int,char*) ;
 int FUNC_4 (struct beiscsi_hba*) ;
 int FUNC_5 (struct beiscsi_hba*,struct pci_dev*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct beiscsi_hba*,unsigned int*) ;
 int VAR_16 ;
 int FUNC_7 (struct beiscsi_hba*) ;
 int FUNC_8 (struct pci_dev*) ;
 int VAR_17 ;
 int FUNC_9 (struct beiscsi_hba*) ;
 int FUNC_10 (struct beiscsi_hba*) ;
 int FUNC_11 (TYPE_8__*,struct beiscsi_hba*) ;
 int FUNC_12 (struct beiscsi_hba*) ;
 int FUNC_13 (struct beiscsi_hba*) ;
 int FUNC_14 (TYPE_8__*,struct beiscsi_hba*) ;
 struct beiscsi_hba* FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct beiscsi_hba*) ;
 int VAR_18 ;
 int FUNC_17 (struct beiscsi_hba*) ;
 int FUNC_18 (struct beiscsi_hba*) ;
 int FUNC_19 (struct beiscsi_hba*) ;
 int FUNC_20 (struct beiscsi_hba*) ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_21 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_22 (struct beiscsi_hba*) ;
 int FUNC_23 (struct beiscsi_hba*) ;
 int FUNC_24 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_25 (struct beiscsi_hba*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *,char*) ;
 int FUNC_28 (int *,char*) ;
 int FUNC_29 (int *,int ,int ,int ) ;
 int FUNC_30 (struct beiscsi_hba*) ;
 int FUNC_31 (struct beiscsi_hba*) ;
 int FUNC_32 (struct beiscsi_hba*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,int ,int ) ;
 int FUNC_36 (TYPE_6__*,int *) ;
 int FUNC_37 (TYPE_6__*) ;
 scalar_t__ VAR_24 ;
 int FUNC_38 (int *,int ,int) ;
 int FUNC_39 (int *,scalar_t__) ;
 scalar_t__ FUNC_40 (int ) ;
 int FUNC_41 (TYPE_4__*) ;
 int FUNC_42 (struct pci_dev*) ;
 int FUNC_43 (TYPE_4__*) ;
 int FUNC_44 (struct pci_dev*) ;
 int FUNC_45 (struct pci_dev*) ;
 int FUNC_46 (struct pci_dev*) ;
 int FUNC_47 (struct pci_dev*,int *) ;
 int FUNC_48 (int *,scalar_t__) ;
 int FUNC_49 (int ,int *) ;
 int FUNC_50 (char*,int,char*,int) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_53(struct pci_dev *VAR_25,
        const struct pci_device_id *VAR_26)
{
 struct hwi_context_memory *VAR_27;
 struct hwi_controller *VAR_28;
 struct beiscsi_hba *VAR_29 = ((void*)0);
 struct be_eq_obj *VAR_30;
 unsigned int VAR_31;
 char VAR_32[20];
 int VAR_33, VAR_34;

 VAR_33 = FUNC_8(VAR_25);
 if (VAR_33 < 0) {
  FUNC_27(&VAR_25->dev,
   "beiscsi_dev_probe - Failed to enable pci device\n");
  return VAR_33;
 }

 VAR_29 = FUNC_15(VAR_25);
 if (!VAR_29) {
  FUNC_27(&VAR_25->dev,
   "beiscsi_dev_probe - Failed in beiscsi_hba_alloc\n");
  VAR_33 = -VAR_8;
  goto disable_pci;
 }


 VAR_33 = FUNC_44(VAR_25);
 if (VAR_33)
  FUNC_21(VAR_29, VAR_11, VAR_3,
       "BM_%d : PCIe Error Reporting "
       "Enabling Failed\n");

 FUNC_46(VAR_25);


 FUNC_16(VAR_29);

 VAR_29->mac_addr_set = 0;

 switch (VAR_25->device) {
 case 133:
 case 131:
 case 130:
  VAR_29->generation = VAR_5;
  VAR_29->iotask_fn = VAR_19;
  FUNC_28(&VAR_25->dev,
    "Obsolete/Unsupported BE2 Adapter Family\n");
  break;
 case 132:
 case 129:
  VAR_29->generation = VAR_6;
  VAR_29->iotask_fn = VAR_19;
  break;
 case 128:
  VAR_29->generation = VAR_7;
  VAR_29->iotask_fn = VAR_20;
  break;
 default:
  VAR_29->generation = 0;
 }

 VAR_33 = FUNC_5(VAR_29, VAR_25);
 if (VAR_33) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : be_ctrl_init failed\n");
  goto free_hba;
 }

 VAR_33 = FUNC_20(VAR_29);
 if (VAR_33)
  goto free_hba;

 FUNC_51(&VAR_29->io_sgl_lock);
 FUNC_51(&VAR_29->mgmt_sgl_lock);
 FUNC_51(&VAR_29->async_pdu_lock);
 VAR_33 = FUNC_11(&VAR_29->ctrl, VAR_29);
 if (VAR_33 != 0) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : Error getting fw config\n");
  goto free_port;
 }
 FUNC_14(&VAR_29->ctrl, VAR_29);
 FUNC_13(VAR_29);
 FUNC_22(VAR_29);
 FUNC_23(VAR_29);

 FUNC_4(VAR_29);

 FUNC_21(VAR_29, VAR_10, VAR_3,
      "BM_%d : num_cpus = %d\n",
      VAR_29->num_cpus);

 VAR_29->shost->max_id = VAR_29->params.cxns_per_ctrl;
 VAR_29->shost->can_queue = VAR_29->params.ios_per_ctrl;
 VAR_33 = FUNC_12(VAR_29);
 if (VAR_33 < 0) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : alloc host mem failed\n");
  goto free_port;
 }

 VAR_33 = FUNC_19(VAR_29);
 if (VAR_33 < 0) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : init port failed\n");
  FUNC_10(VAR_29);
  goto free_port;
 }

 for (VAR_34 = 0; VAR_34 < VAR_12; VAR_34++) {
  FUNC_33(&VAR_29->ctrl.mcc_wait[VAR_34 + 1]);
  VAR_29->ctrl.mcc_tag[VAR_34] = VAR_34 + 1;
  VAR_29->ctrl.mcc_tag_status[VAR_34 + 1] = 0;
  VAR_29->ctrl.mcc_tag_available++;
  FUNC_38(&VAR_29->ctrl.ptag_state[VAR_34].tag_mem_state, 0,
         sizeof(struct be_dma_mem));
 }

 VAR_29->ctrl.mcc_alloc_index = VAR_29->ctrl.mcc_free_index = 0;

 FUNC_50(VAR_32, sizeof(VAR_32), "beiscsi_%02x_wq",
   VAR_29->shost->host_no);
 VAR_29->wq = FUNC_3("%s", VAR_13, 1, VAR_32);
 if (!VAR_29->wq) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : beiscsi_dev_probe-"
       "Failed to allocate work queue\n");
  VAR_33 = -VAR_8;
  goto free_twq;
 }

 FUNC_0(&VAR_29->eqd_update, VAR_17);

 VAR_28 = VAR_29->phwi_ctrlr;
 VAR_27 = VAR_28->phwi_ctxt;

 for (VAR_34 = 0; VAR_34 < VAR_29->num_cpus; VAR_34++) {
  VAR_30 = &VAR_27->be_eq[VAR_34];
  FUNC_35(&VAR_30->iopoll, VAR_15, VAR_14);
 }

 VAR_34 = (VAR_29->pcidev->msix_enabled) ? VAR_34 : 0;

 VAR_30 = &VAR_27->be_eq[VAR_34];
 FUNC_1(&VAR_30->mcc_work, VAR_21);

 VAR_33 = FUNC_18(VAR_29);
 if (VAR_33 < 0) {
  FUNC_21(VAR_29, VAR_9, VAR_3,
       "BM_%d : beiscsi_dev_probe-"
       "Failed to beiscsi_init_irqs\n");
  goto disable_iopoll;
 }
 FUNC_32(VAR_29);

 VAR_33 = FUNC_36(VAR_29->shost, &VAR_29->pcidev->dev);
 if (VAR_33)
  goto free_irqs;


 FUNC_49(VAR_2, &VAR_29->state);
 FUNC_2(VAR_29, VAR_10,
        "BM_%d : port online: 0x%lx\n", VAR_29->state);

 FUNC_1(&VAR_29->boot_work, VAR_16);
 VAR_33 = FUNC_6(VAR_29, &VAR_31);
 if (VAR_33 > 0) {
  FUNC_24(VAR_29, VAR_31);





  FUNC_49(VAR_1, &VAR_29->state);
 }

 FUNC_17(VAR_29);
 FUNC_48(&VAR_29->eqd_update,
         FUNC_40(VAR_0));

 FUNC_1(&VAR_29->sess_work, VAR_23);
 FUNC_0(&VAR_29->recover_port, VAR_22);




 FUNC_52(&VAR_29->hw_check, VAR_18, 0);
 FUNC_39(&VAR_29->hw_check,
    VAR_24 + FUNC_40(VAR_4));
 FUNC_21(VAR_29, VAR_10, VAR_3,
      "\n\n\n BM_%d : SUCCESS - DRIVER LOADED\n\n\n");
 return 0;

free_irqs:
 FUNC_31(VAR_29);
 FUNC_9(VAR_29);
disable_iopoll:
 for (VAR_34 = 0; VAR_34 < VAR_29->num_cpus; VAR_34++) {
  VAR_30 = &VAR_27->be_eq[VAR_34];
  FUNC_34(&VAR_30->iopoll);
 }
 FUNC_26(VAR_29->wq);
free_twq:
 FUNC_30(VAR_29);
 FUNC_7(VAR_29);
 FUNC_10(VAR_29);
free_port:
 FUNC_29(&VAR_29->pcidev->dev,
       VAR_29->ctrl.mbox_mem_alloced.size,
       VAR_29->ctrl.mbox_mem_alloced.va,
       VAR_29->ctrl.mbox_mem_alloced.dma);
 FUNC_25(VAR_29);
free_hba:
 FUNC_43(VAR_29->pcidev);
 FUNC_41(VAR_29->pcidev);
 FUNC_37(VAR_29->shost);
 FUNC_47(VAR_25, ((void*)0));
disable_pci:
 FUNC_45(VAR_25);
 FUNC_42(VAR_25);
 return VAR_33;
}
