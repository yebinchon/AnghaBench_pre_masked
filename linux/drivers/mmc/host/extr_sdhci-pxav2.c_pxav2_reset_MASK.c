
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sdhci_pxa_platdata {int clk_delay_sel; int clk_delay_cycles; int flags; } ;
struct sdhci_host {scalar_t__ ioaddr; int mmc; } ;
struct TYPE_2__ {struct sdhci_pxa_platdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sdhci_host*,scalar_t__) ;
 struct platform_device* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_9, u8 VAR_10)
{
 struct platform_device *VAR_11 = FUNC_3(FUNC_0(VAR_9->mmc));
 struct sdhci_pxa_platdata *VAR_12 = VAR_11->dev.platform_data;

 FUNC_2(VAR_9, VAR_10);

 if (VAR_10 == VAR_6) {
  u16 VAR_13 = 0;





  if (VAR_12 && VAR_12->clk_delay_sel == 1) {
   VAR_13 = FUNC_1(VAR_9->ioaddr + VAR_7);

   VAR_13 &= ~(VAR_2 << VAR_3);
   VAR_13 |= (VAR_12->clk_delay_cycles & VAR_2)
    << VAR_3;
   VAR_13 &= ~(VAR_4 << VAR_5);
   VAR_13 |= (1 & VAR_4) << VAR_5;

   FUNC_4(VAR_13, VAR_9->ioaddr + VAR_7);
  }

  if (VAR_12 && (VAR_12->flags & VAR_1)) {
   VAR_13 = FUNC_1(VAR_9->ioaddr + VAR_8);
   VAR_13 &= ~VAR_0;
   FUNC_4(VAR_13, VAR_9->ioaddr + VAR_8);
  } else {
   VAR_13 = FUNC_1(VAR_9->ioaddr + VAR_8);
   VAR_13 &= ~VAR_0;
   VAR_13 |= VAR_0;
   FUNC_4(VAR_13, VAR_9->ioaddr + VAR_8);
  }
 }
}
