
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int frequency; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;
struct analog_parameters {int mode; int frequency; } ;


 int VAR_0 ;



 int FUNC_0 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_1 (struct dvb_frontend*,struct analog_parameters*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
        struct analog_parameters *VAR_2)
{
 struct microtune_priv *VAR_3 = VAR_1->tuner_priv;
 int VAR_4 = -VAR_0;

 switch (VAR_2->mode) {
 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  VAR_3->frequency = VAR_2->frequency * 125 / 2;
  break;
 case 130:
 case 129:
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  VAR_3->frequency = VAR_2->frequency * 62500;
  break;
 }

 return VAR_4;
}
