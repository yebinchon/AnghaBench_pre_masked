
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct netdata_local {scalar_t__ dma_buff_size; int clk; int mii_bus; int net_base; int dma_buff_base_p; int dma_buff_base_v; TYPE_1__* pdev; } ;
struct net_device {int irq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct netdata_local* FUNC_9 (struct net_device*) ;
 struct net_device* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_10(VAR_0);
 struct netdata_local *VAR_2 = FUNC_9(VAR_1);

 FUNC_11(VAR_1);

 if (!FUNC_12(&VAR_2->pdev->dev) ||
     VAR_2->dma_buff_size > FUNC_6(((void*)0), ((void*)0)))
  FUNC_2(&VAR_2->pdev->dev, VAR_2->dma_buff_size,
      VAR_2->dma_buff_base_v,
      VAR_2->dma_buff_base_p);
 FUNC_3(VAR_1->irq, VAR_1);
 FUNC_5(VAR_2->net_base);
 FUNC_8(VAR_2->mii_bus);
 FUNC_7(VAR_2->mii_bus);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);
 FUNC_4(VAR_1);

 return 0;
}
