
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tm6000_input {int vmux; int amux; scalar_t__ type; int v_gpio; } ;
struct tm6000_core {size_t input; scalar_t__ dev_type; int norm; struct tm6000_input rinput; struct tm6000_input* vinput; int radio; } ;
struct TYPE_4__ {int id; int common; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_21 ;
 int FUNC_2 (struct tm6000_core*) ;
 int FUNC_3 (struct tm6000_core*,int ) ;
 int FUNC_4 (struct tm6000_core*) ;
 int FUNC_5 (struct tm6000_core*,int ,int,...) ;
 int FUNC_6 (struct tm6000_core*,int ,int,int) ;

int FUNC_7(struct tm6000_core *VAR_22)
{
 struct tm6000_input *VAR_23;
 int VAR_24, VAR_25 = 0;
 u8 VAR_26 = 0x8a;
 u8 VAR_27 = 0xfc;
 u8 VAR_28 = 0xf0;
 u8 VAR_29 = 0x0f;

 FUNC_2(VAR_22);

 if (!VAR_22->radio)
  VAR_23 = &VAR_22->vinput[VAR_22->input];
 else
  VAR_23 = &VAR_22->rinput;

 if (VAR_22->dev_type == VAR_7) {
  switch (VAR_23->vmux) {
  case 130:
   FUNC_5(VAR_22, VAR_11, 0xf4);
   FUNC_5(VAR_22, VAR_14, 0xf1);
   FUNC_5(VAR_22, VAR_15, 0xe0);
   FUNC_5(VAR_22, VAR_16, 0xc2);
   FUNC_5(VAR_22, VAR_17, 0xe8);
   VAR_26 |= 0x01;
   break;
  case 128:
   FUNC_5(VAR_22, VAR_11, 0xf8);
   FUNC_5(VAR_22, VAR_14, 0xf1);
   FUNC_5(VAR_22, VAR_15, 0xe0);
   FUNC_5(VAR_22, VAR_16, 0xc2);
   FUNC_5(VAR_22, VAR_17, 0xe8);
   VAR_26 |= 0x01;
   break;
  case 129:
   FUNC_5(VAR_22, VAR_11, 0xfc);
   FUNC_5(VAR_22, VAR_12, 0xf8);
   VAR_29 = 0x00;
   FUNC_5(VAR_22, VAR_14, 0xf2);
   FUNC_5(VAR_22, VAR_15, 0xf0);
   FUNC_5(VAR_22, VAR_16, 0xc2);
   FUNC_5(VAR_22, VAR_17, 0xe0);
   break;
  default:
   break;
  }
  switch (VAR_23->amux) {
  case 134:
   FUNC_6(VAR_22, VAR_18,
    0x00, 0x0f);

   FUNC_6(VAR_22, VAR_8,
    0x10, 0xf0);
   break;
  case 133:
   FUNC_6(VAR_22, VAR_18,
    0x08, 0x0f);

   FUNC_6(VAR_22, VAR_8,
    0x10, 0xf0);
   break;
  case 132:
   VAR_28 |= 0x02;
   VAR_29 = 0x08;
   VAR_26 |= 0x40;
   VAR_27 |= 0x02;
   FUNC_5(VAR_22, VAR_12, 0xf3);
   FUNC_6(VAR_22, VAR_18,
    0x02, 0x0f);

   FUNC_6(VAR_22, VAR_8,
    0x30, 0xf0);
   break;
  case 131:
   VAR_28 |= 0x02;
   VAR_29 = 0x08;
   VAR_26 |= 0x40;
   VAR_27 |= 0x02;
   FUNC_5(VAR_22, VAR_12, 0xf7);
   FUNC_6(VAR_22, VAR_18,
    0x02, 0x0f);

   FUNC_6(VAR_22, VAR_8,
    0x30, 0xf0);
   break;
  default:
   break;
  }
  FUNC_5(VAR_22, VAR_10, VAR_28);
  FUNC_5(VAR_22, VAR_13, VAR_29);
  FUNC_5(VAR_22, VAR_19, VAR_27);
  FUNC_5(VAR_22, VAR_9, VAR_26);
 } else {
  switch (VAR_23->vmux) {
  case 130:
   FUNC_5(VAR_22, VAR_3, 0x10);
   FUNC_5(VAR_22, VAR_4, 0x00);
   FUNC_5(VAR_22, VAR_5, 0x0f);
   FUNC_5(VAR_22,
       VAR_1, VAR_23->v_gpio, 0);
   break;
  case 128:
   FUNC_5(VAR_22, VAR_3, 0x00);
   FUNC_5(VAR_22, VAR_4, 0x00);
   FUNC_5(VAR_22, VAR_5, 0x0f);
   FUNC_5(VAR_22,
       VAR_1, VAR_23->v_gpio, 0);
   break;
  case 129:
   FUNC_5(VAR_22, VAR_3, 0x10);
   FUNC_5(VAR_22, VAR_4, 0x10);
   FUNC_5(VAR_22, VAR_5, 0x00);
   FUNC_5(VAR_22,
       VAR_1, VAR_23->v_gpio, 1);
   break;
  default:
   break;
  }
  switch (VAR_23->amux) {
  case 134:
   FUNC_6(VAR_22,
    VAR_6, 0x00, 0x0f);
   break;
  case 133:
   FUNC_6(VAR_22,
    VAR_6, 0x04, 0x0f);
   break;
  default:
   break;
  }
 }
 if (VAR_23->type == VAR_2) {
  for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_21); VAR_24++) {
   if (VAR_22->norm & VAR_21[VAR_24].id) {
    VAR_25 = FUNC_3(VAR_22, VAR_21[VAR_24].common);
    goto ret;
   }
  }
  return -VAR_0;
 } else {
  for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_20); VAR_24++) {
   if (VAR_22->norm & VAR_20[VAR_24].id) {
    VAR_25 = FUNC_3(VAR_22, VAR_20[VAR_24].common);
    goto ret;
   }
  }
  return -VAR_0;
 }

ret:
 if (VAR_25 < 0)
  return VAR_25;

 if ((VAR_22->dev_type == VAR_7) &&
     ((VAR_23->amux == 132) ||
     (VAR_23->amux == 131)))
  FUNC_4(VAR_22);

 FUNC_1(40);

 return 0;
}
