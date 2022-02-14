
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stm32_gpio_bank {int dummy; } ;
struct seq_file {int dummy; } ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;


 struct stm32_gpio_bank* FUNC_0 (int ) ;
 struct pinctrl_gpio_range* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct stm32_gpio_bank*,int,int) ;
 size_t FUNC_5 (struct stm32_gpio_bank*,int) ;
 size_t FUNC_6 (struct stm32_gpio_bank*,int) ;
 size_t FUNC_7 (struct stm32_gpio_bank*,int) ;
 int FUNC_8 (struct stm32_gpio_bank*,int,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_9(struct pinctrl_dev *VAR_0,
     struct seq_file *VAR_1,
     unsigned int VAR_2)
{
 struct pinctrl_gpio_range *VAR_3;
 struct stm32_gpio_bank *VAR_4;
 int VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 static const char * const VAR_11[] = {
   "input", "output", "alternate", "analog" };
 static const char * const VAR_12[] = {
   "low", "medium", "high", "very high" };
 static const char * const VAR_13[] = {
   "floating", "pull up", "pull down", "" };
 bool VAR_14;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_0(VAR_3->gc);
 VAR_5 = FUNC_3(VAR_2);

 FUNC_8(VAR_4, VAR_5, &VAR_6, &VAR_7);
 VAR_10 = FUNC_5(VAR_4, VAR_5);

 FUNC_2(VAR_1, "%s ", VAR_11[VAR_6]);

 switch (VAR_6) {

 case 0:
  VAR_14 = FUNC_4(VAR_4, VAR_5, 1);
  FUNC_2(VAR_1, "- %s - %s",
      VAR_14 ? "high" : "low",
      VAR_13[VAR_10]);
  break;


 case 1:
  VAR_8 = FUNC_6(VAR_4, VAR_5);
  VAR_9 = FUNC_7(VAR_4, VAR_5);
  VAR_14 = FUNC_4(VAR_4, VAR_5, 0);
  FUNC_2(VAR_1, "- %s - %s - %s - %s %s",
      VAR_14 ? "high" : "low",
      VAR_8 ? "open drain" : "push pull",
      VAR_13[VAR_10],
      VAR_12[VAR_9], "speed");
  break;


 case 2:
  VAR_8 = FUNC_6(VAR_4, VAR_5);
  VAR_9 = FUNC_7(VAR_4, VAR_5);
  FUNC_2(VAR_1, "%d - %s - %s - %s %s", VAR_7,
      VAR_8 ? "open drain" : "push pull",
      VAR_13[VAR_10],
      VAR_12[VAR_9], "speed");
  break;


 case 3:
  break;
 }
}
