
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_node_attrib {int dataout_timeout; } ;
struct iscsi_conn {int cid; struct iscsi_session* sess; } ;
struct iscsi_cmd {int dataout_timer_flags; int dataout_timer; int init_task_tag; int dataout_timeout_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_node_attrib* FUNC_0 (struct iscsi_session*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(
 struct iscsi_cmd *VAR_4,
 struct iscsi_conn *VAR_5)
{
 struct iscsi_session *VAR_6 = VAR_5->sess;
 struct iscsi_node_attrib *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(&VAR_4->dataout_timeout_lock);

 if (VAR_4->dataout_timer_flags & VAR_1)
  return;

 FUNC_3("Starting DataOUT timer for ITT: 0x%08x on"
  " CID: %hu.\n", VAR_4->init_task_tag, VAR_5->cid);

 VAR_4->dataout_timer_flags &= ~VAR_2;
 VAR_4->dataout_timer_flags |= VAR_1;
 FUNC_2(&VAR_4->dataout_timer, VAR_3 + VAR_7->dataout_timeout * VAR_0);
}
