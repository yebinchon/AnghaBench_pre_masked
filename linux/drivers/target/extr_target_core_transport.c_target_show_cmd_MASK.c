
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct se_tmr_req {int ref_task_tag; int function; } ;
struct se_cmd {int se_cmd_flags; int cmd_kref; int t_state; TYPE_1__* se_tfo; int tag; int data_length; int data_direction; struct se_tmr_req* se_tmr_req; int * t_task_cdb; int transport_state; } ;
struct TYPE_2__ {int (* get_cmd_state ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int ,int ,int ,int ,int ,int ,char*,...) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;

void FUNC_9(const char *VAR_1, struct se_cmd *VAR_2)
{
 char *VAR_3 = FUNC_8(VAR_2->transport_state);
 const u8 *VAR_4 = VAR_2->t_task_cdb;
 struct se_tmr_req *VAR_5 = VAR_2->se_tmr_req;

 if (!(VAR_2->se_cmd_flags & VAR_0)) {
  FUNC_4("%scmd %#02x:%#02x with tag %#llx dir %s i_state %d t_state %s len %d refcnt %d transport_state %s\n",
    VAR_1, VAR_4[0], VAR_4[1], VAR_2->tag,
    FUNC_1(VAR_2->data_direction),
    VAR_2->se_tfo->get_cmd_state(VAR_2),
    FUNC_0(VAR_2->t_state), VAR_2->data_length,
    FUNC_3(&VAR_2->cmd_kref), VAR_3);
 } else {
  FUNC_4("%stmf %s with tag %#llx ref_task_tag %#llx i_state %d t_state %s refcnt %d transport_state %s\n",
    VAR_1, FUNC_7(VAR_5->function), VAR_2->tag,
    VAR_5->ref_task_tag, VAR_2->se_tfo->get_cmd_state(VAR_2),
    FUNC_0(VAR_2->t_state),
    FUNC_3(&VAR_2->cmd_kref), VAR_3);
 }
 FUNC_2(VAR_3);
}
