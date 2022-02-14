
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm63xx_hsspi {int done; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct bcm63xx_hsspi *VAR_8 = (struct bcm63xx_hsspi *)VAR_7;

 if (FUNC_0(VAR_8->regs + VAR_2) == 0)
  return VAR_5;

 FUNC_1(VAR_0, VAR_8->regs + VAR_3);
 FUNC_1(0, VAR_8->regs + VAR_1);

 FUNC_2(&VAR_8->done);

 return VAR_4;
}
