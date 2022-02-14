
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx88_core {int boardnr; } ;
struct cx88_IR {int last_gpio; int mask_keydown; int mask_keyup; int dev; struct cx88_core* core; scalar_t__ polling; int mask_keycode; int gpio_addr; } ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,char*,char*,char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct cx88_IR *VAR_7)
{
 struct cx88_core *VAR_8 = VAR_7->core;
 u32 VAR_9, VAR_10, VAR_11;


 VAR_9 = FUNC_1(VAR_7->gpio_addr);
 switch (VAR_8->boardnr) {
 case 135:
  VAR_11 = FUNC_1(VAR_4);

  VAR_9 = (VAR_9 & 0x7fd) + (VAR_11 & 0xef);
  break;
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = (VAR_9 & 0x6ff) | ((FUNC_1(VAR_4) << 8) & 0x900);
  VAR_11 = VAR_9;
  break;
 default:
  VAR_11 = VAR_9;
 }
 if (VAR_7->polling) {
  if (VAR_7->last_gpio == VAR_11)
   return;
  VAR_7->last_gpio = VAR_11;
 }


 VAR_10 = FUNC_3(VAR_9, VAR_7->mask_keycode);
 FUNC_2("irq gpio=0x%x code=%d | %s%s%s\n",
     VAR_9, VAR_10,
     VAR_7->polling ? "poll" : "irq",
     (VAR_9 & VAR_7->mask_keydown) ? " down" : "",
     (VAR_9 & VAR_7->mask_keyup) ? " up" : "");

 if (VAR_7->core->boardnr == VAR_0) {
  u32 VAR_12 = FUNC_1(VAR_3);

  VAR_10 = (VAR_10 << 4) | ((VAR_12 & 0xf0) >> 4);

  FUNC_4(VAR_7->dev, VAR_6, VAR_10, 0);

 } else if (VAR_7->core->boardnr == VAR_2 ||
     VAR_7->core->boardnr == VAR_1) {

  u16 VAR_13;
  u8 VAR_14;
  u32 VAR_15;

  VAR_13 = (VAR_10 >> 8) & 0xffff;
  VAR_14 = (VAR_10 >> 0) & 0x00ff;
  VAR_15 = FUNC_0(VAR_13, VAR_14);

  if (0 == (VAR_9 & VAR_7->mask_keyup))
   FUNC_5(VAR_7->dev, VAR_5, VAR_15,
          0);
  else
   FUNC_6(VAR_7->dev);

 } else if (VAR_7->mask_keydown) {

  if (VAR_9 & VAR_7->mask_keydown)
   FUNC_5(VAR_7->dev, VAR_6, VAR_10,
          0);
  else
   FUNC_6(VAR_7->dev);

 } else if (VAR_7->mask_keyup) {

  if (0 == (VAR_9 & VAR_7->mask_keyup))
   FUNC_5(VAR_7->dev, VAR_6, VAR_10,
          0);
  else
   FUNC_6(VAR_7->dev);

 } else {

  FUNC_5(VAR_7->dev, VAR_6, VAR_10, 0);
  FUNC_6(VAR_7->dev);
 }
}
