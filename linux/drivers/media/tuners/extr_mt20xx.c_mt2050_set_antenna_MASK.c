
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int i2c_props; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0, unsigned char VAR_1)
{
 struct microtune_priv *VAR_2 = VAR_0->tuner_priv;
 unsigned char VAR_3[2];

 VAR_3[0] = 6;
 VAR_3[1] = VAR_1 ? 0x11 : 0x10;
 FUNC_1(&VAR_2->i2c_props, VAR_3, 2);
 FUNC_0("mt2050: enabled antenna connector %d\n", VAR_1);
}
