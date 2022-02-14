
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5761_priv {unsigned int frequency; int i2c_props; scalar_t__ standby; } ;
struct dvb_frontend {struct tea5761_priv* tuner_priv; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_4,
       unsigned int VAR_5,
       bool VAR_6)
{
 struct tea5761_priv *VAR_7 = VAR_4->tuner_priv;
 unsigned int VAR_8 = VAR_5;
 unsigned char VAR_9[7] = {0, 0, 0, 0, 0, 0, 0 };
 unsigned VAR_10;
 int VAR_11;

 FUNC_1("radio freq counter %d\n", VAR_8);

 if (VAR_7->standby) {
  FUNC_1("TEA5761 set to standby mode\n");
  VAR_9[5] |= VAR_1;
 } else {
  VAR_9[4] |= VAR_2;
 }


 if (VAR_6) {
  FUNC_1("TEA5761 set to mono\n");
  VAR_9[5] |= VAR_0;
 } else {
  FUNC_1("TEA5761 set to stereo\n");
 }

 VAR_10 = (1000 * (VAR_8 * 4 / 16 + 700 + 225) ) >> 15;
 VAR_9[1] = (VAR_10 >> 8) & 0x3f;
 VAR_9[2] = VAR_10 & 0xff;

 if (VAR_3)
  FUNC_0(VAR_9);

 if (7 != (VAR_11 = FUNC_2(&VAR_7->i2c_props, VAR_9, 7)))
  FUNC_3("i2c i/o error: rc == %d (should be 5)\n", VAR_11);

 VAR_7->frequency = VAR_8 * 125 / 2;

 return 0;
}
