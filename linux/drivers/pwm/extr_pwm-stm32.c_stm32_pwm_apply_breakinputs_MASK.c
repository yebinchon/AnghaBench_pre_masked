
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwm {int dummy; } ;
struct stm32_breakinput {int filter; int level; int index; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,int) ;
 int FUNC_1 (struct device_node*,char*,int *,int) ;
 int FUNC_2 (struct stm32_pwm*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct stm32_pwm *VAR_2,
           struct device_node *VAR_3)
{
 struct stm32_breakinput VAR_4[VAR_1];
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3, "st,breakinput",
          sizeof(struct stm32_breakinput));





 if (VAR_5 <= 0)
  return 0;

 if (VAR_5 > VAR_1)
  return -VAR_0;

 VAR_8 = VAR_5 * sizeof(struct stm32_breakinput) / sizeof(u32);
 VAR_6 = FUNC_1(VAR_3, "st,breakinput",
      (u32 *)VAR_4, VAR_8);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_5 && !VAR_6; VAR_7++) {
  VAR_6 = FUNC_2(VAR_2,
            VAR_4[VAR_7].index,
            VAR_4[VAR_7].level,
            VAR_4[VAR_7].filter);
 }

 return VAR_6;
}
