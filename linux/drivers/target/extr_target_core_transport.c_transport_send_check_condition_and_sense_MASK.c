
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; TYPE_1__* se_tfo; int t_state_lock; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int (* queue_status ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*,int ) ;

int
FUNC_6(struct se_cmd *VAR_2,
  sense_reason_t VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_2->se_cmd_flags & VAR_0);

 FUNC_1(&VAR_2->t_state_lock, VAR_5);
 if (VAR_2->se_cmd_flags & VAR_1) {
  FUNC_2(&VAR_2->t_state_lock, VAR_5);
  return 0;
 }
 VAR_2->se_cmd_flags |= VAR_1;
 FUNC_2(&VAR_2->t_state_lock, VAR_5);

 if (!VAR_4)
  FUNC_5(VAR_2, VAR_3);

 FUNC_4(VAR_2);
 return VAR_2->se_tfo->queue_status(VAR_2);
}
