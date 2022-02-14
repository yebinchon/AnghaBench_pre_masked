
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_s3c {int cur_clk; int * clk_rates; struct clk** clk_bus; TYPE_2__* pdev; } ;
struct sdhci_host {scalar_t__ ioaddr; int max_clk; TYPE_1__* mmc; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ actual_clock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,char*,int,unsigned int,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (struct sdhci_s3c*,int,unsigned int) ;
 int FUNC_5 (struct sdhci_host*,unsigned int) ;
 struct sdhci_s3c* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sdhci_host *VAR_18, unsigned int VAR_19)
{
 struct sdhci_s3c *VAR_20 = FUNC_6(VAR_18);
 unsigned int VAR_21 = VAR_17;
 unsigned int VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 u32 VAR_25;

 VAR_18->mmc->actual_clock = 0;


 if (VAR_19 == 0) {
  FUNC_5(VAR_18, VAR_19);
  return;
 }

 for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
  VAR_22 = FUNC_4(VAR_20, VAR_24, VAR_19);
  if (VAR_22 < VAR_21) {
   VAR_21 = VAR_22;
   VAR_23 = VAR_24;
  }
 }

 FUNC_2(&VAR_20->pdev->dev,
  "selected source %d, clock %d, delta %d\n",
   VAR_23, VAR_19, VAR_21);


 if (VAR_20->cur_clk != VAR_23) {
  struct clk *VAR_26 = VAR_20->clk_bus[VAR_23];

  FUNC_1(VAR_26);
  if (VAR_20->cur_clk >= 0)
   FUNC_0(
     VAR_20->clk_bus[VAR_20->cur_clk]);

  VAR_20->cur_clk = VAR_23;
  VAR_18->max_clk = VAR_20->clk_rates[VAR_23];
 }


 FUNC_8(0, VAR_18->ioaddr + VAR_16);

 VAR_25 = FUNC_3(VAR_18->ioaddr + VAR_5);
 VAR_25 &= ~VAR_10;
 VAR_25 |= VAR_23 << VAR_11;
 FUNC_7(VAR_25, VAR_18->ioaddr + VAR_5);


 FUNC_7(VAR_2,
  VAR_18->ioaddr + VAR_1);

 VAR_25 = FUNC_3(VAR_18->ioaddr + VAR_5);
 VAR_25 |= (VAR_4 |
    VAR_3 |
    VAR_9 |
    VAR_7 |
    VAR_8);
 FUNC_7(VAR_25, VAR_18->ioaddr + VAR_5);


 VAR_25 = (VAR_13 | VAR_12);
 if (VAR_19 < 25 * 1000000)
  VAR_25 |= (VAR_15 | VAR_14);
 FUNC_7(VAR_25, VAR_18->ioaddr + VAR_6);

 FUNC_5(VAR_18, VAR_19);
}
