
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {scalar_t__ state; int itt; scalar_t__ sc; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_conn {TYPE_1__* session; } ;
struct TYPE_2__ {int cmds_max; struct iscsi_task** cmds; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iscsi_task*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct iscsi_session *VAR_4, struct iscsi_conn *VAR_5)
{
 struct iscsi_task *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->session->cmds_max; VAR_7++) {
  VAR_6 = VAR_5->session->cmds[VAR_7];
  if (VAR_6->sc)
   continue;

  if (VAR_6->state == VAR_2)
   continue;

  FUNC_0(VAR_5->session,
      "failing mgmt itt 0x%x state %d\n",
      VAR_6->itt, VAR_6->state);
  VAR_8 = VAR_0;
  if (VAR_6->state == VAR_3)
   VAR_8 = VAR_1;
  FUNC_2(&VAR_4->back_lock);
  FUNC_1(VAR_6, VAR_8);
  FUNC_3(&VAR_4->back_lock);
 }
}
