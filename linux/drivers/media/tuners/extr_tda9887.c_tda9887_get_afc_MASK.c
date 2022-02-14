
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {scalar_t__ mode; int i2c_props; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;
typedef int s32 ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, s32 *VAR_2)
{
 struct tda9887_priv *VAR_3 = VAR_1->analog_demod_priv;
 static const int VAR_4[] = {
  -12500, -37500, -62500, -97500,
  -112500, -137500, -162500, -187500,
  187500, 162500, 137500, 112500,
  97500 , 62500, 37500 , 12500
 };
 __u8 VAR_5 = 0;

 if (VAR_3->mode != VAR_0)
  return 0;
 if (1 == FUNC_0(&VAR_3->i2c_props, &VAR_5, 1))
  *VAR_2 = VAR_4[(VAR_5 >> 1) & 0x0f];
 return 0;
}
