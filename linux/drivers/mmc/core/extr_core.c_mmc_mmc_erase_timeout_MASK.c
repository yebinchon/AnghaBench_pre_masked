
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int rev; unsigned int trim_timeout; int erase_group_def; unsigned int hc_erase_timeout; unsigned int sec_erase_mult; unsigned int sec_trim_mult; } ;
struct TYPE_5__ {int r2w_factor; unsigned int taac_clks; int taac_ns; } ;
struct mmc_card {TYPE_4__* host; TYPE_3__ ext_csd; TYPE_1__ csd; } ;
struct TYPE_6__ {int clock; } ;
struct TYPE_8__ {TYPE_2__ ios; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static unsigned int FUNC_1(struct mmc_card *VAR_4,
              unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 if (VAR_5 == VAR_0 ||
     (VAR_5 == VAR_3 && VAR_4->ext_csd.rev >= 6)) {
  VAR_7 = VAR_4->ext_csd.trim_timeout;
 } else if (VAR_4->ext_csd.erase_group_def & 1) {

  if (VAR_5 == VAR_3)
   VAR_7 = VAR_4->ext_csd.trim_timeout;
  else
   VAR_7 = VAR_4->ext_csd.hc_erase_timeout;
 } else {

  unsigned int VAR_8 = (10 << VAR_4->csd.r2w_factor);
  unsigned int VAR_9 = VAR_4->csd.taac_clks * VAR_8;
  unsigned int VAR_10;


  if (VAR_4->csd.taac_ns < 1000000)
   VAR_10 = (VAR_4->csd.taac_ns * VAR_8) / 1000;
  else
   VAR_10 = (VAR_4->csd.taac_ns / 1000) * VAR_8;





  VAR_9 <<= 1;
  VAR_10 += (VAR_9 * 1000) /
         (VAR_4->host->ios.clock / 1000);

  VAR_7 = VAR_10 / 1000;





  if (!VAR_7)
   VAR_7 = 1;
 }


 if (VAR_5 & VAR_1) {
  if (VAR_5 == VAR_2)
   VAR_7 *= VAR_4->ext_csd.sec_erase_mult;
  else
   VAR_7 *= VAR_4->ext_csd.sec_trim_mult;
 }

 VAR_7 *= VAR_6;





 if (FUNC_0(VAR_4->host) && VAR_7 < 1000)
  VAR_7 = 1000;

 return VAR_7;
}
