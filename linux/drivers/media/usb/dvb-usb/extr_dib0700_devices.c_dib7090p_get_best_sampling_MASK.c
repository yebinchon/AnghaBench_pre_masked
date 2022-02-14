
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;
struct dibx090p_best_adc {int pll_loopdiv; int pll_prediv; unsigned long timf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1 , struct dibx090p_best_adc *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 1, VAR_7 = 1;

 u16 VAR_8 = 12000;
 u32 VAR_9 = 1900;
 u32 VAR_10 = 20000;
 u32 VAR_11 = 76000;
 u32 VAR_12 = 69500;
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16 = 0;

 VAR_2->pll_loopdiv = VAR_5;
 VAR_2->pll_prediv = VAR_4;
 VAR_2->timf = 0;

 FUNC_0("bandwidth = %d fdem_min =%d", VAR_1->dtv_property_cache.bandwidth_hz, VAR_12);


 while ((VAR_8/VAR_7) >= VAR_9)
  VAR_7++;

 VAR_7--;
 VAR_6 = VAR_7;
 while ((VAR_8/VAR_6) <= VAR_10) {
  VAR_6--;
  if (VAR_6 == 1)
   break;
 }
 FUNC_0("MIN prediv = %d : MAX prediv = %d", VAR_6, VAR_7);

 VAR_6 = 2;

 for (VAR_4 = VAR_6 ; VAR_4 < VAR_7; VAR_4++) {
  VAR_13 = VAR_8 / VAR_4;
  if (VAR_13 > VAR_9 && VAR_13 < VAR_10) {
   for (VAR_5 = 1 ; VAR_5 < 64 ; VAR_5++) {
    VAR_15 = ((VAR_8/VAR_4) * VAR_5);
    VAR_14 = VAR_15 / 4;


    if ((VAR_15 >= VAR_12) && (VAR_15 <= VAR_11) && (VAR_14 >= VAR_1->dtv_property_cache.bandwidth_hz/1000)) {
     VAR_3 = 0;

     for (VAR_16 = (VAR_1->dtv_property_cache.frequency / (1000*VAR_14)) ; VAR_16 <= ((VAR_1->dtv_property_cache.frequency / (1000*VAR_14))+1) ; VAR_16++) {
      if (((VAR_14*VAR_16) >= ((VAR_1->dtv_property_cache.frequency/1000) - (VAR_1->dtv_property_cache.bandwidth_hz/2000))) && ((VAR_14*VAR_16) <= ((VAR_1->dtv_property_cache.frequency/1000) + (VAR_1->dtv_property_cache.bandwidth_hz/2000)))) {
       VAR_3 = 1;
       break;
      }
     }

     if (!VAR_3) {
      VAR_2->pll_loopdiv = VAR_5;
      VAR_2->pll_prediv = VAR_4;
      VAR_2->timf = 2396745143UL/VAR_15*(1 << 9);
      VAR_2->timf += ((2396745143UL%VAR_15) << 9)/VAR_15;
      FUNC_0("loopdiv=%i prediv=%i timf=%i", VAR_5, VAR_4, VAR_2->timf);
      break;
     }
    }
   }
  }
  if (!VAR_3)
   break;
 }


 if (VAR_2->pll_loopdiv == 0 && VAR_2->pll_prediv == 0)
  return -VAR_0;
 else
  return 0;
}
