
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sdhci_pxa_platdata {scalar_t__ clk_delay_cycles; } ;
struct sdhci_host {scalar_t__ ioaddr; int mmc; } ;
struct TYPE_2__ {struct sdhci_pxa_platdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sdhci_host*,scalar_t__) ;
 struct platform_device* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_5, u8 VAR_6)
{
 struct platform_device *VAR_7 = FUNC_3(FUNC_0(VAR_5->mmc));
 struct sdhci_pxa_platdata *VAR_8 = VAR_7->dev.platform_data;

 FUNC_2(VAR_5, VAR_6);

 if (VAR_6 == VAR_3) {




  if (VAR_8 && 0 != VAR_8->clk_delay_cycles) {
   u16 VAR_9;

   VAR_9 = FUNC_1(VAR_5->ioaddr + VAR_4);
   VAR_9 |= (VAR_8->clk_delay_cycles & VAR_0)
    << VAR_1;
   VAR_9 |= VAR_2;
   FUNC_4(VAR_9, VAR_5->ioaddr + VAR_4);
  }
 }
}
