
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tda8290_priv {int i2c_props; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (int *,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct tda8290_priv *VAR_2 = VAR_0->analog_demod_priv;

 unsigned char VAR_3 = 0x26;
 unsigned char VAR_4;

 FUNC_0(&VAR_2->i2c_props, &VAR_3, 1, &VAR_4, 1);
 *VAR_1 = (VAR_4 & 0x01) ? 65535 : 0;
 return 0;
}
