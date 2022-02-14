
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct bcm2835_pinctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct bcm2835_pinctrl*,unsigned int,int) ;
 int FUNC_1 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct bcm2835_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_8,
          unsigned int VAR_9, unsigned long *VAR_10,
          unsigned int VAR_11)
{
 struct bcm2835_pinctrl *VAR_12 = FUNC_4(VAR_8);
 u32 VAR_13, VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_13 = FUNC_3(VAR_10[VAR_15]);
  VAR_14 = FUNC_2(VAR_10[VAR_15]);

  switch (VAR_13) {

  case 132:
   if (VAR_14 == VAR_4)
    VAR_14 = VAR_2;
   else if (VAR_14 == VAR_3)
    VAR_14 = VAR_0;
   else
    VAR_14 = VAR_1;

   FUNC_0(VAR_12, VAR_9, VAR_14);
   break;


  case 131:
   FUNC_0(VAR_12, VAR_9, VAR_1);
   break;
  case 130:
   FUNC_0(VAR_12, VAR_9, VAR_0);
   break;
  case 129:
   FUNC_0(VAR_12, VAR_9, VAR_2);
   break;


  case 128:
   FUNC_1(VAR_12, VAR_14 ? VAR_7 : VAR_6, VAR_9);
   break;

  default:
   return -VAR_5;
  }
 }

 return 0;
}
