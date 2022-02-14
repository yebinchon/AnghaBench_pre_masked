
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* hw; int pci_flags; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {int board_disable; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

bool
FUNC_4(scsi_qla_host_t *VAR_3, uint32_t VAR_4)
{

 if (VAR_4 == 0xffffffff && !FUNC_0(VAR_3->hw->pdev)) {
  if (!FUNC_2(VAR_0, &VAR_3->pci_flags) &&
      !FUNC_3(VAR_2, &VAR_3->pci_flags) &&
      !FUNC_3(VAR_1, &VAR_3->pci_flags)) {





   FUNC_1(&VAR_3->hw->board_disable);
  }
  return 1;
 } else
  return 0;
}
