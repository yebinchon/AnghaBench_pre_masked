
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_hsmmc_host {int mmc; scalar_t__ dbclk; int dev; int rx_chan; int tx_chan; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct omap_hsmmc_host* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct omap_hsmmc_host *VAR_1 = FUNC_6(VAR_0);

 FUNC_9(VAR_1->dev);
 FUNC_5(VAR_1->mmc);

 FUNC_3(VAR_1->tx_chan);
 FUNC_3(VAR_1->rx_chan);

 FUNC_1(VAR_1->dev);
 FUNC_8(VAR_1->dev);
 FUNC_10(VAR_1->dev);
 FUNC_7(VAR_1->dev);
 FUNC_2(&VAR_0->dev, 0);
 if (VAR_1->dbclk)
  FUNC_0(VAR_1->dbclk);

 FUNC_4(VAR_1->mmc);

 return 0;
}
