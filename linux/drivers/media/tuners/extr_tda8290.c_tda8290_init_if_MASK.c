
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ config; } ;
struct tda8290_priv {int i2c_props; TYPE_1__ cfg; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_2)
{
 struct tda8290_priv *VAR_3 = VAR_2->analog_demod_priv;

 static unsigned char VAR_4[] = { 0x30, 0x6F };
 static unsigned char VAR_5[] = { 0x20, 0x01 };
 static unsigned char VAR_6[] = { 0x20, 0x0B };

 if ((VAR_3->cfg.config == VAR_1) ||
     (VAR_3->cfg.config == VAR_0))
  FUNC_0(&VAR_3->i2c_props, VAR_5, 2);
 else
  FUNC_0(&VAR_3->i2c_props, VAR_6, 2);
 FUNC_0(&VAR_3->i2c_props, VAR_4, 2);
}
