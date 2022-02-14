
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int* gpio_level_low; int* gpio_level_high; int* gpio_update; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm831x* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct wm831x *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 VAR_9 = VAR_6->hwirq;

 if (VAR_9 < VAR_3 || VAR_9 > VAR_4) {

  if (VAR_9 >= 0 && VAR_9 < VAR_5)
   return 0;
  else
   return -VAR_0;
 }




 VAR_9 -= VAR_3;





 VAR_8->gpio_level_low[VAR_9] = 0;
 VAR_8->gpio_level_high[VAR_9] = 0;
 switch (VAR_7) {
 case 132:
  VAR_8->gpio_update[VAR_9] = 0x10000 | VAR_1;
  break;
 case 130:
  VAR_8->gpio_update[VAR_9] = 0x10000 | VAR_2;
  break;
 case 131:
  VAR_8->gpio_update[VAR_9] = 0x10000;
  break;
 case 129:
  VAR_8->gpio_update[VAR_9] = 0x10000 | VAR_2;
  VAR_8->gpio_level_high[VAR_9] = 1;
  break;
 case 128:
  VAR_8->gpio_update[VAR_9] = 0x10000;
  VAR_8->gpio_level_low[VAR_9] = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
