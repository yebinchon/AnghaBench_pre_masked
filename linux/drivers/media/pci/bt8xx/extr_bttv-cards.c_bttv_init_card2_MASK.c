
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_7__ {int type; size_t nr; int i2c_adap; int v4l2_dev; } ;
struct TYPE_6__ {int pll_ifreq; int pll_current; void* pll_crystal; int pll_ofreq; } ;
struct TYPE_5__ {int wren; int most; int clk; int data; } ;
struct bttv {scalar_t__ tuner_type; int has_radio; int has_tea575x; int cardid; int id; int revision; int has_remote; int gpioirq; TYPE_3__ c; void* sd_tvaudio; void* sd_tda7432; void* sd_msp34xx; scalar_t__ has_saa6588; scalar_t__ audio_mode_gpio; scalar_t__ volume_gpio; scalar_t__ svhs; scalar_t__ dig; TYPE_2__ pll; TYPE_1__ tea_gpio; } ;
struct TYPE_8__ {scalar_t__ pll; scalar_t__ tuner_type; scalar_t__ video_inputs; scalar_t__ svhs; int no_tda7432; scalar_t__ msp34xx_alt; int no_msp34xx; scalar_t__ audio_mode_gpio; scalar_t__ volume_gpio; int no_gpioirq; scalar_t__ has_remote; scalar_t__ has_radio; scalar_t__ has_dig_in; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;


 unsigned short const* FUNC_0 (int const) ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (struct bttv*,int ,int) ;
 TYPE_4__* VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bttv*) ;
 int FUNC_4 (struct bttv*) ;
 int FUNC_5 (struct bttv*) ;
 int FUNC_6 (struct bttv*,int ) ;
 int FUNC_7 (struct bttv*) ;
 int FUNC_8 (struct bttv*) ;
 int FUNC_9 (struct bttv*) ;
 int FUNC_10 (struct bttv*) ;
 int FUNC_11 (struct bttv*) ;
 int FUNC_12 (struct bttv*) ;
 int FUNC_13 (struct bttv*,int ) ;
 int FUNC_14 (struct bttv*) ;
 int* VAR_14 ;
 int FUNC_15 (char*,size_t,...) ;
 int FUNC_16 (char*,size_t) ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;
 int FUNC_17 (struct bttv*) ;
 int FUNC_18 (struct bttv*) ;
 int FUNC_19 (struct bttv*) ;
 scalar_t__* VAR_18 ;
 unsigned short const* FUNC_20 () ;
 void* FUNC_21 (int *,int *,char*,int ,unsigned short const*) ;

void FUNC_22(struct bttv *VAR_19)
{
 VAR_19->tuner_type = VAR_9;

 if (VAR_2 == VAR_19->c.type) {
  FUNC_2(VAR_19,VAR_13,0xa0);
  FUNC_6(VAR_19,VAR_13);
 }

 switch (VAR_19->c.type) {
 case 156:
 case 155:
 case 140:
 case 139:

  FUNC_11(VAR_19);
  break;
 case 169:
 case 157:
 case 160:
 case 172:
 case 134:
 case 174:
 case 168:
 case 171:
 case 170:
 case 173:
 case 161:
  FUNC_3(VAR_19);
  break;
 case 166:
 case 165:
 case 164:

  FUNC_2(VAR_19,VAR_13,0xa0);
  FUNC_5(VAR_19);
  break;
 case 176:
 case 175:
  FUNC_2(VAR_19,VAR_13,0xa0);
  FUNC_1(VAR_19);
  break;
 case 138:
  FUNC_7(VAR_19);
  break;
 case 141:
  FUNC_14(VAR_19);
  break;
 case 133:
  VAR_19->has_radio = 1;
  VAR_19->has_tea575x = 1;
  VAR_19->tea_gpio.wren = 5;
  VAR_19->tea_gpio.most = 6;
  VAR_19->tea_gpio.clk = 3;
  VAR_19->tea_gpio.data = 4;
  FUNC_17(VAR_19);
  break;
 case 132:
 case 136:
  FUNC_18(VAR_19);
  break;
 case 158:
  if (VAR_19->cardid == 0x3002144f) {
   VAR_19->has_radio=1;
   FUNC_15("%d: radio detected by subsystem id (CPH05x)\n",
    VAR_19->c.nr);
  }
  break;
 case 137:
  if (VAR_19->cardid == 0x3060121a) {


   VAR_19->has_radio=0;
   VAR_19->tuner_type=VAR_8;
  }
  break;
 case 152:
 case 151:
 case 153:
 case 150:
 case 149:
 case 145:
 case 146:
 case 147:
 case 144:
 case 143:
 case 142:
 case 148:
  FUNC_2(VAR_19,VAR_13,0xa0);
  FUNC_13(VAR_19, VAR_13);
  break;
 case 163:
  FUNC_8(VAR_19);
  break;
 case 154:
  FUNC_2(VAR_19,VAR_13,0xa0);
  FUNC_12(VAR_19);
  break;
 case 159:
  FUNC_9(VAR_19);
  break;
 case 135:
  FUNC_19(VAR_19);
  break;
 case 162:
  FUNC_10(VAR_19);
  break;
 case 167:
  FUNC_4(VAR_19);
  break;
 }


 if (!(VAR_19->id==848 && VAR_19->revision==0x11)) {

  if (VAR_5 == VAR_12[VAR_19->c.type].pll) {
   VAR_19->pll.pll_ifreq=28636363;
   VAR_19->pll.pll_crystal=VAR_0;
  }
  if (VAR_6 == VAR_12[VAR_19->c.type].pll) {
   VAR_19->pll.pll_ifreq=35468950;
   VAR_19->pll.pll_crystal=VAR_1;
  }
  if (VAR_4 == VAR_12[VAR_19->c.type].pll) {
   VAR_19->pll.pll_ifreq = 14318181;
   VAR_19->pll.pll_crystal = VAR_0;
  }

  switch (VAR_14[VAR_19->c.nr]) {
  case 0:
   VAR_19->pll.pll_crystal = 0;
   VAR_19->pll.pll_ifreq = 0;
   VAR_19->pll.pll_ofreq = 0;
   break;
  case 1:
  case 28:
   VAR_19->pll.pll_ifreq = 28636363;
   VAR_19->pll.pll_ofreq = 0;
   VAR_19->pll.pll_crystal = VAR_0;
   break;
  case 2:
  case 35:
   VAR_19->pll.pll_ifreq = 35468950;
   VAR_19->pll.pll_ofreq = 0;
   VAR_19->pll.pll_crystal = VAR_1;
   break;
  case 3:
  case 14:
   VAR_19->pll.pll_ifreq = 14318181;
   VAR_19->pll.pll_ofreq = 0;
   VAR_19->pll.pll_crystal = VAR_0;
   break;
  }
 }
 VAR_19->pll.pll_current = -1;


 if (VAR_9 != VAR_12[VAR_19->c.type].tuner_type)
  if (VAR_9 == VAR_19->tuner_type)
   VAR_19->tuner_type = VAR_12[VAR_19->c.type].tuner_type;
 if (VAR_9 != VAR_18[VAR_19->c.nr])
  VAR_19->tuner_type = VAR_18[VAR_19->c.nr];

 if (VAR_19->tuner_type == VAR_7)
  FUNC_15("%d: tuner absent\n", VAR_19->c.nr);
 else if (VAR_19->tuner_type == VAR_9)
  FUNC_16("%d: tuner type unset\n", VAR_19->c.nr);
 else
  FUNC_15("%d: tuner type=%d\n", VAR_19->c.nr, VAR_19->tuner_type);

 if (VAR_11 != VAR_9) {
  FUNC_16("%d: the autoload option is obsolete\n", VAR_19->c.nr);
  FUNC_16("%d: use option msp3400, tda7432 or tvaudio to override which audio module should be used\n",
   VAR_19->c.nr);
 }

 if (VAR_9 == VAR_19->tuner_type)
  VAR_19->tuner_type = VAR_7;

 VAR_19->dig = VAR_12[VAR_19->c.type].has_dig_in ?
     VAR_12[VAR_19->c.type].video_inputs - 1 : VAR_9;
 VAR_19->svhs = VAR_12[VAR_19->c.type].svhs == VAR_3 ?
      VAR_9 : VAR_12[VAR_19->c.type].svhs;
 if (VAR_17[VAR_19->c.nr] != VAR_9)
  VAR_19->svhs = VAR_17[VAR_19->c.nr];
 if (VAR_15[VAR_19->c.nr] != VAR_9)
  VAR_19->has_remote = VAR_15[VAR_19->c.nr];

 if (VAR_12[VAR_19->c.type].has_radio)
  VAR_19->has_radio = 1;
 if (VAR_12[VAR_19->c.type].has_remote)
  VAR_19->has_remote = 1;
 if (!VAR_12[VAR_19->c.type].no_gpioirq)
  VAR_19->gpioirq = 1;
 if (VAR_12[VAR_19->c.type].volume_gpio)
  VAR_19->volume_gpio = VAR_12[VAR_19->c.type].volume_gpio;
 if (VAR_12[VAR_19->c.type].audio_mode_gpio)
  VAR_19->audio_mode_gpio = VAR_12[VAR_19->c.type].audio_mode_gpio;

 if (VAR_19->tuner_type == VAR_7)
  return;

 if (VAR_19->has_saa6588 || VAR_16[VAR_19->c.nr]) {

  static const unsigned short VAR_20[] = {
   0x20 >> 1,
   0x22 >> 1,
   128
  };
  struct v4l2_subdev *VAR_21;

  VAR_21 = FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "saa6588", 0, VAR_20);
  VAR_19->has_saa6588 = (VAR_21 != ((void*)0));
 }






 switch (VAR_10[VAR_19->c.nr]) {
 case -1:
  return;

 case 0:
  break;

 case 1: {

  static const unsigned short VAR_22[] = {
   131 >> 1,
   130 >> 1,
   128
  };

  VAR_19->sd_msp34xx = FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "msp3400", 0, VAR_22);
  if (VAR_19->sd_msp34xx)
   return;
  goto no_audio;
 }

 case 2: {

  static const unsigned short VAR_23[] = {
   129 >> 1,
   128
  };

  if (FUNC_21(&VAR_19->c.v4l2_dev,
    &VAR_19->c.i2c_adap, "tda7432", 0, VAR_23))
   return;
  goto no_audio;
 }

 case 3: {

  VAR_19->sd_tvaudio = FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "tvaudio", 0, FUNC_20());
  if (VAR_19->sd_tvaudio)
   return;
  goto no_audio;
 }

 default:
  FUNC_16("%d: unknown audiodev value!\n", VAR_19->c.nr);
  return;
 }







 if (!VAR_12[VAR_19->c.type].no_msp34xx) {
  VAR_19->sd_msp34xx = FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "msp3400",
   0, FUNC_0(131 >> 1));
 } else if (VAR_12[VAR_19->c.type].msp34xx_alt) {
  VAR_19->sd_msp34xx = FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "msp3400",
   0, FUNC_0(130 >> 1));
 }


 if (VAR_19->sd_msp34xx)
  return;


 VAR_19->sd_tvaudio = FUNC_21(&VAR_19->c.v4l2_dev,
  &VAR_19->c.i2c_adap, "tvaudio", 0, FUNC_20());
 if (VAR_19->sd_tvaudio) {


  FUNC_21(&VAR_19->c.v4l2_dev,
   &VAR_19->c.i2c_adap, "tvaudio", 0, FUNC_20());
 }


 if (!VAR_12[VAR_19->c.type].no_tda7432) {
  static const unsigned short VAR_24[] = {
   129 >> 1,
   128
  };

  VAR_19->sd_tda7432 = FUNC_21(&VAR_19->c.v4l2_dev,
    &VAR_19->c.i2c_adap, "tda7432", 0, VAR_24);
  if (VAR_19->sd_tda7432)
   return;
 }
 if (VAR_19->sd_tvaudio)
  return;

no_audio:
 FUNC_16("%d: audio absent, no audio device found!\n", VAR_19->c.nr);
}
