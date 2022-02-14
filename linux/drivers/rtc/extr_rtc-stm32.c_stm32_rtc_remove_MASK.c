
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int cr; } ;
struct stm32_rtc {int dbp_mask; int dbp_reg; int dbp; TYPE_1__* data; int pclk; int rtc_ck; scalar_t__ base; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ need_dbp; scalar_t__ has_pclk; struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct stm32_rtc* FUNC_3 (struct platform_device*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct stm32_rtc*) ;
 int FUNC_7 (struct stm32_rtc*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct stm32_rtc *VAR_2 = FUNC_3(VAR_1);
 const struct stm32_rtc_registers *VAR_3 = &VAR_2->data->regs;
 unsigned int VAR_4;


 FUNC_7(VAR_2);
 VAR_4 = FUNC_4(VAR_2->base + VAR_3->cr);
 VAR_4 &= ~VAR_0;
 FUNC_8(VAR_4, VAR_2->base + VAR_3->cr);
 FUNC_6(VAR_2);

 FUNC_0(VAR_2->rtc_ck);
 if (VAR_2->data->has_pclk)
  FUNC_0(VAR_2->pclk);


 if (VAR_2->data->need_dbp)
  FUNC_5(VAR_2->dbp, VAR_2->dbp_reg, VAR_2->dbp_mask, 0);

 FUNC_1(&VAR_1->dev);
 FUNC_2(&VAR_1->dev, 0);

 return 0;
}
