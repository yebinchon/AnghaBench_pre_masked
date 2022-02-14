
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct pmcraid_instance {TYPE_1__* host; int ioa_status; } ;
struct TYPE_4__ {scalar_t__ expires; void (* function ) (struct timer_list*) ;} ;
struct pmcraid_cmd {scalar_t__ time_left; TYPE_2__ timer; struct pmcraid_instance* drv_inst; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct pmcraid_cmd* VAR_2 ;
 struct pmcraid_cmd* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct pmcraid_cmd *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 struct pmcraid_instance *VAR_7 = VAR_6->drv_inst;
 u32 VAR_8 = FUNC_2(VAR_7->ioa_status);
 unsigned long VAR_9;





 if (((VAR_8 & VAR_0) == 0) ||
     VAR_6->time_left <= 0) {
  FUNC_3("critical op is reset proceeding with reset\n");
  FUNC_5(VAR_7->host->host_lock, VAR_9);
  FUNC_4(VAR_6);
  FUNC_6(VAR_7->host->host_lock, VAR_9);
 } else {
  FUNC_3("critical op is not yet reset waiting again\n");

  VAR_6->time_left -= VAR_1;
  VAR_6->timer.expires = VAR_3 + VAR_1;
  VAR_6->timer.function = FUNC_7;
  FUNC_0(&VAR_6->timer);
 }
}
