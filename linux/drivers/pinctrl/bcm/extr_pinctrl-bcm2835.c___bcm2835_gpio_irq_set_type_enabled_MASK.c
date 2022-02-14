
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_pinctrl {unsigned int* irq_type; } ;


 int VAR_0 ;






 int FUNC_0 (struct bcm2835_pinctrl*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct bcm2835_pinctrl *VAR_1,
 unsigned VAR_2, unsigned int VAR_3)
{
 switch (VAR_3) {
 case 128:
  if (VAR_1->irq_type[VAR_2] != VAR_3) {
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
  }
  break;

 case 131:
  if (VAR_1->irq_type[VAR_2] == 133) {

   VAR_1->irq_type[VAR_2] = 132;
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
  } else if (VAR_1->irq_type[VAR_2] != VAR_3) {
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
   FUNC_0(VAR_1, VAR_2, 1);
  }
  break;

 case 132:
  if (VAR_1->irq_type[VAR_2] == 133) {

   VAR_1->irq_type[VAR_2] = 131;
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
  } else if (VAR_1->irq_type[VAR_2] != VAR_3) {
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
   FUNC_0(VAR_1, VAR_2, 1);
  }
  break;

 case 133:
  if (VAR_1->irq_type[VAR_2] == 131) {

   VAR_1->irq_type[VAR_2] = 132;
   FUNC_0(VAR_1, VAR_2, 1);
   VAR_1->irq_type[VAR_2] = VAR_3;
  } else if (VAR_1->irq_type[VAR_2] == 132) {

   VAR_1->irq_type[VAR_2] = 131;
   FUNC_0(VAR_1, VAR_2, 1);
   VAR_1->irq_type[VAR_2] = VAR_3;
  } else if (VAR_1->irq_type[VAR_2] != VAR_3) {
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
   FUNC_0(VAR_1, VAR_2, 1);
  }
  break;

 case 130:
 case 129:
  if (VAR_1->irq_type[VAR_2] != VAR_3) {
   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->irq_type[VAR_2] = VAR_3;
   FUNC_0(VAR_1, VAR_2, 1);
  }
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
