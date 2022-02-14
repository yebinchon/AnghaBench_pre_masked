
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_node_attrib {int nopin_response_timeout; } ;
struct iscsi_conn {int nopin_response_timer_flags; int nopin_timer_lock; int nopin_response_timer; struct iscsi_session* sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct iscsi_node_attrib* FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iscsi_conn *VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_2->sess;
 struct iscsi_node_attrib *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(&VAR_2->nopin_timer_lock);
 if (!(VAR_2->nopin_response_timer_flags & VAR_1)) {
  FUNC_4(&VAR_2->nopin_timer_lock);
  return;
 }

 FUNC_2(&VAR_2->nopin_response_timer,
  (FUNC_0() + VAR_4->nopin_response_timeout * VAR_0));
 FUNC_4(&VAR_2->nopin_timer_lock);
}
