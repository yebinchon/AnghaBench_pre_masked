
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_session {int time2retain_timer_flags; TYPE_1__* sess_ops; int time2retain_timer; int sid; TYPE_2__* tpg; } ;
struct TYPE_4__ {scalar_t__ tpg_state; int tpg_state_lock; } ;
struct TYPE_3__ {int DefaultTime2Retain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iscsi_session *VAR_5)
{
 int VAR_6;




 FUNC_2(&VAR_5->tpg->tpg_state_lock);
 VAR_6 = (VAR_5->tpg->tpg_state == VAR_3);
 FUNC_3(&VAR_5->tpg->tpg_state_lock);

 if (!VAR_6)
  return;

 if (VAR_5->time2retain_timer_flags & VAR_1)
  return;

 FUNC_1("Starting Time2Retain timer for %u seconds on"
  " SID: %u\n", VAR_5->sess_ops->DefaultTime2Retain, VAR_5->sid);

 VAR_5->time2retain_timer_flags &= ~VAR_2;
 VAR_5->time2retain_timer_flags |= VAR_1;
 FUNC_0(&VAR_5->time2retain_timer,
    VAR_4 + VAR_5->sess_ops->DefaultTime2Retain * VAR_0);
}
