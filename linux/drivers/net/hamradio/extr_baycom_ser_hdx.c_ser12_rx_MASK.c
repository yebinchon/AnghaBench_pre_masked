
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int base_addr; } ;
struct TYPE_6__ {int dcd_shreg; unsigned char last_sample; int dcd_sum0; scalar_t__ dcd_sum1; scalar_t__ dcd_sum2; int interm_sample; unsigned char last_rxbit; void* dcd_time; } ;
struct TYPE_5__ {int shreg; TYPE_3__ ser12; } ;
struct TYPE_4__ {int cur_pllcorr; } ;
struct baycom_state {int opt_dcd; TYPE_2__ modem; int hdrv; TYPE_1__ debug_vals; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct baycom_state*) ;
 int FUNC_3 (int *,unsigned char) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct net_device*,int) ;

__attribute__((used)) static inline void FUNC_9(struct net_device *VAR_0, struct baycom_state *VAR_1)
{
 unsigned char VAR_2;



 VAR_2 = FUNC_6(FUNC_1(VAR_0->base_addr)) & 0x10;
 FUNC_3(&VAR_1->hdrv, VAR_2);
 VAR_1->modem.ser12.dcd_shreg = (VAR_1->modem.ser12.dcd_shreg << 1) |
  (VAR_2 != VAR_1->modem.ser12.last_sample);
 VAR_1->modem.ser12.last_sample = VAR_2;
 if(VAR_1->modem.ser12.dcd_shreg & 1) {
  if (!VAR_1->opt_dcd) {
   unsigned int VAR_3, VAR_4;

   VAR_3 = VAR_4 = 0;
   VAR_3 += ((VAR_1->modem.ser12.dcd_shreg >> 1) & 1);
   if (!(VAR_1->modem.ser12.dcd_shreg & 0x7ffffffe))
    VAR_3 += 2;
   VAR_4 += ((VAR_1->modem.ser12.dcd_shreg >> 2) & 1);
   VAR_4 += ((VAR_1->modem.ser12.dcd_shreg >> 3) & 1);
   VAR_4 += ((VAR_1->modem.ser12.dcd_shreg >> 4) & 1);

   VAR_1->modem.ser12.dcd_sum0 += 16*VAR_3 - VAR_4;
  } else
   VAR_1->modem.ser12.dcd_sum0--;
 }
 if(!VAR_1->modem.ser12.dcd_time) {
  FUNC_5(&VAR_1->hdrv, (VAR_1->modem.ser12.dcd_sum0 +
        VAR_1->modem.ser12.dcd_sum1 +
        VAR_1->modem.ser12.dcd_sum2) < 0);
  VAR_1->modem.ser12.dcd_sum2 = VAR_1->modem.ser12.dcd_sum1;
  VAR_1->modem.ser12.dcd_sum1 = VAR_1->modem.ser12.dcd_sum0;

  VAR_1->modem.ser12.dcd_sum0 = 2;
  VAR_1->modem.ser12.dcd_time = FUNC_2(VAR_1);
 }
 VAR_1->modem.ser12.dcd_time--;
 if (!VAR_1->opt_dcd) {



  if (VAR_1->modem.ser12.interm_sample) {



   FUNC_8(VAR_0, 4);
  } else {



   switch (VAR_1->modem.ser12.dcd_shreg & 7) {
   case 1:
    FUNC_8(VAR_0, 5);



    break;
   case 4:
    FUNC_8(VAR_0, 3);



    break;
   default:
    FUNC_8(VAR_0, 4);
    break;
   }
   VAR_1->modem.shreg >>= 1;
   if (VAR_1->modem.ser12.last_sample ==
       VAR_1->modem.ser12.last_rxbit)
    VAR_1->modem.shreg |= 0x10000;
   VAR_1->modem.ser12.last_rxbit =
    VAR_1->modem.ser12.last_sample;
  }
  if (++VAR_1->modem.ser12.interm_sample >= 3)
   VAR_1->modem.ser12.interm_sample = 0;



  if (VAR_1->modem.ser12.dcd_shreg & 1) {
   unsigned int VAR_5, VAR_6;

   VAR_5 = VAR_6 = 0;
   VAR_5 += ((VAR_1->modem.ser12.dcd_shreg >> 1) & 1);
   VAR_5 += (!(VAR_1->modem.ser12.dcd_shreg & 0x7ffffffe))
    << 1;
   VAR_6 += ((VAR_1->modem.ser12.dcd_shreg >> 2) & 1);
   VAR_6 += ((VAR_1->modem.ser12.dcd_shreg >> 3) & 1);
   VAR_6 += ((VAR_1->modem.ser12.dcd_shreg >> 4) & 1);

   VAR_1->modem.ser12.dcd_sum0 += 16*VAR_5 - VAR_6;
  }
 } else {



  if (VAR_1->modem.ser12.interm_sample) {



   FUNC_8(VAR_0, 6);
  } else {



   switch (VAR_1->modem.ser12.dcd_shreg & 3) {
   case 1:
    FUNC_8(VAR_0, 7);



    break;
   case 2:
    FUNC_8(VAR_0, 5);



    break;
   default:
    FUNC_8(VAR_0, 6);
    break;
   }
   VAR_1->modem.shreg >>= 1;
   if (VAR_1->modem.ser12.last_sample ==
       VAR_1->modem.ser12.last_rxbit)
    VAR_1->modem.shreg |= 0x10000;
   VAR_1->modem.ser12.last_rxbit =
    VAR_1->modem.ser12.last_sample;
  }
  VAR_1->modem.ser12.interm_sample = !VAR_1->modem.ser12.interm_sample;



  VAR_1->modem.ser12.dcd_sum0 -= (VAR_1->modem.ser12.dcd_shreg & 1);
 }
 FUNC_7(0x0d, FUNC_0(VAR_0->base_addr));
 if (VAR_1->modem.shreg & 1) {
  FUNC_4(&VAR_1->hdrv, VAR_1->modem.shreg >> 1);
  VAR_1->modem.shreg = 0x10000;
 }
 if(!VAR_1->modem.ser12.dcd_time) {
  if (VAR_1->opt_dcd & 1)
   FUNC_5(&VAR_1->hdrv, !((FUNC_6(FUNC_1(VAR_0->base_addr)) ^ VAR_1->opt_dcd) & 0x80));
  else
   FUNC_5(&VAR_1->hdrv, (VAR_1->modem.ser12.dcd_sum0 +
         VAR_1->modem.ser12.dcd_sum1 +
         VAR_1->modem.ser12.dcd_sum2) < 0);
  VAR_1->modem.ser12.dcd_sum2 = VAR_1->modem.ser12.dcd_sum1;
  VAR_1->modem.ser12.dcd_sum1 = VAR_1->modem.ser12.dcd_sum0;

  VAR_1->modem.ser12.dcd_sum0 = 2;
  VAR_1->modem.ser12.dcd_time = FUNC_2(VAR_1);
 }
 VAR_1->modem.ser12.dcd_time--;
}
