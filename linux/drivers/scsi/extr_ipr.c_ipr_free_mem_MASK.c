
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipr_misc_cbs {int dummy; } ;
struct TYPE_5__ {int cfg_table; } ;
struct ipr_ioa_cfg {int hrrq_num; int cfg_table_size; int trace; int * hostrcb_dma; int * hostrcb; TYPE_3__* pdev; int cfg_table_dma; TYPE_2__ u; TYPE_1__* hrrq; int vpd_cbs_dma; int vpd_cbs; int res_entries; } ;
struct ipr_hostrcb {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int size; int host_rrq_dma; int host_rrq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (struct ipr_ioa_cfg*) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ipr_ioa_cfg *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1->res_entries);
 FUNC_0(&VAR_1->pdev->dev, sizeof(struct ipr_misc_cbs),
     VAR_1->vpd_cbs, VAR_1->vpd_cbs_dma);
 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->hrrq_num; VAR_2++)
  FUNC_0(&VAR_1->pdev->dev,
      sizeof(u32) * VAR_1->hrrq[VAR_2].size,
      VAR_1->hrrq[VAR_2].host_rrq,
      VAR_1->hrrq[VAR_2].host_rrq_dma);

 FUNC_0(&VAR_1->pdev->dev, VAR_1->cfg_table_size,
     VAR_1->u.cfg_table, VAR_1->cfg_table_dma);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->pdev->dev,
      sizeof(struct ipr_hostrcb),
      VAR_1->hostrcb[VAR_2],
      VAR_1->hostrcb_dma[VAR_2]);
 }

 FUNC_2(VAR_1);
 FUNC_3(VAR_1->trace);
}
