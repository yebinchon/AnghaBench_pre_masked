
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_rtc_regs {int ctrl; } ;
struct pm8xxx_rtc {int regmap; struct pm8xxx_rtc_regs* regs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pm8xxx_rtc *VAR_1)
{
 const struct pm8xxx_rtc_regs *VAR_2 = VAR_1->regs;
 unsigned int VAR_3;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1->regmap, VAR_2->ctrl, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!(VAR_3 & VAR_0)) {
  VAR_3 |= VAR_0;
  VAR_4 = FUNC_1(VAR_1->regmap, VAR_2->ctrl, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
