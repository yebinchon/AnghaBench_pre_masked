
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_simple_priv {int i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct tuner_simple_priv *VAR_3 = VAR_0->tuner_priv;
 int VAR_4;
 u8 VAR_5[2];

 VAR_5[0] = (VAR_1 & ~0x38) | 0x18;
 VAR_5[1] = VAR_2;

 FUNC_0("setting aux byte: 0x%02x 0x%02x\n", VAR_5[0], VAR_5[1]);

 VAR_4 = FUNC_1(&VAR_3->i2c_props, VAR_5, 2);
 if (2 != VAR_4)
  FUNC_2("i2c i/o error: rc == %d (should be 2)\n", VAR_4);

 return VAR_4 == 2 ? 0 : VAR_4;
}
