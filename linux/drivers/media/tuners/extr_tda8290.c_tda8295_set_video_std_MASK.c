
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8290_priv {int tda8290_easy_mode; int i2c_props; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_0)
{
 struct tda8290_priv *VAR_1 = VAR_0->analog_demod_priv;
 unsigned char VAR_2[] = { 0x00, VAR_1->tda8290_easy_mode };

 FUNC_2(&VAR_1->i2c_props, VAR_2, 2);

 FUNC_1(VAR_0, 1);
 FUNC_0(20);
 FUNC_1(VAR_0, 0);
}
