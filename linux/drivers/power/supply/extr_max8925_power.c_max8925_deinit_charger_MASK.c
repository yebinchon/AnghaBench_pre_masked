
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_power_info {struct max8925_chip* chip; } ;
struct max8925_chip {int irq_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct max8925_power_info*) ;

__attribute__((used)) static int FUNC_1(struct max8925_power_info *VAR_2)
{
 struct max8925_chip *VAR_3 = VAR_2->chip;
 int VAR_4;

 VAR_4 = VAR_3->irq_base + VAR_0;
 for (; VAR_4 <= VAR_3->irq_base + VAR_1; VAR_4++)
  FUNC_0(VAR_4, VAR_2);

 return 0;
}
