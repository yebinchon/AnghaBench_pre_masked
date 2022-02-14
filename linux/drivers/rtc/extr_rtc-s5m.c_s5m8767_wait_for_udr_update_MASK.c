
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5m_rtc_info {int dev; TYPE_1__* regs; int regmap; } ;
struct TYPE_2__ {unsigned int autoclear_udr_mask; int udr_update; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct s5m_rtc_info *VAR_1)
{
 int VAR_2, VAR_3 = VAR_0;
 unsigned int VAR_4;

 do {
  VAR_2 = FUNC_1(VAR_1->regmap, VAR_1->regs->udr_update, &VAR_4);
 } while (--VAR_3 && (VAR_4 & VAR_1->regs->autoclear_udr_mask) && !VAR_2);

 if (!VAR_3)
  FUNC_0(VAR_1->dev, "waiting for UDR update, reached max number of retries\n");

 return VAR_2;
}
