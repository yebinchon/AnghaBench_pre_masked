
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int * adap; } ;
struct tuner_simple_priv {int radio_mode; TYPE_1__ i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct tuner_simple_priv *VAR_3 = VAR_1->tuner_priv;
 int VAR_4;

 if (VAR_3->i2c_props.adap == ((void*)0) || !VAR_3->radio_mode)
  return -VAR_0;

 VAR_4 = FUNC_2(FUNC_1(VAR_1));

 *VAR_2 = VAR_4;

 FUNC_0("Signal strength: %d\n", VAR_4);

 return 0;
}
