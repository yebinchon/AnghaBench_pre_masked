
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {int tuner_type; int has_radio; int audio_mode_gpio; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bttv *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = VAR_1, VAR_11;

 FUNC_0(0xffffff, 0);
 FUNC_3(8);
 VAR_4 = FUNC_1();
 VAR_11 = (VAR_4 & 0x0f0000) >> 16;
 switch (VAR_11) {
 case 0x0:
  VAR_10 = 2;
  break;
 case 0x2:
  VAR_10 = 39;
  break;
 case 0x4:
  VAR_10 = 5;
  break;
 case 0x6:
  VAR_10 = 37;
  break;
 case 0xC:
  VAR_10 = 3;
  break;
 default:
  FUNC_2("%d: FlyVideo_gpio: unknown tuner type\n", VAR_3->c.nr);
  break;
 }

 VAR_5 = VAR_4 & 0x800000;
 VAR_6 = VAR_4 & 0x400000;


 VAR_7 = !(VAR_4 & 0x008000);
 VAR_9 = !(VAR_4 & 0x004000);
 VAR_8 = !(VAR_4 & 0x002000);



 if (VAR_7)
  VAR_10 = VAR_0;

 FUNC_2("%d: FlyVideo Radio=%s RemoteControl=%s Tuner=%d gpio=0x%06x\n",
  VAR_3->c.nr, VAR_6 ? "yes" : "no",
  VAR_5 ? "yes" : "no", VAR_10, VAR_4);
 FUNC_2("%d: FlyVideo  LR90=%s tda9821/tda9820=%s capture_only=%s\n",
  VAR_3->c.nr, VAR_8 ? "yes" : "no",
  VAR_9 ? "yes" : "no",
  VAR_7 ? "yes" : "no");

 if (VAR_10 != VAR_1)
  VAR_3->tuner_type = VAR_10;
 VAR_3->has_radio = VAR_6;




 if (VAR_9)
  VAR_3->audio_mode_gpio = VAR_2;

}
