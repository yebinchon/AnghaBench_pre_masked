
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct as3722_pctrl_info {int dev; struct as3722* as3722; } ;
struct as3722 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct as3722*,int ,int*) ;
 int FUNC_3 (struct as3722*,int ,int,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 struct as3722_pctrl_info* FUNC_5 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3,
  int VAR_4)
{
 struct as3722_pctrl_info *VAR_5 = FUNC_5(VAR_2);
 struct as3722 *VAR_6 = VAR_5->as3722;
 int VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, FUNC_0(VAR_3), &VAR_8);
 if (VAR_9 < 0) {
  FUNC_4(VAR_5->dev,
   "GPIO_CONTROL%d_REG read failed: %d\n", VAR_3, VAR_9);
  return;
 }
 VAR_7 = !!(VAR_8 & VAR_0);

 if (VAR_4)
  VAR_8 = (VAR_7) ? 0 : FUNC_1(VAR_3);
 else
  VAR_8 = (VAR_7) ? FUNC_1(VAR_3) : 0;

 VAR_9 = FUNC_3(VAR_6, VAR_1,
   FUNC_1(VAR_3), VAR_8);
 if (VAR_9 < 0)
  FUNC_4(VAR_5->dev,
   "GPIO_SIGNAL_OUT_REG update failed: %d\n", VAR_9);
}
