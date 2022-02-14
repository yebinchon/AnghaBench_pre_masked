
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {TYPE_4__* be_eq; struct be_queue_info* be_cq; struct be_queue_info* be_def_dataq; struct be_queue_info* be_def_hdrq; struct be_queue_info* be_wrbq; } ;
struct be_ctrl_info {int dummy; } ;
struct TYPE_6__ {int ulp_supported; } ;
struct TYPE_5__ {int cxns_per_ctrl; } ;
struct beiscsi_hba {int num_cpus; struct be_ctrl_info ctrl; TYPE_3__* pcidev; TYPE_2__ fw_config; TYPE_1__ params; struct hwi_controller* phwi_ctrlr; } ;
struct be_queue_info {scalar_t__ created; } ;
struct TYPE_8__ {struct be_queue_info q; } ;
struct TYPE_7__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct be_ctrl_info*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_queue_info*) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*,int) ;
 int FUNC_5 (struct be_ctrl_info*,struct be_queue_info*,int ) ;
 int FUNC_6 (struct be_ctrl_info*,int ) ;
 int FUNC_7 (struct beiscsi_hba*) ;
 int FUNC_8 (struct beiscsi_hba*) ;
 int FUNC_9 (struct be_queue_info*) ;
 scalar_t__ FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct beiscsi_hba *VAR_6)
{
 struct be_queue_info *VAR_7;
 struct be_ctrl_info *VAR_8 = &VAR_6->ctrl;
 struct hwi_controller *VAR_9;
 struct hwi_context_memory *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
  if (FUNC_10(VAR_13, &VAR_6->fw_config.ulp_supported))
   FUNC_4(VAR_6, VAR_13);






 FUNC_8(VAR_6);

 VAR_9 = VAR_6->phwi_ctrlr;
 VAR_10 = VAR_9->phwi_ctxt;

 FUNC_0(VAR_8);

 for (VAR_11 = 0; VAR_11 < VAR_6->params.cxns_per_ctrl; VAR_11++) {
  VAR_7 = &VAR_10->be_wrbq[VAR_11];
  if (VAR_7->created)
   FUNC_5(VAR_8, VAR_7, VAR_5);
 }
 FUNC_9(VAR_10->be_wrbq);
 FUNC_7(VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (FUNC_10(VAR_13, &VAR_6->fw_config.ulp_supported)) {

   VAR_7 = &VAR_10->be_def_hdrq[VAR_13];
   if (VAR_7->created)
    FUNC_5(VAR_8, VAR_7, VAR_2);

   VAR_7 = &VAR_10->be_def_dataq[VAR_13];
   if (VAR_7->created)
    FUNC_5(VAR_8, VAR_7, VAR_2);
  }
 }

 FUNC_5(VAR_8, ((void*)0), VAR_4);

 for (VAR_11 = 0; VAR_11 < (VAR_6->num_cpus); VAR_11++) {
  VAR_7 = &VAR_10->be_cq[VAR_11];
  if (VAR_7->created) {
   FUNC_2(VAR_6, VAR_7);
   FUNC_5(VAR_8, VAR_7, VAR_1);
  }
 }

 FUNC_1(VAR_6);
 if (VAR_6->pcidev->msix_enabled)
  VAR_12 = 1;
 else
  VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < (VAR_6->num_cpus + VAR_12); VAR_11++) {
  VAR_7 = &VAR_10->be_eq[VAR_11].q;
  if (VAR_7->created) {
   FUNC_2(VAR_6, VAR_7);
   FUNC_5(VAR_8, VAR_7, VAR_3);
  }
 }

 FUNC_3(VAR_6);

 FUNC_6(&VAR_6->ctrl, 0);
}
