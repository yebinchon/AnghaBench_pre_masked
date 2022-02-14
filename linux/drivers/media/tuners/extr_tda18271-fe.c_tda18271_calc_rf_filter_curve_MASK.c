
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda18271_priv {int tm_rfcal; TYPE_1__* rf_cal_state; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
struct TYPE_2__ {int rfmax; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_0)
{
 struct tda18271_priv *VAR_1 = VAR_0->tuner_priv;
 unsigned int VAR_2;
 int VAR_3;

 FUNC_5("performing RF tracking filter calibration\n");


 FUNC_0(200);

 VAR_3 = FUNC_1(VAR_0);
 if (FUNC_4(VAR_3))
  goto fail;


 for (VAR_2 = 0; VAR_1->rf_cal_state[VAR_2].rfmax != 0; VAR_2++) {
  VAR_3 =
  FUNC_3(VAR_0, 1000 *
        VAR_1->rf_cal_state[VAR_2].rfmax);
  if (FUNC_4(VAR_3))
   goto fail;
 }

 VAR_1->tm_rfcal = FUNC_2(VAR_0);
fail:
 return VAR_3;
}
