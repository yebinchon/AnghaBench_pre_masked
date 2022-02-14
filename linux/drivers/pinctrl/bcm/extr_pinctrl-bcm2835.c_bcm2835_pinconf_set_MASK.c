
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




 int FUNC_0 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 int FUNC_1 (struct bcm2835_pinctrl*,unsigned int,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct bcm2835_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_6,
   unsigned int VAR_7, unsigned long *VAR_8,
   unsigned int VAR_9)
{
 struct bcm2835_pinctrl *VAR_10 = FUNC_4(VAR_6);
 u32 VAR_11, VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11 = FUNC_3(VAR_8[VAR_13]);
  VAR_12 = FUNC_2(VAR_8[VAR_13]);

  switch (VAR_11) {

  case 132:
   FUNC_1(VAR_10, VAR_7, VAR_12);
   break;


  case 131:
   FUNC_1(VAR_10, VAR_7, VAR_1);
   break;

  case 130:
   FUNC_1(VAR_10, VAR_7, VAR_0);
   break;

  case 129:
   FUNC_1(VAR_10, VAR_7, VAR_2);
   break;


  case 128:
   FUNC_0(VAR_10, VAR_12 ? VAR_5 : VAR_4, VAR_7);
   break;

  default:
   return -VAR_3;

  }
 }

 return 0;
}
