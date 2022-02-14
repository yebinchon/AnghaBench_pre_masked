
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_9__ {scalar_t__ ioa_state; } ;
struct pmcraid_instance {int ioa_reset_in_progress; TYPE_5__* host; int ioa_state; TYPE_4__ scn; struct pmcraid_cmd* reset_cmd; scalar_t__ ioa_reset_attempts; TYPE_1__* pdev; } ;
struct pmcraid_cmd {int cmd_done; TYPE_3__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
struct TYPE_10__ {int host_lock; } ;
struct TYPE_7__ {int * cdb; } ;
struct TYPE_8__ {TYPE_2__ ioarcb; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pmcraid_cmd* VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct pmcraid_cmd* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (char*) ;
 struct pmcraid_cmd* FUNC_3 (struct pmcraid_instance*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (struct pmcraid_instance*,scalar_t__) ;
 int FUNC_6 (struct pmcraid_cmd*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct pmcraid_cmd *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 struct pmcraid_instance *VAR_8 = VAR_7->drv_inst;
 unsigned long VAR_9;

 FUNC_0(&VAR_8->pdev->dev,
  "Adapter being reset due to cmd(CDB[0] = %x) timeout\n",
  VAR_7->ioa_cb->ioarcb.cdb[0]);







 FUNC_8(VAR_8->host->host_lock, VAR_9);
 if (!VAR_8->ioa_reset_in_progress) {
  VAR_8->ioa_reset_attempts = 0;
  VAR_7 = FUNC_3(VAR_8);




  if (VAR_7 == ((void*)0)) {
   FUNC_9(VAR_8->host->host_lock,
            VAR_9);
   FUNC_2("no free cmnd block for timeout handler\n");
   return;
  }

  VAR_8->reset_cmd = VAR_7;
  VAR_8->ioa_reset_in_progress = 1;
 } else {
  FUNC_4("reset is already in progress\n");

  if (VAR_8->reset_cmd != VAR_7) {




   FUNC_2("cmd is pending but reset in progress\n");
  }






  if (VAR_7 == VAR_8->reset_cmd)
   VAR_7->cmd_done = VAR_4;
 }


 if (VAR_8->scn.ioa_state != VAR_1 &&
     VAR_8->scn.ioa_state != VAR_2)
  FUNC_5(VAR_8,
     VAR_1);

 VAR_8->ioa_state = VAR_0;
 FUNC_7(VAR_8->host);
 FUNC_6(VAR_7);
 FUNC_9(VAR_8->host->host_lock, VAR_9);
}
