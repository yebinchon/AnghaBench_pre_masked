
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int nr; } ;
struct TYPE_3__ {int wren; int most; int clk; int data; } ;
struct bttv {int has_radio; int has_tea575x; int tuner_type; TYPE_2__ c; void* tda9887_conf; TYPE_1__ tea_gpio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bttv*,int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (char*,int ,int,char*,char*,...) ;
 int FUNC_4 (struct bttv*) ;

__attribute__((used)) static void FUNC_5(struct bttv *VAR_10)
{
 int VAR_11,VAR_12,VAR_13;
 char *VAR_14;

 FUNC_1(0xffffff, 0);
 VAR_13 = FUNC_2();
 VAR_11 = ((VAR_13>>10) & 63) -1;
 VAR_12 = FUNC_0(VAR_10, VAR_4, "MSP34xx");
 if (VAR_11 < 32) {
  VAR_10->tuner_type = VAR_9[VAR_11];
  if (0 == (VAR_13 & 0x20)) {
   VAR_10->has_radio = 1;
   if (!VAR_8[VAR_11]) {
    VAR_10->has_tea575x = 1;
    VAR_10->tea_gpio.wren = 6;
    VAR_10->tea_gpio.most = 7;
    VAR_10->tea_gpio.clk = 8;
    VAR_10->tea_gpio.data = 9;
    FUNC_4(VAR_10);
   }
  } else {
   VAR_10->has_radio = 0;
  }
  if (-1 != VAR_12) {
   if (VAR_10->c.type == VAR_0)
    VAR_10->c.type = VAR_1;
   if (VAR_10->c.type == VAR_2)
    VAR_10->c.type = VAR_3;
  }
  FUNC_3("%d: miro: id=%d tuner=%d radio=%s stereo=%s\n",
   VAR_10->c.nr, VAR_11+1, VAR_10->tuner_type,
   !VAR_10->has_radio ? "no" :
   (VAR_10->has_tea575x ? "tea575x" : "fmtuner"),
   (-1 == VAR_12) ? "no" : "yes");
 } else {

  VAR_11 = 63 - VAR_11;
  VAR_10->has_radio = 0;
  switch (VAR_11) {
  case 1:
   VAR_14 = "PAL / mono";
   VAR_10->tda9887_conf = VAR_5;
   break;
  case 2:
   VAR_14 = "PAL+SECAM / stereo";
   VAR_10->has_radio = 1;
   VAR_10->tda9887_conf = VAR_6;
   break;
  case 3:
   VAR_14 = "NTSC / stereo";
   VAR_10->has_radio = 1;
   VAR_10->tda9887_conf = VAR_6;
   break;
  case 4:
   VAR_14 = "PAL+SECAM / mono";
   VAR_10->tda9887_conf = VAR_6;
   break;
  case 5:
   VAR_14 = "NTSC / mono";
   VAR_10->tda9887_conf = VAR_5;
   break;
  case 6:
   VAR_14 = "NTSC / stereo";
   VAR_10->tda9887_conf = VAR_5;
   break;
  case 7:
   VAR_14 = "PAL / stereo";
   VAR_10->tda9887_conf = VAR_5;
   break;
  default:
   VAR_14 = "oops: unknown card";
   break;
  }
  if (-1 != VAR_12)
   VAR_10->c.type = VAR_3;
  FUNC_3("%d: pinnacle/mt: id=%d info=\"%s\" radio=%s\n",
   VAR_10->c.nr, VAR_11, VAR_14, VAR_10->has_radio ? "yes" : "no");
  VAR_10->tuner_type = VAR_7;
 }
}
