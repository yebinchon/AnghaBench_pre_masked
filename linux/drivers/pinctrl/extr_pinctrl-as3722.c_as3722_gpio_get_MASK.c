
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


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (struct as3722*,int,int*) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct as3722_pctrl_info* FUNC_4 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_5, unsigned VAR_6)
{
 struct as3722_pctrl_info *VAR_7 = FUNC_4(VAR_5);
 struct as3722 *VAR_8 = VAR_7->as3722;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_2(VAR_8, FUNC_0(VAR_6), &VAR_11);
 if (VAR_9 < 0) {
  FUNC_3(VAR_7->dev,
   "GPIO_CONTROL%d_REG read failed: %d\n", VAR_6, VAR_9);
  return VAR_9;
 }

 VAR_14 = !!(VAR_11 & VAR_0);
 VAR_13 = VAR_11 & VAR_1;
 switch (VAR_13) {
 case 134:
 case 132:
 case 133:
 case 131:
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_10 = VAR_3;
  break;
 default:
  return -VAR_4;
 }

 VAR_9 = FUNC_2(VAR_8, VAR_10, &VAR_12);
 if (VAR_9 < 0) {
  FUNC_3(VAR_7->dev,
   "GPIO_SIGNAL_IN_REG read failed: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_12 = !!(VAR_12 & FUNC_1(VAR_6));
 return (VAR_14) ? !VAR_12 : VAR_12;
}
