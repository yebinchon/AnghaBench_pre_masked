
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dw_mci {int biu_clk; int ciu_clk; TYPE_2__* pdata; TYPE_1__* dma_ops; scalar_t__ use_dma; scalar_t__ slot; int dev; } ;
struct TYPE_4__ {int rstc; } ;
struct TYPE_3__ {int (* exit ) (struct dw_mci*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dw_mci*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dw_mci*) ;

void FUNC_7(struct dw_mci *VAR_4)
{
 FUNC_2(VAR_4->dev, "remove slot\n");
 if (VAR_4->slot)
  FUNC_3(VAR_4->slot);

 FUNC_4(VAR_4, VAR_3, 0xFFFFFFFF);
 FUNC_4(VAR_4, VAR_2, 0);


 FUNC_4(VAR_4, VAR_0, 0);
 FUNC_4(VAR_4, VAR_1, 0);

 if (VAR_4->use_dma && VAR_4->dma_ops->exit)
  VAR_4->dma_ops->exit(VAR_4);

 if (!FUNC_0(VAR_4->pdata->rstc))
  FUNC_5(VAR_4->pdata->rstc);

 FUNC_1(VAR_4->ciu_clk);
 FUNC_1(VAR_4->biu_clk);
}
