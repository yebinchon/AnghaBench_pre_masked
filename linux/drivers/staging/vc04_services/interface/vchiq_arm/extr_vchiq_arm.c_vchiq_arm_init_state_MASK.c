
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int dummy; } ;
struct vchiq_arm_state {scalar_t__ first_connect; int suspend_timer; struct vchiq_state* state; scalar_t__ suspend_timer_running; int suspend_timer_timeout; int blocked_blocker; int resume_blocker; int vc_resume_complete; int vc_suspend_complete; int ka_release_count; int ka_use_ack_count; int ka_use_count; int ka_evt; int susp_res_lock; } ;
typedef int VCHIQ_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vchiq_arm_state*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ) ;

VCHIQ_STATUS_T
FUNC_6(struct vchiq_state *VAR_4,
       struct vchiq_arm_state *VAR_5)
{
 if (VAR_5) {
  FUNC_3(&VAR_5->susp_res_lock);

  FUNC_2(&VAR_5->ka_evt);
  FUNC_0(&VAR_5->ka_use_count, 0);
  FUNC_0(&VAR_5->ka_use_ack_count, 0);
  FUNC_0(&VAR_5->ka_release_count, 0);

  FUNC_2(&VAR_5->vc_suspend_complete);

  FUNC_2(&VAR_5->vc_resume_complete);


  FUNC_4(VAR_5, VAR_2);

  FUNC_2(&VAR_5->resume_blocker);


  FUNC_1(&VAR_5->resume_blocker);

  FUNC_2(&VAR_5->blocked_blocker);


  FUNC_1(&VAR_5->blocked_blocker);

  VAR_5->suspend_timer_timeout = VAR_0;
  VAR_5->suspend_timer_running = 0;
  VAR_5->state = VAR_4;
  FUNC_5(&VAR_5->suspend_timer, VAR_3,
       0);

  VAR_5->first_connect = 0;

 }
 return VAR_1;
}
