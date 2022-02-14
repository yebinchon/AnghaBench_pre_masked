
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tveeprom {int audio_processor; scalar_t__ tuner_type; } ;
struct TYPE_5__ {scalar_t__ valid; int tuner_gpio; int name; } ;
struct em28xx {scalar_t__ em28xx_sensor; int model; int i2s_speed; int has_msp34xx; scalar_t__* amux_map; scalar_t__ tuner_type; int * eedata; TYPE_2__* intf; TYPE_1__ board; scalar_t__ is_webcam; } ;
struct TYPE_8__ {scalar_t__ amux; int type; } ;
struct TYPE_7__ {scalar_t__ tuner_type; } ;
struct TYPE_6__ {int dev; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*,int ) ;
 int FUNC_5 (struct em28xx*) ;
 int FUNC_6 (struct em28xx*) ;
 int FUNC_7 (struct em28xx*,int ) ;
 int FUNC_8 (struct em28xx*) ;
 int FUNC_9 (struct em28xx*,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (struct tveeprom*,int *) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void FUNC_14(struct em28xx *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 bool VAR_13;





 if (VAR_9->is_webcam) {
  FUNC_3(VAR_9);
  if (VAR_9->em28xx_sensor == VAR_4)

   VAR_9->is_webcam = 0;
 }

 switch (VAR_9->model) {
 case 142:
 case 136:
 case 141:
  if (FUNC_5(VAR_9) < 0) {
   FUNC_1(&VAR_9->intf->dev, "Board not discovered\n");
  } else {
   FUNC_8(VAR_9);
   FUNC_6(VAR_9);
  }
  break;
 default:
  FUNC_8(VAR_9);
 }

 FUNC_2(&VAR_9->intf->dev, "Identified as %s (card=%d)\n",
   VAR_9->board.name, VAR_9->model);

 VAR_9->tuner_type = VAR_7[VAR_9->model].tuner_type;


 switch (VAR_9->model) {
 case 138:
 case 135:
 case 134:
 case 130:
 case 129:
 case 128:
 case 139:
 case 140:
 {
  struct tveeprom VAR_14;

  if (!VAR_9->eedata)
   break;





  FUNC_12(&VAR_14, VAR_9->eedata);

  VAR_9->tuner_type = VAR_14.tuner_type;

  if (VAR_14.audio_processor == VAR_6) {
   VAR_9->i2s_speed = 2048000;
   VAR_9->has_msp34xx = 1;
  }
  break;
 }
 case 132:
  FUNC_9(VAR_9, 0x0d, 0x42);
  FUNC_13(10000, 11000);
  FUNC_9(VAR_9, VAR_0, 0xfd);
  FUNC_13(10000, 11000);
  break;
 case 137:

  FUNC_9(VAR_9, VAR_0, 0xf9);
  break;
 case 136:
 case 141:
 case 133:
  if (!FUNC_5(VAR_9))
   FUNC_8(VAR_9);







  FUNC_4(VAR_9, VAR_9->board.tuner_gpio);
  FUNC_7(VAR_9, VAR_2);
  break;
 case 131:
  if (!FUNC_5(VAR_9))
   FUNC_8(VAR_9);







  FUNC_4(VAR_9, VAR_9->board.tuner_gpio);
  FUNC_7(VAR_9, VAR_2);
  break;
 }

 if (VAR_9->board.valid == VAR_3) {
  FUNC_1(&VAR_9->intf->dev,
   "\n\n"
   "The support for this board weren't valid yet.\n"
   "Please send a report of having this working\n"
   "not to V4L mailing list (and/or to other addresses)\n\n");
 }


 FUNC_10(VAR_9->eedata);
 VAR_9->eedata = ((void*)0);


 if (VAR_8 >= 0)
  VAR_9->tuner_type = VAR_8;






 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (!FUNC_0(VAR_10)->type)
   continue;


  VAR_13 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (FUNC_0(VAR_10)->amux == VAR_9->amux_map[VAR_11]) {
    VAR_13 = 1;
    break;
   }
  }
  if (VAR_13)
   continue;

  VAR_9->amux_map[VAR_12++] = FUNC_0(VAR_10)->amux;
 }
 for (; VAR_12 < VAR_5; VAR_12++)
  VAR_9->amux_map[VAR_12] = VAR_1;
}
