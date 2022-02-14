
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct wrb_handle {struct iscsi_task* pio_handle; } ;
struct sol_cqe {int dummy; } ;
struct iscsi_task {TYPE_1__* hdr; scalar_t__ dd_data; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct hwi_wrb_context {struct wrb_handle** pwrb_handle_basestd; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct common_sol_cqe {size_t wrb_index; int cid; int member_0; } ;
struct beiscsi_io_task {int wrb_type; } ;
struct beiscsi_hba {struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_conn {struct iscsi_conn* conn; } ;
struct TYPE_2__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct beiscsi_hba*,struct sol_cqe*,struct common_sol_cqe*) ;
 int FUNC_2 (struct beiscsi_conn*,struct iscsi_task*,struct common_sol_cqe*) ;
 int FUNC_3 (struct beiscsi_conn*,struct iscsi_task*,struct common_sol_cqe*) ;
 int FUNC_4 (struct beiscsi_conn*,struct iscsi_task*,struct common_sol_cqe*) ;
 int FUNC_5 (struct beiscsi_conn*,struct iscsi_task*,struct common_sol_cqe*) ;
 int FUNC_6 (struct beiscsi_hba*,int ,int,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct beiscsi_conn *VAR_7,
        struct beiscsi_hba *VAR_8, struct sol_cqe *VAR_9)
{
 struct iscsi_conn *VAR_10 = VAR_7->conn;
 struct iscsi_session *VAR_11 = VAR_10->session;
 struct common_sol_cqe VAR_12 = {0};
 struct hwi_wrb_context *VAR_13;
 struct hwi_controller *VAR_14;
 struct wrb_handle *VAR_15;
 struct iscsi_task *VAR_16;
 uint16_t VAR_17 = 0;
 uint8_t VAR_18;

 VAR_14 = VAR_8->phwi_ctrlr;


 FUNC_1(VAR_8, VAR_9, &VAR_12);

 VAR_17 = FUNC_0(VAR_12.cid);
 VAR_13 = &VAR_14->wrb_context[VAR_17];

 VAR_15 = VAR_13->pwrb_handle_basestd[
        VAR_12.wrb_index];

 FUNC_7(&VAR_11->back_lock);
 VAR_16 = VAR_15->pio_handle;
 if (!VAR_16) {
  FUNC_8(&VAR_11->back_lock);
  return;
 }
 VAR_18 = ((struct beiscsi_io_task *)VAR_16->dd_data)->wrb_type;

 switch (VAR_18) {
 case 132:
 case 131:
  if ((VAR_16->hdr->opcode & VAR_2) ==
       VAR_4)
   FUNC_4(VAR_7, VAR_16, &VAR_12);
  else
   FUNC_2(VAR_7, VAR_16, &VAR_12);
  break;

 case 129:
  if ((VAR_16->hdr->opcode & VAR_2) == VAR_3)
   FUNC_3(VAR_7, VAR_16, &VAR_12);
  else
   FUNC_5(VAR_7, VAR_16, &VAR_12);
  break;

 case 130:
  FUNC_6(VAR_8, VAR_5,
       VAR_0 | VAR_1,
       "BM_%d :\t\t No HWH_TYPE_LOGIN Expected in"
       " hwi_complete_cmd- Solicited path\n");
  break;

 case 128:
  FUNC_4(VAR_7, VAR_16, &VAR_12);
  break;

 default:
  FUNC_6(VAR_8, VAR_6,
       VAR_0 | VAR_1,
       "BM_%d : In hwi_complete_cmd, unknown type = %d"
       "wrb_index 0x%x CID 0x%x\n", VAR_18,
       VAR_12.wrb_index,
       VAR_12.cid);
  break;
 }

 FUNC_8(&VAR_11->back_lock);
}
