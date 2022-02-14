
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih_cec {scalar_t__ regs; int irq_status; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct stih_cec *VAR_4 = VAR_3;

 VAR_4->irq_status = FUNC_0(VAR_4->regs + VAR_0);
 FUNC_1(VAR_4->irq_status, VAR_4->regs + VAR_0);

 return VAR_1;
}
