
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_pinctrl {unsigned int* irq_type; } ;


 int VAR_0 ;







__attribute__((used)) static int FUNC_0(struct bcm2835_pinctrl *VAR_1,
 unsigned VAR_2, unsigned int VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 131:
 case 132:
 case 133:
 case 130:
 case 129:
  VAR_1->irq_type[VAR_2] = VAR_3;
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
