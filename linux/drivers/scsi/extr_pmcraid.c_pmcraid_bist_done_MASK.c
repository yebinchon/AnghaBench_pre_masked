
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct timer_list {int dummy; } ;
struct pmcraid_instance {TYPE_1__* host; int pdev; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct pmcraid_cmd {scalar_t__ time_left; TYPE_2__ timer; struct pmcraid_instance* drv_inst; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct pmcraid_cmd* VAR_3 ;
 struct pmcraid_cmd* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct pmcraid_cmd *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 struct pmcraid_instance *VAR_8 = VAR_7->drv_inst;
 unsigned long VAR_9;
 int VAR_10;
 u16 VAR_11;

 VAR_10 = FUNC_2(VAR_8->pdev, VAR_1, &VAR_11);


 if ((VAR_10 != VAR_0 || (!(VAR_11 & VAR_2))) &&
     VAR_7->time_left > 0) {
  FUNC_3("BIST not complete, waiting another 2 secs\n");
  VAR_7->timer.expires = VAR_4 + VAR_7->time_left;
  VAR_7->time_left = 0;
  FUNC_0(&VAR_7->timer);
 } else {
  VAR_7->time_left = 0;
  FUNC_3("BIST is complete, proceeding with reset\n");
  FUNC_5(VAR_8->host->host_lock, VAR_9);
  FUNC_4(VAR_7);
  FUNC_6(VAR_8->host->host_lock, VAR_9);
 }
}
