
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct megasas_instance {int work_init; TYPE_2__* host; TYPE_1__* pdev; int sriov_heartbeat_timer; TYPE_3__* hb_host_mem; } ;
struct TYPE_8__ {scalar_t__ fwCounter; scalar_t__ driverCounter; } ;
struct TYPE_7__ {TYPE_4__ HB; } ;
struct TYPE_6__ {int host_no; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct megasas_instance* FUNC_1 (int ,struct timer_list*,int ) ;
 struct megasas_instance* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct megasas_instance *VAR_5 =
  FUNC_1(VAR_5, VAR_4, VAR_3);

 if (VAR_5->hb_host_mem->HB.fwCounter !=
     VAR_5->hb_host_mem->HB.driverCounter) {
  VAR_5->hb_host_mem->HB.driverCounter =
   VAR_5->hb_host_mem->HB.fwCounter;
  FUNC_2(&VAR_5->sriov_heartbeat_timer,
     VAR_2 + VAR_0);
 } else {
  FUNC_0(&VAR_5->pdev->dev, "SR-IOV: Heartbeat never "
         "completed for scsi%d\n", VAR_5->host->host_no);
  FUNC_3(&VAR_5->work_init);
 }
}
