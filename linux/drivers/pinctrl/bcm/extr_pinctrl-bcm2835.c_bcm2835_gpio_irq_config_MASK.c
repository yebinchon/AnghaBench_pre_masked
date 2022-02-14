
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_pinctrl {int* irq_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct bcm2835_pinctrl*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_pinctrl *VAR_4,
 unsigned VAR_5, bool VAR_6)
{
 switch (VAR_4->irq_type[VAR_5]) {
 case 130:
  FUNC_0(VAR_4, VAR_3, VAR_5, VAR_6);
  break;

 case 131:
  FUNC_0(VAR_4, VAR_0, VAR_5, VAR_6);
  break;

 case 132:
  FUNC_0(VAR_4, VAR_3, VAR_5, VAR_6);
  FUNC_0(VAR_4, VAR_0, VAR_5, VAR_6);
  break;

 case 129:
  FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6);
  break;

 case 128:
  FUNC_0(VAR_4, VAR_2, VAR_5, VAR_6);
  break;
 }
}
