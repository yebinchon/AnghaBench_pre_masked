
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ disc_state; int reg_work; TYPE_1__* vha; int next_disc_state; scalar_t__ sec_since_registration; int jiffies_at_registration; int d_id; } ;
typedef TYPE_2__ fc_port_t ;
struct TYPE_4__ {int work_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;

void FUNC_4(fc_port_t *VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_0(VAR_4->d_id))
  return;

 FUNC_2(&VAR_4->vha->work_lock, VAR_5);
 if (VAR_4->disc_state == VAR_1) {
  FUNC_3(&VAR_4->vha->work_lock, VAR_5);
  return;
 }
 VAR_4->jiffies_at_registration = VAR_2;
 VAR_4->sec_since_registration = 0;
 VAR_4->next_disc_state = VAR_0;
 VAR_4->disc_state = VAR_1;
 FUNC_3(&VAR_4->vha->work_lock, VAR_5);

 FUNC_1(VAR_3, &VAR_4->reg_work);
}
