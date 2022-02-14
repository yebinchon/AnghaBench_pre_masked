
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct iscsi_task {struct beiscsi_io_task* dd_data; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_io_task {scalar_t__ mtask_addr; int mtask_data_count; int * psgl_handle; int * pwrb_handle; } ;
struct beiscsi_hba {TYPE_1__* pcidev; struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_conn {int beiscsi_conn_cid; struct beiscsi_hba* phba; } ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (struct beiscsi_hba*,int *) ;
 int FUNC_3 (struct beiscsi_hba*,struct hwi_wrb_context*,int *) ;

void
FUNC_4(struct beiscsi_conn *VAR_1,
    struct iscsi_task *VAR_2)
{
 struct beiscsi_io_task *VAR_3;
 struct beiscsi_hba *VAR_4 = VAR_1->phba;
 struct hwi_wrb_context *VAR_5;
 struct hwi_controller *VAR_6;
 uint16_t VAR_7 = FUNC_0(
    VAR_1->beiscsi_conn_cid);

 VAR_6 = VAR_4->phwi_ctrlr;
 VAR_5 = &VAR_6->wrb_context[VAR_7];

 VAR_3 = VAR_2->dd_data;

 if (VAR_3->pwrb_handle) {
  FUNC_3(VAR_4, VAR_5, VAR_3->pwrb_handle);
  VAR_3->pwrb_handle = ((void*)0);
 }

 if (VAR_3->psgl_handle) {
  FUNC_2(VAR_4, VAR_3->psgl_handle);
  VAR_3->psgl_handle = ((void*)0);
 }

 if (VAR_3->mtask_addr) {
  FUNC_1(&VAR_4->pcidev->dev,
     VAR_3->mtask_addr,
     VAR_3->mtask_data_count,
     VAR_0);
  VAR_3->mtask_addr = 0;
 }
}
