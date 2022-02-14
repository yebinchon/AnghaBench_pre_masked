
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int dummy; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (struct tda9887_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct tda9887_priv *VAR_2 = VAR_1->analog_demod_priv;

 FUNC_1(&VAR_0);

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_2(&VAR_0);

 VAR_1->analog_demod_priv = ((void*)0);
}
