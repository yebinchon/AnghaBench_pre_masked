
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mbox_busy; } ;
struct qla_hw_data {TYPE_1__ flags; scalar_t__ dpc_active; int pdev; } ;
struct TYPE_7__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(scsi_qla_host_t *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_3->hw;
 scsi_qla_host_t *VAR_5 = FUNC_1(VAR_4->pdev);

 while ((FUNC_2(VAR_3) || VAR_4->dpc_active ||
  VAR_4->flags.mbox_busy) ||
        FUNC_3(VAR_0, &VAR_3->dpc_flags) ||
        FUNC_3(VAR_1, &VAR_3->dpc_flags)) {
  if (FUNC_3(VAR_2, &VAR_5->dpc_flags))
   break;
  FUNC_0(1000);
 }
}
