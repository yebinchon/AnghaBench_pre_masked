
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda18271_rf_tracking_filter_cal {scalar_t__ rf3; int rf2; int rf_a1; int rf1; int rf_b1; int rf_a2; int rf_b2; } ;
struct tda18271_priv {unsigned char* tda18271_regs; int tm_rfcal; struct tda18271_rf_tracking_filter_cal* rf_cal_state; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*,int ,int*,int*) ;
 int FUNC_2 (struct dvb_frontend*,int*,int *) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int ,int ,int ) ;
 int FUNC_5 (struct dvb_frontend*,size_t,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_2,
           u32 VAR_3)
{
 struct tda18271_priv *VAR_4 = VAR_2->tuner_priv;
 struct tda18271_rf_tracking_filter_cal *VAR_5 = VAR_4->rf_cal_state;
 unsigned char *VAR_6 = VAR_4->tda18271_regs;
 int VAR_7, VAR_8;
 u8 VAR_9, VAR_10, VAR_11;
 s32 VAR_12, VAR_13;


 VAR_8 = FUNC_4(VAR_2, 0, 0, 0);
 if (FUNC_6(VAR_8))
  goto fail;


 VAR_9 = FUNC_3(VAR_2);



 FUNC_0(VAR_2, &VAR_3);
 VAR_11 = VAR_6[VAR_1];

 VAR_7 = FUNC_2(VAR_2, &VAR_3, ((void*)0));
 if (FUNC_6(VAR_7))
  return VAR_7;

 if ((0 == VAR_5[VAR_7].rf3) || (VAR_3 / 1000 < VAR_5[VAR_7].rf2)) {
  VAR_13 = VAR_5[VAR_7].rf_a1 * (s32)(VAR_3 / 1000 - VAR_5[VAR_7].rf1) +
   VAR_5[VAR_7].rf_b1 + VAR_11;
 } else {
  VAR_13 = VAR_5[VAR_7].rf_a2 * (s32)(VAR_3 / 1000 - VAR_5[VAR_7].rf2) +
   VAR_5[VAR_7].rf_b2 + VAR_11;
 }

 if (VAR_13 < 0)
  VAR_13 = 0;
 if (VAR_13 > 255)
  VAR_13 = 255;

 FUNC_1(VAR_2, VAR_0, &VAR_3, &VAR_10);


 VAR_12 = VAR_10 * (s32)(VAR_9 - VAR_4->tm_rfcal) / 1000;

 VAR_6[VAR_1] = (unsigned char)(VAR_13 + VAR_12);
 VAR_8 = FUNC_5(VAR_2, VAR_1, 1);
fail:
 return VAR_8;
}
