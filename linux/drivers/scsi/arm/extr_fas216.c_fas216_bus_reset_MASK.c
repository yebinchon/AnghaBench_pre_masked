
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int neg_t ;
struct TYPE_7__ {int async_stp; int SCp; int phase; int msgs; } ;
struct TYPE_6__ {int capabilities; int asyncperiod; int disconnect_ok; } ;
struct TYPE_9__ {int rst_bus_status; int eh_wait; TYPE_3__* device; TYPE_2__ scsi; TYPE_1__ ifcfg; int * SCpnt; } ;
struct TYPE_8__ {int period; scalar_t__ wide_xfer; scalar_t__ sof; int stp; int sync_state; int disconnect_ok; } ;
typedef TYPE_4__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(FAS216_Info *VAR_5)
{
 neg_t VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->scsi.msgs);

 VAR_6 = VAR_3;






 VAR_5->scsi.phase = VAR_2;
 VAR_5->SCpnt = ((void*)0);
 FUNC_0(&VAR_5->scsi.SCp, 0, sizeof(VAR_5->scsi.SCp));

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_5->device[VAR_7].disconnect_ok = VAR_5->ifcfg.disconnect_ok;
  VAR_5->device[VAR_7].sync_state = VAR_6;
  VAR_5->device[VAR_7].period = VAR_5->ifcfg.asyncperiod / 4;
  VAR_5->device[VAR_7].stp = VAR_5->scsi.async_stp;
  VAR_5->device[VAR_7].sof = 0;
  VAR_5->device[VAR_7].wide_xfer = 0;
 }

 VAR_5->rst_bus_status = 1;
 FUNC_2(&VAR_5->eh_wait);
}
