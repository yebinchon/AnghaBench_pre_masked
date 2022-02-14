
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec64 {int tv_nsec; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int pll_time; scalar_t__ dcd_time; int dcd_sum0; scalar_t__ dcd_sum1; scalar_t__ dcd_sum2; unsigned char last_rxbit; } ;
struct TYPE_6__ {int shreg; TYPE_2__ ser12; } ;
struct TYPE_4__ {int cur_pllcorr; } ;
struct baycom_state {int baud_us; TYPE_3__ modem; TYPE_1__ debug_vals; int hdrv; int opt_dcd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static __inline__ void FUNC_3(struct net_device *VAR_1, struct baycom_state *VAR_2, struct timespec64 *VAR_3, unsigned char VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_2->baud_us >> 3;
 int VAR_7 = VAR_2->baud_us >> 2;
 int VAR_8 = VAR_2->baud_us >> 1;

 VAR_5 = 1000000 + VAR_3->tv_nsec / VAR_0 -
     VAR_2->modem.ser12.pll_time;
 while (VAR_5 >= 500000)
  VAR_5 -= 1000000;
 while (VAR_5 >= VAR_8) {
  VAR_5 -= VAR_2->baud_us;
  VAR_2->modem.ser12.pll_time += VAR_2->baud_us;
  VAR_2->modem.ser12.dcd_time--;

  if (VAR_2->modem.shreg & 1) {
   FUNC_1(&VAR_2->hdrv, (VAR_2->modem.shreg >> 1) ^ 0xffff);
   VAR_2->modem.shreg = 0x10000;
  }

  VAR_2->modem.shreg >>= 1;
 }
 if (VAR_2->modem.ser12.dcd_time <= 0) {
  if (!VAR_2->opt_dcd)
   FUNC_2(&VAR_2->hdrv, (VAR_2->modem.ser12.dcd_sum0 +
         VAR_2->modem.ser12.dcd_sum1 +
         VAR_2->modem.ser12.dcd_sum2) < 0);
  VAR_2->modem.ser12.dcd_sum2 = VAR_2->modem.ser12.dcd_sum1;
  VAR_2->modem.ser12.dcd_sum1 = VAR_2->modem.ser12.dcd_sum0;
  VAR_2->modem.ser12.dcd_sum0 = 2;
  VAR_2->modem.ser12.dcd_time += 120;
 }
 if (VAR_2->modem.ser12.last_rxbit != VAR_4) {
  VAR_2->modem.ser12.last_rxbit = VAR_4;
  VAR_2->modem.shreg |= 0x10000;

  if (VAR_5 > 0)
   VAR_2->modem.ser12.pll_time += VAR_6;
  else
   VAR_2->modem.ser12.pll_time += 1000000 - VAR_6;

  if (FUNC_0(VAR_5) > VAR_7)
   VAR_2->modem.ser12.dcd_sum0 += 4;
  else
   VAR_2->modem.ser12.dcd_sum0--;



 }
 while (VAR_2->modem.ser12.pll_time >= 1000000)
  VAR_2->modem.ser12.pll_time -= 1000000;
}
