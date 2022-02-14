
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xtal_freq; scalar_t__ pllref; scalar_t__ deemph_75; scalar_t__ japan_band; scalar_t__ soft_mute; scalar_t__ st_noise; scalar_t__ high_cut; scalar_t__ port2; scalar_t__ port1; } ;
struct tea5767_priv {unsigned int frequency; int i2c_props; TYPE_1__ ctrl; } ;
struct dvb_frontend {struct tea5767_priv* tuner_priv; } ;
struct analog_parameters {unsigned int frequency; scalar_t__ audmode; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;


 unsigned char VAR_2 ;
 unsigned char VAR_3 ;


 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct tea5767_priv*,unsigned char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_13,
     struct analog_parameters *VAR_14)
{
 struct tea5767_priv *VAR_15 = VAR_13->tuner_priv;
 unsigned int VAR_16 = VAR_14->frequency;
 unsigned char VAR_17[5];
 unsigned VAR_18;
 int VAR_19;

 FUNC_1("radio freq = %d.%03d MHz\n", VAR_16/16000,(VAR_16/16)%1000);

 VAR_17[2] = 0;

 if (VAR_15->ctrl.port1)
  VAR_17[2] |= VAR_6;

 if (VAR_14->audmode == VAR_11) {
  FUNC_1("TEA5767 set to mono\n");
  VAR_17[2] |= VAR_4;
 } else {
  FUNC_1("TEA5767 set to stereo\n");
 }


 VAR_17[3] = 0;

 if (VAR_15->ctrl.port2)
  VAR_17[3] |= VAR_7;

 if (VAR_15->ctrl.high_cut)
  VAR_17[3] |= VAR_1;

 if (VAR_15->ctrl.st_noise)
  VAR_17[3] |= VAR_9;

 if (VAR_15->ctrl.soft_mute)
  VAR_17[3] |= VAR_8;

 if (VAR_15->ctrl.japan_band)
  VAR_17[3] |= VAR_3;

 VAR_17[4] = 0;

 if (VAR_15->ctrl.deemph_75)
  VAR_17[4] |= VAR_0;

 if (VAR_15->ctrl.pllref)
  VAR_17[4] |= VAR_5;





 switch (VAR_15->ctrl.xtal_freq) {
 case 131:
  FUNC_1("radio HIGH LO inject xtal @ 13 MHz\n");
  VAR_17[2] |= VAR_2;
  VAR_18 = (VAR_16 * (4000 / 16) + 700000 + 225000 + 25000) / 50000;
  break;
 case 129:
  FUNC_1("radio LOW LO inject xtal @ 13 MHz\n");

  VAR_18 = (VAR_16 * (4000 / 16) - 700000 - 225000 + 25000) / 50000;
  break;
 case 128:
  FUNC_1("radio LOW LO inject xtal @ 32,768 MHz\n");
  VAR_17[3] |= VAR_10;

  VAR_18 = ((VAR_16 * (4000 / 16) - 700000 - 225000) + 16384) >> 15;
  break;
 case 130:
 default:
  FUNC_1("radio HIGH LO inject xtal @ 32,768 MHz\n");

  VAR_17[2] |= VAR_2;
  VAR_17[3] |= VAR_10;
  VAR_18 = ((VAR_16 * (4000 / 16) + 700000 + 225000) + 16384) >> 15;
  break;
 }
 VAR_17[0] = (VAR_18 >> 8) & 0x3f;
 VAR_17[1] = VAR_18 & 0xff;

 if (5 != (VAR_19 = FUNC_3(&VAR_15->i2c_props, VAR_17, 5)))
  FUNC_4("i2c i/o error: rc == %d (should be 5)\n", VAR_19);

 if (VAR_12) {
  if (5 != (VAR_19 = FUNC_2(&VAR_15->i2c_props, VAR_17, 5)))
   FUNC_4("i2c i/o error: rc == %d (should be 5)\n", VAR_19);
  else
   FUNC_0(VAR_15, VAR_17);
 }

 VAR_15->frequency = VAR_16 * 125 / 2;

 return 0;
}
