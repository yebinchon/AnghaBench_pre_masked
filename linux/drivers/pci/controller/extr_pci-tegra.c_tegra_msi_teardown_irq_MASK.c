
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_msi {int dummy; } ;
struct msi_controller {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (unsigned int) ;
 struct irq_data* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct tegra_msi*,int ) ;
 struct tegra_msi* FUNC_4 (struct msi_controller*) ;

__attribute__((used)) static void FUNC_5(struct msi_controller *VAR_0,
       unsigned int VAR_1)
{
 struct tegra_msi *VAR_2 = FUNC_4(VAR_0);
 struct irq_data *VAR_3 = FUNC_1(VAR_1);
 irq_hw_number_t VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_1);
 FUNC_3(VAR_2, VAR_4);
}
