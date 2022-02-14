
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5m_rtc_info {int dev; TYPE_1__* regs; int regmap; } ;
struct TYPE_2__ {unsigned int write_time_udr_mask; int udr_update; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (struct s5m_rtc_info*) ;

__attribute__((used)) static int FUNC_4(struct s5m_rtc_info *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_1(VAR_0->regmap, VAR_0->regs->udr_update, &VAR_2);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "failed to read update reg(%d)\n", VAR_1);
  return VAR_1;
 }

 VAR_2 |= VAR_0->regs->write_time_udr_mask;

 VAR_1 = FUNC_2(VAR_0->regmap, VAR_0->regs->udr_update, VAR_2);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "failed to write update reg(%d)\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0);

 return VAR_1;
}
