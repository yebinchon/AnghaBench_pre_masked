
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hwi_context_memory {TYPE_2__* be_eq; } ;
struct be_queue_info {int dummy; } ;
struct TYPE_6__ {struct be_queue_info q; struct be_queue_info cq; } ;
struct be_ctrl_info {TYPE_3__ mcc_obj; } ;
struct beiscsi_hba {size_t num_cpus; struct be_ctrl_info ctrl; TYPE_1__* pcidev; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_mcc_compl {int dummy; } ;
struct TYPE_5__ {int q; } ;
struct TYPE_4__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct beiscsi_hba*,struct be_queue_info*,int ,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_queue_info*) ;
 scalar_t__ FUNC_2 (struct be_ctrl_info*,struct be_queue_info*,int *,int,int,int ) ;
 scalar_t__ FUNC_3 (struct beiscsi_hba*,struct be_queue_info*,struct be_queue_info*) ;
 int FUNC_4 (struct be_ctrl_info*,struct be_queue_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct beiscsi_hba *VAR_4,
    struct hwi_context_memory *VAR_5)
{
 struct be_queue_info *VAR_6, *VAR_7;
 struct be_ctrl_info *VAR_8 = &VAR_4->ctrl;


 VAR_7 = &VAR_4->ctrl.mcc_obj.cq;
 if (FUNC_0(VAR_4, VAR_7, VAR_1,
   sizeof(struct be_mcc_compl)))
  goto err;

 if (VAR_4->pcidev->msix_enabled) {
  if (FUNC_2(VAR_8, VAR_7,
     &VAR_5->be_eq[VAR_4->num_cpus].q,
     0, 1, 0))
   goto mcc_cq_free;
 } else {
  if (FUNC_2(VAR_8, VAR_7, &VAR_5->be_eq[0].q,
       0, 1, 0))
   goto mcc_cq_free;
 }


 VAR_6 = &VAR_4->ctrl.mcc_obj.q;
 if (FUNC_0(VAR_4, VAR_6, VAR_2, sizeof(struct be_mcc_wrb)))
  goto mcc_cq_destroy;


 if (FUNC_3(VAR_4, VAR_6, VAR_7))
  goto mcc_q_free;

 return 0;

mcc_q_free:
 FUNC_1(VAR_4, VAR_6);
mcc_cq_destroy:
 FUNC_4(VAR_8, VAR_7, VAR_3);
mcc_cq_free:
 FUNC_1(VAR_4, VAR_7);
err:
 return -VAR_0;
}
