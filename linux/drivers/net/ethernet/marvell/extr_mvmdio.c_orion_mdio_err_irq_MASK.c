
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_mdio_dev {int smi_busy_wait; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct orion_mdio_dev *VAR_6 = VAR_5;

 if (FUNC_0(VAR_6->regs + VAR_2) &
   VAR_3) {
  FUNC_2(~VAR_3,
    VAR_6->regs + VAR_2);
  FUNC_1(&VAR_6->smi_busy_wait);
  return VAR_0;
 }

 return VAR_1;
}
