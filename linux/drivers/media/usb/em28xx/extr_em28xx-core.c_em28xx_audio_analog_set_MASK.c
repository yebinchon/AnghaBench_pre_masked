
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ ac97; } ;
struct TYPE_6__ {int xclk; } ;
struct em28xx {scalar_t__ int_audio_type; int volume; int ctl_aoutput; TYPE_3__* intf; scalar_t__ mute; TYPE_2__ audio_mode; TYPE_1__ board; } ;
struct TYPE_9__ {int mux; int reg; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*,int ,int) ;
 int FUNC_5 (struct em28xx*,int ,int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct em28xx *VAR_10)
{
 int VAR_11, VAR_12;
 u8 VAR_13;

 if (VAR_10->int_audio_type == VAR_5)
  return 0;





 if (VAR_10->audio_mode.ac97 != VAR_6) {

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
   VAR_11 = FUNC_4(VAR_10, VAR_9[VAR_12].reg, 0x8000);
   if (VAR_11 < 0)
    FUNC_2(&VAR_10->intf->dev,
      "couldn't setup AC97 register %d\n",
      VAR_9[VAR_12].reg);
  }
 }

 VAR_13 = VAR_10->board.xclk & 0x7f;
 if (!VAR_10->mute)
  VAR_13 |= VAR_8;

 VAR_11 = FUNC_5(VAR_10, VAR_7, VAR_13);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_6(10000, 11000);


 VAR_11 = FUNC_3(VAR_10);


 if (VAR_10->audio_mode.ac97 != VAR_6) {
  int VAR_14;

  FUNC_4(VAR_10, VAR_2, 0x4200);
  FUNC_4(VAR_10, VAR_0, 0x0031);
  FUNC_4(VAR_10, VAR_1, 0xbb80);


  VAR_14 = (0x1f - VAR_10->volume) | ((0x1f - VAR_10->volume) << 8);


  if (VAR_10->mute)
   VAR_14 |= 0x8000;


  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
   if (VAR_10->ctl_aoutput & VAR_9[VAR_12].mux)
    VAR_11 = FUNC_4(VAR_10, VAR_9[VAR_12].reg,
       VAR_14);
   if (VAR_11 < 0)
    FUNC_2(&VAR_10->intf->dev,
      "couldn't setup AC97 register %d\n",
      VAR_9[VAR_12].reg);
  }

  if (VAR_10->ctl_aoutput & VAR_4) {
   int VAR_15 = FUNC_1(VAR_10->ctl_aoutput);





   VAR_15 |= (VAR_15 << 8);

   FUNC_4(VAR_10, VAR_3, VAR_15);
  }
 }

 return VAR_11;
}
