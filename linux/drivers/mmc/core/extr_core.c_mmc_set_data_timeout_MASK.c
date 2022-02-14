
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_data {int timeout_ns; unsigned int timeout_clks; int flags; } ;
struct TYPE_4__ {unsigned int r2w_factor; unsigned int taac_ns; unsigned int taac_clks; } ;
struct mmc_card {TYPE_3__* host; TYPE_1__ csd; } ;
struct TYPE_5__ {int clock; } ;
struct TYPE_6__ {TYPE_2__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmc_card const*) ;
 scalar_t__ FUNC_1 (struct mmc_card const*) ;
 scalar_t__ FUNC_2 (struct mmc_card const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

void FUNC_4(struct mmc_data *VAR_2, const struct mmc_card *VAR_3)
{
 unsigned int VAR_4;




 if (FUNC_2(VAR_3)) {
  VAR_2->timeout_ns = 1000000000;
  VAR_2->timeout_clks = 0;
  return;
 }




 VAR_4 = FUNC_1(VAR_3) ? 100 : 10;





 if (VAR_2->flags & VAR_1)
  VAR_4 <<= VAR_3->csd.r2w_factor;

 VAR_2->timeout_ns = VAR_3->csd.taac_ns * VAR_4;
 VAR_2->timeout_clks = VAR_3->csd.taac_clks * VAR_4;




 if (FUNC_1(VAR_3)) {
  unsigned int VAR_5, VAR_6;

  VAR_5 = VAR_2->timeout_ns / 1000;
  if (VAR_3->host->ios.clock)
   VAR_5 += VAR_2->timeout_clks * 1000 /
    (VAR_3->host->ios.clock / 1000);

  if (VAR_2->flags & VAR_1)
   VAR_6 = 3000000;
  else
   VAR_6 = 100000;




  if (VAR_5 > VAR_6) {
   VAR_2->timeout_ns = VAR_6 * 1000;
   VAR_2->timeout_clks = 0;
  }


  if (VAR_5 == 0)
   VAR_2->timeout_ns = VAR_6 * 1000;
 }







 if (FUNC_0(VAR_3) && VAR_2->flags & VAR_0) {
  VAR_2->timeout_ns = 600000000;
  VAR_2->timeout_clks = 0;
 }







 if (FUNC_3(VAR_3->host)) {
  if (VAR_2->flags & VAR_1) {
   if (VAR_2->timeout_ns < 1000000000)
    VAR_2->timeout_ns = 1000000000;
  } else {
   if (VAR_2->timeout_ns < 100000000)
    VAR_2->timeout_ns = 100000000;
  }
 }
}
