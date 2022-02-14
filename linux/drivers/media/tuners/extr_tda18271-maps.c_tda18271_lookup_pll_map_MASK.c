
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tda18271_priv {TYPE_1__* maps; } ;
struct tda18271_pll_map {int lomax; int d; int pd; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef enum tda18271_map_type { ____Placeholder_tda18271_map_type } tda18271_map_type ;
struct TYPE_2__ {struct tda18271_pll_map* cal_pll; struct tda18271_pll_map* main_pll; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(struct dvb_frontend *VAR_2,
       enum tda18271_map_type VAR_3,
       u32 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 struct tda18271_priv *VAR_7 = VAR_2->tuner_priv;
 struct tda18271_pll_map *VAR_8 = ((void*)0);
 unsigned int VAR_9 = 0;
 char *VAR_10;
 int VAR_11 = 0;

 FUNC_0(!VAR_7->maps);

 switch (VAR_3) {
 case 128:
  VAR_8 = VAR_7->maps->main_pll;
  VAR_10 = "main_pll";
  break;
 case 129:
  VAR_8 = VAR_7->maps->cal_pll;
  VAR_10 = "cal_pll";
  break;
 default:

  VAR_10 = "undefined";
  break;
 }

 if (!VAR_8) {
  FUNC_2("%s map is not set!\n", VAR_10);
  VAR_11 = -VAR_0;
  goto fail;
 }

 while ((VAR_8[VAR_9].lomax * 1000) < *VAR_4) {
  if (VAR_8[VAR_9 + 1].lomax == 0) {
   FUNC_1("%s: frequency (%d) out of range\n",
    VAR_10, *VAR_4);
   VAR_11 = -VAR_1;
   break;
  }
  VAR_9++;
 }
 *VAR_5 = VAR_8[VAR_9].pd;
 *VAR_6 = VAR_8[VAR_9].d;

 FUNC_1("(%d) %s: post div = 0x%02x, div = 0x%02x\n",
  VAR_9, VAR_10, *VAR_5, *VAR_6);
fail:
 return VAR_11;
}
