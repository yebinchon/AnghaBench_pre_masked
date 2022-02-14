
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pmic_gpio_state {int ctrl; } ;
struct gpio_chip {unsigned int ngpio; } ;


 struct pmic_gpio_state* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,struct seq_file*,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct gpio_chip *VAR_1)
{
 struct pmic_gpio_state *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->ngpio; VAR_3++) {
  FUNC_1(VAR_2->ctrl, VAR_0, VAR_3);
  FUNC_2(VAR_0, "\n");
 }
}
