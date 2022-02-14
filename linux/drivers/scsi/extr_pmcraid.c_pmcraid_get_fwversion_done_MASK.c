
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pmcraid_instance {TYPE_3__* host; int ioa_state; } ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
struct TYPE_6__ {int host_lock; } ;
struct TYPE_4__ {int ioasc; } ;
struct TYPE_5__ {TYPE_1__ ioasa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_1)
{
 struct pmcraid_instance *VAR_2 = VAR_1->drv_inst;
 u32 VAR_3 = FUNC_0(VAR_1->ioa_cb->ioasa.ioasc);
 unsigned long VAR_4;





 if (VAR_3) {
  FUNC_1("IOA Inquiry failed with %x\n", VAR_3);
  FUNC_4(VAR_2->host->host_lock, VAR_4);
  VAR_2->ioa_state = VAR_0;
  FUNC_3(VAR_1);
  FUNC_5(VAR_2->host->host_lock, VAR_4);
 } else {
  FUNC_2(VAR_1);
 }
}
