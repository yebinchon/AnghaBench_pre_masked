
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int ac97; } ;
struct em28xx {scalar_t__ chip_id; scalar_t__ usb_audio_type; TYPE_2__* intf; TYPE_1__ audio_mode; void* int_audio_type; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;

 int VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*,int ) ;
 int FUNC_4 (struct em28xx*,int ) ;

int FUNC_5(struct em28xx *VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23 = 0;
 u8 VAR_24;

 if (VAR_18->chip_id == VAR_6 ||
     VAR_18->chip_id == VAR_7 ||
     VAR_18->chip_id == VAR_3 ||
     VAR_18->chip_id == VAR_4) {

  VAR_18->int_audio_type = VAR_14;
  VAR_18->usb_audio_type = VAR_16;
  return 0;
 }


 VAR_22 = FUNC_4(VAR_18, VAR_15);
 FUNC_0(&VAR_18->intf->dev, "Config register raw data: 0x%02x\n", VAR_22);
 if (VAR_22 < 0) {

  VAR_18->int_audio_type = VAR_12;
 } else if ((VAR_22 & VAR_11) == 0x00) {

  VAR_18->int_audio_type = VAR_14;
  VAR_18->usb_audio_type = VAR_16;
  return 0;
 } else if ((VAR_22 & VAR_11) != VAR_10) {
  VAR_18->int_audio_type = VAR_13;
  if (VAR_18->chip_id < VAR_5 &&
      (VAR_22 & VAR_11) ==
      VAR_8)
   VAR_24 = 1;
  else if (VAR_18->chip_id >= VAR_5 &&
    (VAR_22 & VAR_11) ==
    VAR_9)
   VAR_24 = 5;
  else
   VAR_24 = 3;
  FUNC_0(&VAR_18->intf->dev, "I2S Audio (%d sample rate(s))\n",
    VAR_24);

  VAR_18->audio_mode.ac97 = 128;
  goto init_audio;
 } else {
  VAR_18->int_audio_type = VAR_12;
 }

 VAR_18->audio_mode.ac97 = 130;

 VAR_19 = FUNC_3(VAR_18, VAR_1);
 if (VAR_19 < 0) {





  FUNC_1(&VAR_18->intf->dev,
    "AC97 chip type couldn't be determined\n");
  VAR_18->audio_mode.ac97 = 128;
  if (VAR_18->usb_audio_type == VAR_17)
   VAR_18->usb_audio_type = VAR_16;
  VAR_18->int_audio_type = VAR_14;
  goto init_audio;
 }

 VAR_20 = FUNC_3(VAR_18, VAR_2);
 if (VAR_20 < 0)
  goto init_audio;

 VAR_23 = VAR_19 << 16 | VAR_20;
 FUNC_1(&VAR_18->intf->dev, "AC97 vendor ID = 0x%08x\n", VAR_23);

 VAR_21 = FUNC_3(VAR_18, VAR_0);
 if (VAR_21 < 0)
  goto init_audio;

 FUNC_1(&VAR_18->intf->dev, "AC97 features = 0x%04x\n", VAR_21);


 if ((VAR_23 == 0xffffffff || VAR_23 == 0x83847650) && VAR_21 == 0x6a90)
  VAR_18->audio_mode.ac97 = 131;
 else if ((VAR_23 >> 8) == 0x838476)
  VAR_18->audio_mode.ac97 = 129;

init_audio:

 switch (VAR_18->audio_mode.ac97) {
 case 128:
  FUNC_0(&VAR_18->intf->dev, "No AC97 audio processor\n");
  break;
 case 131:
  FUNC_0(&VAR_18->intf->dev,
    "Empia 202 AC97 audio processor detected\n");
  break;
 case 129:
  FUNC_0(&VAR_18->intf->dev,
    "Sigmatel audio processor detected (stac 97%02x)\n",
    VAR_23 & 0xff);
  break;
 case 130:
  FUNC_1(&VAR_18->intf->dev,
    "Unknown AC97 audio processor detected!\n");
  break;
 default:
  break;
 }

 return FUNC_2(VAR_18);
}
