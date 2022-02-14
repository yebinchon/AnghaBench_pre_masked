
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bttv_ir {int last_gpio; int mask_keydown; int mask_keyup; int dev; scalar_t__ polling; int mask_keycode; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct bttv {TYPE_1__ c; struct bttv_ir* remote; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,int,char*,char*,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bttv *VAR_2)
{
 struct bttv_ir *VAR_3 = VAR_2->remote;
 u32 VAR_4,VAR_5;


 VAR_4 = FUNC_0(&VAR_2->c);
 if (VAR_3->polling) {
  if (VAR_3->last_gpio == VAR_4)
   return;
  VAR_3->last_gpio = VAR_4;
 }


 VAR_5 = FUNC_2(VAR_4, VAR_3->mask_keycode);
 FUNC_1("irq gpio=0x%x code=%d | %s%s%s\n",
  VAR_4, VAR_5,
  VAR_3->polling ? "poll" : "irq",
  (VAR_4 & VAR_3->mask_keydown) ? " down" : "",
  (VAR_4 & VAR_3->mask_keyup) ? " up" : "");

 if ((VAR_3->mask_keydown && (VAR_4 & VAR_3->mask_keydown)) ||
     (VAR_3->mask_keyup && !(VAR_4 & VAR_3->mask_keyup))) {
  FUNC_3(VAR_3->dev, VAR_1, VAR_5, 0);
 } else {


  if (VAR_2->c.type == VAR_0)
   FUNC_3(VAR_3->dev, VAR_1, VAR_5,
          0);

  FUNC_4(VAR_3->dev);
 }
}
