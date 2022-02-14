
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {scalar_t__ regs; void* sfl_reg; void* sts_reg; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct hva_dev *VAR_6 = VAR_5;


 VAR_6->sts_reg = FUNC_0(VAR_6->regs + VAR_0);
 VAR_6->sfl_reg = FUNC_0(VAR_6->regs + VAR_2);


 FUNC_1(0x1, VAR_6->regs + VAR_1);

 return VAR_3;
}
