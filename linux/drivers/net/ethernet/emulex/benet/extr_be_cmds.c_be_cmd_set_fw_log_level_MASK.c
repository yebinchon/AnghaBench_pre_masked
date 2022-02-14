
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct be_fat_conf_params {TYPE_2__* module; int num_modules; } ;
struct be_dma_mem {int size; int dma; scalar_t__ va; } ;
struct be_cmd_resp_hdr {int dummy; } ;
struct be_cmd_resp_get_ext_fat_caps {int dummy; } ;
struct be_adapter {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* trace_lvl; int num_modes; } ;
struct TYPE_4__ {scalar_t__ mode; int dbg_lvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct be_adapter*,struct be_dma_mem*) ;
 int FUNC_1 (struct be_adapter*,struct be_dma_mem*,struct be_fat_conf_params*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct be_dma_mem*,int ,int) ;

int FUNC_7(struct be_adapter *VAR_3, u32 VAR_4)
{
 struct be_dma_mem VAR_5;
 struct be_fat_conf_params *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 FUNC_6(&VAR_5, 0, sizeof(struct be_dma_mem));
 VAR_5.size = sizeof(struct be_cmd_resp_get_ext_fat_caps);
 VAR_5.va = FUNC_3(&VAR_3->pdev->dev,
        VAR_5.size, &VAR_5.dma,
        VAR_1);
 if (!VAR_5.va)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_7)
  goto err;

 VAR_6 = (struct be_fat_conf_params *)
   (VAR_5.va + sizeof(struct be_cmd_resp_hdr));
 for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_6->num_modules); VAR_8++) {
  u32 VAR_10 = FUNC_5(VAR_6->module[VAR_8].num_modes);

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_6->module[VAR_8].trace_lvl[VAR_9].mode == VAR_2)
    VAR_6->module[VAR_8].trace_lvl[VAR_9].dbg_lvl =
       FUNC_2(VAR_4);
  }
 }

 VAR_7 = FUNC_1(VAR_3, &VAR_5, VAR_6);
err:
 FUNC_4(&VAR_3->pdev->dev, VAR_5.size, VAR_5.va,
     VAR_5.dma);
 return VAR_7;
}
