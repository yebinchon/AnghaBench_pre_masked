
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_lport {TYPE_1__* host; } ;
struct fc_fcp_internal {scalar_t__ last_can_queue_ramp_down_time; } ;
struct TYPE_2__ {int can_queue; int host_lock; } ;


 scalar_t__ VAR_0 ;
 struct fc_fcp_internal* FUNC_0 (struct fc_lport*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct fc_lport *VAR_2)
{
 struct fc_fcp_internal *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 int VAR_5;
 bool VAR_6 = 0;

 FUNC_1(VAR_2->host->host_lock, VAR_4);

 if (VAR_3->last_can_queue_ramp_down_time &&
     (FUNC_3(VAR_1, VAR_3->last_can_queue_ramp_down_time +
    VAR_0)))
  goto unlock;

 VAR_3->last_can_queue_ramp_down_time = VAR_1;

 VAR_5 = VAR_2->host->can_queue;
 VAR_5 >>= 1;
 if (!VAR_5)
  VAR_5 = 1;
 VAR_2->host->can_queue = VAR_5;
 VAR_6 = 1;

unlock:
 FUNC_2(VAR_2->host->host_lock, VAR_4);
 return VAR_6;
}
