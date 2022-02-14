
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8290_priv {int i2c_props; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct tda8290_priv *VAR_2 = VAR_0->analog_demod_priv;
 unsigned char VAR_3[] = { 0x44, 0x00 };
 unsigned char VAR_4[] = { 0x46, 0x00 };

 FUNC_1(&VAR_2->i2c_props,
     &VAR_3[0], 1, &VAR_3[1], 1);
 FUNC_1(&VAR_2->i2c_props,
     &VAR_4[0], 1, &VAR_4[1], 1);

 VAR_3[1] &= 0xf0;

 if (VAR_1) {
  VAR_3[1] |= 0x01;
  VAR_4[1] &= 0xfe;
 }
 FUNC_0(&VAR_2->i2c_props, VAR_3, 2);
 FUNC_0(&VAR_2->i2c_props, VAR_4, 2);
}
