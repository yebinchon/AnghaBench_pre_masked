
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_node_attrib {int dataout_timeout; } ;
struct iscsi_conn {struct iscsi_session* sess; } ;
struct iscsi_cmd {int dataout_timer_flags; int dataout_timeout_lock; int init_task_tag; int dataout_timer; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct iscsi_node_attrib* FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iscsi_cmd *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_2->conn;
 struct iscsi_session *VAR_4 = VAR_3->sess;
 struct iscsi_node_attrib *VAR_5 = FUNC_1(VAR_4);

 FUNC_4(&VAR_2->dataout_timeout_lock);
 if (!(VAR_2->dataout_timer_flags & VAR_1)) {
  FUNC_5(&VAR_2->dataout_timeout_lock);
  return;
 }

 FUNC_2(&VAR_2->dataout_timer,
  (FUNC_0() + VAR_5->dataout_timeout * VAR_0));
 FUNC_3("Updated DataOUT timer for ITT: 0x%08x",
   VAR_2->init_task_tag);
 FUNC_5(&VAR_2->dataout_timeout_lock);
}
