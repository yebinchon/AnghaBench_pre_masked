
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int i2c_props; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (struct dvb_frontend*,unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct tda9887_priv *VAR_1 = VAR_0->analog_demod_priv;
 unsigned char VAR_2[1];
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->i2c_props, VAR_2, 1);
 if (VAR_3 != 1)
  FUNC_2("i2c i/o error: rc == %d (should be 1)\n", VAR_3);
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
