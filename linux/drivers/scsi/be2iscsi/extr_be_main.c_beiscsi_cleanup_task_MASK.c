
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct iscsi_task {scalar_t__ sc; int * hdr; struct iscsi_conn* conn; struct beiscsi_io_task* dd_data; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_session {int bhs_pool; } ;
struct TYPE_4__ {int address; } ;
struct TYPE_5__ {TYPE_1__ a64; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct beiscsi_io_task {int * scsi_cmnd; scalar_t__ num_sg; int * psgl_handle; int * pwrb_handle; int * cmd_bhs; TYPE_3__ bhs_pa; } ;
struct beiscsi_hba {struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_conn {int login_in_progress; int beiscsi_conn_cid; struct beiscsi_session* beiscsi_sess; struct beiscsi_hba* phba; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct beiscsi_conn*,struct iscsi_task*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int *) ;
 int FUNC_4 (struct beiscsi_hba*,struct hwi_wrb_context*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iscsi_task *VAR_0)
{
 struct beiscsi_io_task *VAR_1 = VAR_0->dd_data;
 struct iscsi_conn *VAR_2 = VAR_0->conn;
 struct beiscsi_conn *VAR_3 = VAR_2->dd_data;
 struct beiscsi_hba *VAR_4 = VAR_3->phba;
 struct beiscsi_session *VAR_5 = VAR_3->beiscsi_sess;
 struct hwi_wrb_context *VAR_6;
 struct hwi_controller *VAR_7;
 uint16_t VAR_8 = FUNC_0(
        VAR_3->beiscsi_conn_cid);

 VAR_7 = VAR_4->phwi_ctrlr;
 VAR_6 = &VAR_7->wrb_context[VAR_8];

 if (VAR_1->cmd_bhs) {
  FUNC_2(VAR_5->bhs_pool, VAR_1->cmd_bhs,
         VAR_1->bhs_pa.u.a64.address);
  VAR_1->cmd_bhs = ((void*)0);
  VAR_0->hdr = ((void*)0);
 }

 if (VAR_0->sc) {
  if (VAR_1->pwrb_handle) {
   FUNC_4(VAR_4, VAR_6,
     VAR_1->pwrb_handle);
   VAR_1->pwrb_handle = ((void*)0);
  }

  if (VAR_1->psgl_handle) {
   FUNC_3(VAR_4, VAR_1->psgl_handle);
   VAR_1->psgl_handle = ((void*)0);
  }

  if (VAR_1->scsi_cmnd) {
   if (VAR_1->num_sg)
    FUNC_5(VAR_1->scsi_cmnd);
   VAR_1->scsi_cmnd = ((void*)0);
  }
 } else {
  if (!VAR_3->login_in_progress)
   FUNC_1(VAR_3, VAR_0);
 }
}
