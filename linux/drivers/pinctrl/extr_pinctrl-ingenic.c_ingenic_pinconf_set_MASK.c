
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ingenic_pinctrl {int dev; TYPE_1__* info; } ;
struct TYPE_2__ {int* pull_ups; int* pull_downs; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;



 int FUNC_1 (int ,char*,char,unsigned int) ;
 int FUNC_2 (struct ingenic_pinctrl*,unsigned int,int) ;
 int FUNC_3 (unsigned long) ;
 struct ingenic_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_3, unsigned int VAR_4,
  unsigned long *VAR_5, unsigned int VAR_6)
{
 struct ingenic_pinctrl *VAR_7 = FUNC_4(VAR_3);
 unsigned int VAR_8 = VAR_4 % VAR_2;
 unsigned int VAR_9 = VAR_4 / VAR_2;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  switch (FUNC_3(VAR_5[VAR_10])) {
  case 130:
  case 128:
  case 129:
   continue;
  default:
   return -VAR_1;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  switch (FUNC_3(VAR_5[VAR_10])) {
  case 130:
   FUNC_1(VAR_7->dev, "disable pull-over for pin P%c%u\n",
     'A' + VAR_9, VAR_8);
   FUNC_2(VAR_7, VAR_4, 0);
   break;

  case 128:
   if (!(VAR_7->info->pull_ups[VAR_9] & FUNC_0(VAR_8)))
    return -VAR_0;
   FUNC_1(VAR_7->dev, "set pull-up for pin P%c%u\n",
     'A' + VAR_9, VAR_8);
   FUNC_2(VAR_7, VAR_4, 1);
   break;

  case 129:
   if (!(VAR_7->info->pull_downs[VAR_9] & FUNC_0(VAR_8)))
    return -VAR_0;
   FUNC_1(VAR_7->dev, "set pull-down for pin P%c%u\n",
     'A' + VAR_9, VAR_8);
   FUNC_2(VAR_7, VAR_4, 1);
   break;

  default:
   FUNC_5();
  }
 }

 return 0;
}
