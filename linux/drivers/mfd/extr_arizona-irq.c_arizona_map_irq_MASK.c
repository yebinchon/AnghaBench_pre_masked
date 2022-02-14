
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {scalar_t__ irq_chip; scalar_t__ aod_irq_chip; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct arizona *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_0->aod_irq_chip) {
  VAR_2 = FUNC_0(VAR_0->aod_irq_chip, VAR_1);
  if (VAR_2 >= 0)
   return VAR_2;
 }

 return FUNC_0(VAR_0->irq_chip, VAR_1);
}
