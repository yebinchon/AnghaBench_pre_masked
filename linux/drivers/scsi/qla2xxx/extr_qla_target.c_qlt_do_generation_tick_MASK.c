
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* hw; } ;
struct TYPE_5__ {int generation_tick; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {int pdev; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(struct scsi_qla_host *VAR_0, int *VAR_1)
{
 scsi_qla_host_t *VAR_2 = FUNC_1(VAR_0->hw->pdev);
 *VAR_1 = FUNC_0(&VAR_2->generation_tick);

 FUNC_2();
}
