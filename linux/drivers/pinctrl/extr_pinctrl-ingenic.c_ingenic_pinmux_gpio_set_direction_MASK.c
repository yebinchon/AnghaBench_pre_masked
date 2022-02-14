
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dev; } ;
struct ingenic_pinctrl {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,char,unsigned int,char*) ;
 int FUNC_1 (struct ingenic_pinctrl*,unsigned int,int ,int) ;
 int FUNC_2 (struct ingenic_pinctrl*,unsigned int,int ,int) ;
 int FUNC_3 (struct ingenic_pinctrl*,unsigned int) ;
 struct ingenic_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_9,
  struct pinctrl_gpio_range *VAR_10,
  unsigned int VAR_11, bool VAR_12)
{
 struct ingenic_pinctrl *VAR_13 = FUNC_4(VAR_9);
 unsigned int VAR_14 = VAR_11 % VAR_8;
 unsigned int VAR_15 = VAR_11 / VAR_8;

 FUNC_0(VAR_9->dev, "set pin P%c%u to %sput\n",
   'A' + VAR_15, VAR_14, VAR_12 ? "in" : "out");

 if (VAR_13->version >= VAR_2) {
  FUNC_2(VAR_13, VAR_11, VAR_6, 0);
  FUNC_2(VAR_13, VAR_11, VAR_0, 1);
  FUNC_2(VAR_13, VAR_11, VAR_7, VAR_12);
  FUNC_3(VAR_13, VAR_11);
 } else if (VAR_13->version >= VAR_1) {
  FUNC_1(VAR_13, VAR_11, VAR_6, 0);
  FUNC_1(VAR_13, VAR_11, VAR_0, 1);
  FUNC_1(VAR_13, VAR_11, VAR_7, VAR_12);
 } else {
  FUNC_1(VAR_13, VAR_11, VAR_5, 0);
  FUNC_1(VAR_13, VAR_11, VAR_3, !VAR_12);
  FUNC_1(VAR_13, VAR_11, VAR_4, 0);
 }

 return 0;
}
