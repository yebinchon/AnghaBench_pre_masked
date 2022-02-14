
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct variant_data {int clkreg; int clkreg_enable; int clkreg_8bit_bus_enable; int clkreg_neg_edge_enable; scalar_t__ st_clkdiv; scalar_t__ explicit_mclk_control; } ;
struct mmci_host {int cclk; int mclk; TYPE_2__* mmc; struct variant_data* variant; } ;
struct TYPE_3__ {scalar_t__ bus_width; scalar_t__ timing; } ;
struct TYPE_4__ {int actual_clock; TYPE_1__ ios; } ;


 int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct mmci_host*,int) ;

__attribute__((used)) static void FUNC_2(struct mmci_host *VAR_8, unsigned int VAR_9)
{
 struct variant_data *VAR_10 = VAR_8->variant;
 u32 VAR_11 = VAR_10->clkreg;


 VAR_8->cclk = 0;

 if (VAR_9) {
  if (VAR_10->explicit_mclk_control) {
   VAR_8->cclk = VAR_8->mclk;
  } else if (VAR_9 >= VAR_8->mclk) {
   VAR_11 = VAR_1;
   if (VAR_10->st_clkdiv)
    VAR_11 |= VAR_3;
   VAR_8->cclk = VAR_8->mclk;
  } else if (VAR_10->st_clkdiv) {






   VAR_11 = FUNC_0(VAR_8->mclk, VAR_9) - 2;
   if (VAR_11 >= 256)
    VAR_11 = 255;
   VAR_8->cclk = VAR_8->mclk / (VAR_11 + 2);
  } else {




   VAR_11 = VAR_8->mclk / (2 * VAR_9) - 1;
   if (VAR_11 >= 256)
    VAR_11 = 255;
   VAR_8->cclk = VAR_8->mclk / (2 * (VAR_11 + 1));
  }

  VAR_11 |= VAR_10->clkreg_enable;
  VAR_11 |= VAR_2;


 }


 VAR_8->mmc->actual_clock = VAR_8->cclk;

 if (VAR_8->mmc->ios.bus_width == VAR_4)
  VAR_11 |= VAR_0;
 if (VAR_8->mmc->ios.bus_width == VAR_5)
  VAR_11 |= VAR_10->clkreg_8bit_bus_enable;

 if (VAR_8->mmc->ios.timing == VAR_7 ||
     VAR_8->mmc->ios.timing == VAR_6)
  VAR_11 |= VAR_10->clkreg_neg_edge_enable;

 FUNC_1(VAR_8, VAR_11);
}
