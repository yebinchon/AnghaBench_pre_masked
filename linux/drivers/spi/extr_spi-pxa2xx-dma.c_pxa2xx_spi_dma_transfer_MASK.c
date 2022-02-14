
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {int mask_sr; TYPE_2__* controller; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dma_tx; int dma_rx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct driver_data*,int) ;
 int FUNC_3 (struct driver_data*,int ) ;

irqreturn_t FUNC_4(struct driver_data *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_2) & VAR_4->mask_sr;
 if (VAR_5 & VAR_3) {
  FUNC_0(&VAR_4->pdev->dev, "FIFO overrun\n");

  FUNC_1(VAR_4->controller->dma_rx);
  FUNC_1(VAR_4->controller->dma_tx);

  FUNC_2(VAR_4, 1);
  return VAR_0;
 }

 return VAR_1;
}
