
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int dpc_flags; TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_5__ {scalar_t__ running_gold_fw; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 TYPE_3__* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_4)
{
 scsi_qla_host_t *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->hw->flags.running_gold_fw)
  return;

 FUNC_0(VAR_1, &VAR_5->dpc_flags);
 FUNC_0(VAR_0, &VAR_5->dpc_flags);
 FUNC_0(VAR_3, &VAR_5->dpc_flags);
 FUNC_0(VAR_2, &VAR_5->dpc_flags);
}
