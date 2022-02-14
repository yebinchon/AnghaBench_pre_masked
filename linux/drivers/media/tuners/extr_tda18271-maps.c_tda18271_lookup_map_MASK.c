
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tda18271_priv {TYPE_1__* maps; } ;
struct tda18271_map {int rfmax; int val; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef enum tda18271_map_type { ____Placeholder_tda18271_map_type } tda18271_map_type ;
struct TYPE_2__ {struct tda18271_map* rf_cal_dc_over_dt; struct tda18271_map* ir_measure; struct tda18271_map* rf_cal; struct tda18271_map* gain_taper; struct tda18271_map* rf_band; struct tda18271_map* rf_cal_kmco; struct tda18271_map* bp_filter; } ;



 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(struct dvb_frontend *VAR_2,
   enum tda18271_map_type VAR_3,
   u32 *VAR_4, u8 *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_2->tuner_priv;
 struct tda18271_map *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 char *VAR_9;
 int VAR_10 = 0;

 FUNC_0(!VAR_6->maps);

 switch (VAR_3) {
 case 134:
  VAR_7 = VAR_6->maps->bp_filter;
  VAR_9 = "bp_filter";
  break;
 case 128:
  VAR_7 = VAR_6->maps->rf_cal_kmco;
  VAR_9 = "km";
  break;
 case 131:
  VAR_7 = VAR_6->maps->rf_band;
  VAR_9 = "rf_band";
  break;
 case 133:
  VAR_7 = VAR_6->maps->gain_taper;
  VAR_9 = "gain_taper";
  break;
 case 130:
  VAR_7 = VAR_6->maps->rf_cal;
  VAR_9 = "rf_cal";
  break;
 case 132:
  VAR_7 = VAR_6->maps->ir_measure;
  VAR_9 = "ir_measure";
  break;
 case 129:
  VAR_7 = VAR_6->maps->rf_cal_dc_over_dt;
  VAR_9 = "rf_cal_dc_over_dt";
  break;
 default:

  VAR_9 = "undefined";
  break;
 }

 if (!VAR_7) {
  FUNC_2("%s map is not set!\n", VAR_9);
  VAR_10 = -VAR_0;
  goto fail;
 }

 while ((VAR_7[VAR_8].rfmax * 1000) < *VAR_4) {
  if (VAR_7[VAR_8 + 1].rfmax == 0) {
   FUNC_1("%s: frequency (%d) out of range\n",
    VAR_9, *VAR_4);
   VAR_10 = -VAR_1;
   break;
  }
  VAR_8++;
 }
 *VAR_5 = VAR_7[VAR_8].val;

 FUNC_1("(%d) %s: 0x%02x\n", VAR_8, VAR_9, *VAR_5);
fail:
 return VAR_10;
}
