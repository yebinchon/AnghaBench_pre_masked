
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5767_priv {int i2c_props; } ;
struct dvb_frontend {struct tea5767_priv* tuner_priv; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_6)
{
 unsigned char VAR_7[5];
 struct tea5767_priv *VAR_8 = VAR_6->tuner_priv;
 unsigned VAR_9, VAR_10;

 VAR_9 = (87500 * 4 + 700 + 225 + 25) / 50;
 VAR_7[0] = (VAR_9 >> 8) & 0x3f;
 VAR_7[1] = VAR_9 & 0xff;
 VAR_7[2] = VAR_2;
 VAR_7[3] = VAR_3 | VAR_0 |
      VAR_5 | VAR_1 | VAR_4;
 VAR_7[4] = 0;

 if (5 != (VAR_10 = FUNC_0(&VAR_8->i2c_props, VAR_7, 5)))
  FUNC_1("i2c i/o error: rc == %d (should be 5)\n", VAR_10);

 return 0;
}
