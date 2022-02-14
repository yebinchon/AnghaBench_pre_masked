
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssp_device {int irq; int clk; } ;
struct platform_device {int dev; } ;
struct driver_data {TYPE_1__* controller_info; struct ssp_device* ssp; } ;
struct TYPE_2__ {scalar_t__ enable_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct driver_data*) ;
 struct driver_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct driver_data*) ;
 int FUNC_7 (struct driver_data*,int ,int ) ;
 int FUNC_8 (struct ssp_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct driver_data *VAR_2 = FUNC_2(VAR_1);
 struct ssp_device *VAR_3;

 if (!VAR_2)
  return 0;
 VAR_3 = VAR_2->ssp;

 FUNC_4(&VAR_1->dev);


 FUNC_7(VAR_2, VAR_0, 0);
 FUNC_0(VAR_3->clk);


 if (VAR_2->controller_info->enable_dma)
  FUNC_6(VAR_2);

 FUNC_5(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);


 FUNC_1(VAR_3->irq, VAR_2);


 FUNC_8(VAR_3);

 return 0;
}
