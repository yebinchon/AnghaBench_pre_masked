
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7134_dev {int board; struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int last_gpio; int mask_keycode; int mask_keydown; int mask_keyup; int dev; scalar_t__ polling; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct saa7134_dev *VAR_5)
{
 struct saa7134_card_ir *VAR_6 = VAR_5->remote;
 u32 VAR_7, VAR_8;


 switch (VAR_5->board) {
 case 129:
  FUNC_6(VAR_4, 0x80);
  FUNC_4(VAR_4, 0x80);
  break;
 }

 FUNC_4(VAR_1,VAR_2);
 FUNC_6(VAR_1,VAR_2);

 VAR_7 = FUNC_5(VAR_3 >> 2);
 if (VAR_6->polling) {
  if (VAR_6->last_gpio == VAR_7)
   return 0;
  VAR_6->last_gpio = VAR_7;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_6->mask_keycode);
 FUNC_0("build_key gpio=0x%x mask=0x%x data=%d\n",
  VAR_7, VAR_6->mask_keycode, VAR_8);

 switch (VAR_5->board) {
 case 128:
  if (VAR_8 == VAR_6->mask_keycode)
   FUNC_3(VAR_6->dev);
  else
   FUNC_2(VAR_6->dev, VAR_0, VAR_8,
          0);
  return 0;
 }

 if (VAR_6->polling) {
  if ((VAR_6->mask_keydown && (0 != (VAR_7 & VAR_6->mask_keydown))) ||
      (VAR_6->mask_keyup && (0 == (VAR_7 & VAR_6->mask_keyup)))) {
   FUNC_2(VAR_6->dev, VAR_0, VAR_8,
          0);
  } else {
   FUNC_3(VAR_6->dev);
  }
 }
 else {
  if ((VAR_6->mask_keydown && (0 != (VAR_7 & VAR_6->mask_keydown))) ||
      (VAR_6->mask_keyup && (0 == (VAR_7 & VAR_6->mask_keyup)))) {
   FUNC_2(VAR_6->dev, VAR_0, VAR_8,
          0);
   FUNC_3(VAR_6->dev);
  }
 }

 return 0;
}
