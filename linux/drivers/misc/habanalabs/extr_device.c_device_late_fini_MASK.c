
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int late_init_done; TYPE_1__* asic_funcs; int work_heartbeat; scalar_t__ heartbeat; int work_freq; } ;
struct TYPE_2__ {int (* late_fini ) (struct hl_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hl_device*) ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_0)
{
 if (!VAR_0->late_init_done)
  return;

 FUNC_0(&VAR_0->work_freq);
 if (VAR_0->heartbeat)
  FUNC_0(&VAR_0->work_heartbeat);

 if (VAR_0->asic_funcs->late_fini)
  VAR_0->asic_funcs->late_fini(VAR_0);

 VAR_0->late_init_done = 0;
}
