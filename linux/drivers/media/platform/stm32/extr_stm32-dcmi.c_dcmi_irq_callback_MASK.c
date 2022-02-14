
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dcmi {int irqlock; int regs; int misr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct stm32_dcmi *VAR_8 = VAR_7;
 unsigned long VAR_9;

 FUNC_2(&VAR_8->irqlock, VAR_9);

 VAR_8->misr = FUNC_0(VAR_8->regs, VAR_1);


 FUNC_1(VAR_8->regs, VAR_0, VAR_4 | VAR_5 | VAR_3);

 FUNC_3(&VAR_8->irqlock, VAR_9);

 return VAR_2;
}
