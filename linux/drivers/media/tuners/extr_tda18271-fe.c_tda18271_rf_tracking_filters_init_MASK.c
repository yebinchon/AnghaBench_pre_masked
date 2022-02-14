
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tda18271_rf_tracking_filter_cal {int rf1_def; int rf2_def; int rf3_def; int rf_a1; int rf_b1; int rf_a2; int rf_b2; scalar_t__ rf3; scalar_t__ rf2; scalar_t__ rf1; } ;
struct tda18271_priv {unsigned char* tda18271_regs; struct tda18271_rf_tracking_filter_cal* rf_cal_state; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef int s32 ;


 int FUNC_0 () ;



 size_t VAR_0 ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_3 (struct dvb_frontend*,scalar_t__*,int *) ;
 int FUNC_4 (struct dvb_frontend*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1, u32 VAR_2)
{
 struct tda18271_priv *VAR_3 = VAR_1->tuner_priv;
 struct tda18271_rf_tracking_filter_cal *VAR_4 = VAR_3->rf_cal_state;
 unsigned char *VAR_5 = VAR_3->tda18271_regs;
 int VAR_6, VAR_7, VAR_8;
 s32 VAR_9, VAR_10;



 u32 VAR_11[3];
 u32 VAR_12[3];
 s32 VAR_13[3];
 s32 VAR_14[3];

 VAR_8 = FUNC_3(VAR_1, &VAR_2, ((void*)0));

 if (FUNC_6(VAR_8))
  return VAR_8;

 VAR_11[0] = 1000 * VAR_4[VAR_8].rf1_def;
 VAR_11[1] = 1000 * VAR_4[VAR_8].rf2_def;
 VAR_11[2] = 1000 * VAR_4[VAR_8].rf3_def;

 for (VAR_7 = 0; VAR_7 <= 2; VAR_7++) {
  if (0 == VAR_11[VAR_7])
   return 0;
  FUNC_5("freq = %d, rf = %d\n", VAR_2, VAR_7);


  VAR_6 = FUNC_4(VAR_1, &VAR_11[VAR_7], &VAR_12[VAR_7]);
  if (FUNC_6(VAR_6))
   return VAR_6;

  FUNC_1(VAR_1, &VAR_12[VAR_7]);
  VAR_14[VAR_7] = (s32)VAR_5[VAR_0];

  if (1 == VAR_6)
   VAR_13[VAR_7] =
    (s32)FUNC_2(VAR_1, VAR_12[VAR_7]);
  else
   VAR_13[VAR_7] = VAR_14[VAR_7];

  switch (VAR_7) {
  case 0:
   VAR_4[VAR_8].rf_a1 = 0;
   VAR_4[VAR_8].rf_b1 = (VAR_13[0] - VAR_14[0]);
   VAR_4[VAR_8].rf1 = VAR_12[0] / 1000;
   break;
  case 1:
   VAR_10 = (VAR_13[1] - VAR_14[1] -
        VAR_13[0] + VAR_14[0]);
   VAR_9 = (s32)(VAR_12[1] - VAR_12[0]) / 1000;
   VAR_4[VAR_8].rf_a1 = (VAR_10 / VAR_9);
   VAR_4[VAR_8].rf2 = VAR_12[1] / 1000;
   break;
  case 2:
   VAR_10 = (VAR_13[2] - VAR_14[2] -
        VAR_13[1] + VAR_14[1]);
   VAR_9 = (s32)(VAR_12[2] - VAR_12[1]) / 1000;
   VAR_4[VAR_8].rf_a2 = (VAR_10 / VAR_9);
   VAR_4[VAR_8].rf_b2 = (VAR_13[1] - VAR_14[1]);
   VAR_4[VAR_8].rf3 = VAR_12[2] / 1000;
   break;
  default:
   FUNC_0();
  }
 }

 return 0;
}
