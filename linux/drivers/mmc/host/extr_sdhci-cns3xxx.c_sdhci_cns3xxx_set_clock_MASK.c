
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {int max_clk; TYPE_1__* mmc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ actual_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int) ;
 struct device* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_5, unsigned int VAR_6)
{
 struct device *VAR_7 = FUNC_3(VAR_5->mmc);
 int VAR_8 = 1;
 u16 VAR_9;
 unsigned long VAR_10;

 VAR_5->mmc->actual_clock = 0;

 FUNC_5(VAR_5, 0, VAR_1);

 if (VAR_6 == 0)
  return;

 while (VAR_5->max_clk / VAR_8 > VAR_6) {




  if (VAR_8 < 4)
   VAR_8 += 1;
  else if (VAR_8 < 256)
   VAR_8 *= 2;
  else
   break;
 }

 FUNC_0(VAR_7, "desired SD clock: %d, actual: %d\n",
  VAR_6, VAR_5->max_clk / VAR_8);


 if (VAR_8 != 3)
  VAR_8 >>= 1;

 VAR_9 = VAR_8 << VAR_4;
 VAR_9 |= VAR_2;
 FUNC_5(VAR_5, VAR_9, VAR_1);

 VAR_10 = 20;
 while (!((VAR_9 = FUNC_4(VAR_5, VAR_1))
   & VAR_3)) {
  if (VAR_10 == 0) {
   FUNC_1(VAR_7, "clock is unstable");
   break;
  }
  VAR_10--;
  FUNC_2(1);
 }

 VAR_9 |= VAR_0;
 FUNC_5(VAR_5, VAR_9, VAR_1);
}
