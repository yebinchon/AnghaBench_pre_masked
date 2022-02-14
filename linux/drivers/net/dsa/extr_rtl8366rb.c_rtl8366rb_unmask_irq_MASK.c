
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int dev; int map; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct realtek_smi* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct realtek_smi *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->map, VAR_0,
     FUNC_3(VAR_1),
     FUNC_3(VAR_1));
 if (VAR_3)
  FUNC_0(VAR_2->dev, "could not unmask IRQ\n");
}
