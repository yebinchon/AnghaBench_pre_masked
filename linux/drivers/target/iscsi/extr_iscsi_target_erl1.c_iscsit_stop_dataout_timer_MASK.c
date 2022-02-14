
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cmd {int dataout_timer_flags; int dataout_timeout_lock; int init_task_tag; int dataout_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iscsi_cmd *VAR_2)
{
 FUNC_2(&VAR_2->dataout_timeout_lock);
 if (!(VAR_2->dataout_timer_flags & VAR_0)) {
  FUNC_3(&VAR_2->dataout_timeout_lock);
  return;
 }
 VAR_2->dataout_timer_flags |= VAR_1;
 FUNC_3(&VAR_2->dataout_timeout_lock);

 FUNC_0(&VAR_2->dataout_timer);

 FUNC_2(&VAR_2->dataout_timeout_lock);
 VAR_2->dataout_timer_flags &= ~VAR_0;
 FUNC_1("Stopped DataOUT Timer for ITT: 0x%08x\n",
   VAR_2->init_task_tag);
 FUNC_3(&VAR_2->dataout_timeout_lock);
}
