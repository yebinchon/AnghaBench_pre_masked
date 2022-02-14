
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_lport {TYPE_1__* host; } ;
struct fc_fcp_internal {int max_can_queue; scalar_t__ last_can_queue_ramp_down_time; scalar_t__ last_can_queue_ramp_up_time; } ;
struct TYPE_2__ {int can_queue; int host_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct fc_fcp_internal* FUNC_0 (struct fc_lport*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,char*,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct fc_lport *VAR_3)
{
 struct fc_fcp_internal *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(VAR_3->host->host_lock, VAR_5);

 if (VAR_4->last_can_queue_ramp_up_time &&
     (FUNC_4(VAR_2, VAR_4->last_can_queue_ramp_up_time +
    VAR_0)))
  goto unlock;

 if (FUNC_4(VAR_2, VAR_4->last_can_queue_ramp_down_time +
   VAR_0))
  goto unlock;

 VAR_4->last_can_queue_ramp_up_time = VAR_2;

 VAR_6 = VAR_3->host->can_queue << 1;
 if (VAR_6 >= VAR_4->max_can_queue) {
  VAR_6 = VAR_4->max_can_queue;
  VAR_4->last_can_queue_ramp_down_time = 0;
 }
 VAR_3->host->can_queue = VAR_6;
 FUNC_1(VAR_1, VAR_3->host, "libfc: increased "
       "can_queue to %d.\n", VAR_6);

unlock:
 FUNC_3(VAR_3->host->host_lock, VAR_5);
}
