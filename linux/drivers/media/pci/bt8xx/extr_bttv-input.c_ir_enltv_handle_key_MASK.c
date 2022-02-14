
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv_ir {int mask_keyup; int last_gpio; int dev; int mask_keycode; } ;
struct bttv {int c; struct bttv_ir* remote; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bttv *VAR_1)
{
 struct bttv_ir *VAR_2 = VAR_1->remote;
 u32 VAR_3, VAR_4, VAR_5;


 VAR_3 = FUNC_0(&VAR_1->c);


 VAR_4 = FUNC_2(VAR_3, VAR_2->mask_keycode);


 VAR_5 = (VAR_3 & VAR_2->mask_keyup) ? 1UL << 31 : 0;

 if ((VAR_2->last_gpio & 0x7f) != VAR_4) {
  FUNC_1("gpio=0x%x code=%d | %s\n",
   VAR_3, VAR_4,
   (VAR_3 & VAR_2->mask_keyup) ? " up" : "up/down");

  FUNC_3(VAR_2->dev, VAR_0, VAR_4, 0);
  if (VAR_5)
   FUNC_4(VAR_2->dev);
 } else {
  if ((VAR_2->last_gpio & 1UL << 31) == VAR_5)
   return;

  FUNC_1("(cnt) gpio=0x%x code=%d | %s\n",
   VAR_3, VAR_4,
   (VAR_3 & VAR_2->mask_keyup) ? " up" : "down");

  if (VAR_5)
   FUNC_4(VAR_2->dev);
  else
   FUNC_3(VAR_2->dev, VAR_0, VAR_4,
          0);
 }

 VAR_2->last_gpio = VAR_4 | VAR_5;
}
