
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct els_plogi {int els_resp_pyld_dma; scalar_t__ els_resp_pyld; int rx_size; int els_plogi_pyld_dma; scalar_t__ els_plogi_pyld; int tx_size; } ;
struct TYPE_7__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;

void FUNC_1(scsi_qla_host_t *VAR_0, struct els_plogi *VAR_1)
{
 if (VAR_1->els_plogi_pyld)
  FUNC_0(&VAR_0->hw->pdev->dev,
      VAR_1->tx_size,
      VAR_1->els_plogi_pyld,
      VAR_1->els_plogi_pyld_dma);

 if (VAR_1->els_resp_pyld)
  FUNC_0(&VAR_0->hw->pdev->dev,
      VAR_1->rx_size,
      VAR_1->els_resp_pyld,
      VAR_1->els_resp_pyld_dma);
}
