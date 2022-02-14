
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_cb {int started; scalar_t__ timer_pops; int timer; } ;
struct scsi_info {struct timer_cb rsp_q_timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct scsi_info *VAR_0)
{
 struct timer_cb *VAR_1;

 VAR_1 = &VAR_0->rsp_q_timer;

 (void)FUNC_0(&VAR_1->timer);

 VAR_1->started = 0;
 VAR_1->timer_pops = 0;
}
