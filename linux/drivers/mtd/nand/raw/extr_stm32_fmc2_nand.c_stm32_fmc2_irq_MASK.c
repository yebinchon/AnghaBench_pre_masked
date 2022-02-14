
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_fmc2_nfc {scalar_t__ irq_state; int complete; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct stm32_fmc2_nfc*) ;
 int FUNC_2 (struct stm32_fmc2_nfc*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct stm32_fmc2_nfc *VAR_5 = (struct stm32_fmc2_nfc *)VAR_4;

 if (VAR_5->irq_state == VAR_1)

  FUNC_2(VAR_5);
 else if (VAR_5->irq_state == VAR_0)

  FUNC_1(VAR_5);

 FUNC_0(&VAR_5->complete);

 return VAR_2;
}
