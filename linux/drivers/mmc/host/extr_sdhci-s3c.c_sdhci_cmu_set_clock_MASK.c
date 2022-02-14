
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_s3c {size_t cur_clk; int * clk_bus; TYPE_1__* pdev; } ;
struct sdhci_host {TYPE_2__* mmc; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ actual_clock; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,unsigned int) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 struct sdhci_s3c* FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_4, unsigned int VAR_5)
{
 struct sdhci_s3c *VAR_6 = FUNC_7(VAR_4);
 struct device *VAR_7 = &VAR_6->pdev->dev;
 unsigned long VAR_8;
 u16 VAR_9 = 0;
 int VAR_10;

 VAR_4->mmc->actual_clock = 0;


 if (VAR_5 == 0) {
  FUNC_6(VAR_4, 0, VAR_1);
  return;
 }

 FUNC_5(VAR_4, VAR_5);


 VAR_9 = FUNC_4(VAR_4, VAR_1);
 VAR_9 &= ~VAR_0;
 FUNC_6(VAR_4, VAR_9, VAR_1);

 VAR_10 = FUNC_0(VAR_6->clk_bus[VAR_6->cur_clk], VAR_5);
 if (VAR_10 != 0) {
  FUNC_1(VAR_7, "%s: failed to set clock rate %uHz\n",
   FUNC_3(VAR_4->mmc), VAR_5);
  return;
 }

 VAR_9 = VAR_2;
 FUNC_6(VAR_4, VAR_9, VAR_1);


 VAR_8 = 20;
 while (!((VAR_9 = FUNC_4(VAR_4, VAR_1))
  & VAR_3)) {
  if (VAR_8 == 0) {
   FUNC_1(VAR_7, "%s: Internal clock never stabilised.\n",
    FUNC_3(VAR_4->mmc));
   return;
  }
  VAR_8--;
  FUNC_2(1);
 }

 VAR_9 |= VAR_0;
 FUNC_6(VAR_4, VAR_9, VAR_1);
}
