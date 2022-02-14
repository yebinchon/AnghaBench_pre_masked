
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmci_host {unsigned int mclk; int cclk; unsigned int clk_reg_add; TYPE_2__* mmc; } ;
struct TYPE_3__ {scalar_t__ timing; scalar_t__ power_mode; scalar_t__ bus_width; } ;
struct TYPE_4__ {int actual_clock; TYPE_1__ ios; } ;


 unsigned int FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct mmci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mmci_host *VAR_15, unsigned int VAR_16)
{
 unsigned int VAR_17 = 0, VAR_18 = 0;

 if (VAR_15->mmc->ios.timing == VAR_11 ||
     VAR_15->mmc->ios.timing == VAR_12)
  VAR_18 = VAR_2;






 if (VAR_16) {
  if (VAR_16 >= VAR_15->mclk && !VAR_18) {
   VAR_15->cclk = VAR_15->mclk;
  } else {
   VAR_17 = FUNC_0(VAR_15->mclk, 2 * VAR_16);
   if (VAR_17 > VAR_1)
    VAR_17 = VAR_1;
   VAR_15->cclk = VAR_15->mclk / (2 * VAR_17);
  }
 } else {





  VAR_17 = VAR_1;
  VAR_15->cclk = VAR_15->mclk / (2 * VAR_17);
 }


 if (VAR_15->mmc->ios.power_mode == VAR_10)
  VAR_15->mmc->actual_clock = VAR_15->cclk;
 else
  VAR_15->mmc->actual_clock = 0;

 if (VAR_15->mmc->ios.bus_width == VAR_8)
  VAR_17 |= VAR_6;
 if (VAR_15->mmc->ios.bus_width == VAR_9)
  VAR_17 |= VAR_7;

 VAR_17 |= VAR_3;
 VAR_17 |= VAR_15->clk_reg_add;
 VAR_17 |= VAR_18;





 if (VAR_15->mmc->ios.timing >= VAR_14) {
  VAR_17 |= VAR_0;
  if (VAR_15->mmc->ios.timing == VAR_13) {
   VAR_17 &= ~VAR_5;
   VAR_17 |= VAR_4;
  }
 }

 FUNC_1(VAR_15, VAR_17);
}
