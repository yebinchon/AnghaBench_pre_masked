
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_node_attrib {int nopin_timeout; } ;
struct iscsi_conn {int nopin_timer_flags; int cid; int nopin_timer; int nopin_timer_lock; struct iscsi_session* sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_node_attrib* FUNC_0 (struct iscsi_session*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int ,int) ;

void FUNC_4(struct iscsi_conn *VAR_4)
{
 struct iscsi_session *VAR_5 = VAR_4->sess;
 struct iscsi_node_attrib *VAR_6 = FUNC_0(VAR_5);

 FUNC_1(&VAR_4->nopin_timer_lock);




 if (!VAR_6->nopin_timeout)
  return;

 if (VAR_4->nopin_timer_flags & VAR_1)
  return;

 VAR_4->nopin_timer_flags &= ~VAR_2;
 VAR_4->nopin_timer_flags |= VAR_1;
 FUNC_2(&VAR_4->nopin_timer, VAR_3 + VAR_6->nopin_timeout * VAR_0);

 FUNC_3("Started NOPIN Timer on CID: %d at %u second"
  " interval\n", VAR_4->cid, VAR_6->nopin_timeout);
}
