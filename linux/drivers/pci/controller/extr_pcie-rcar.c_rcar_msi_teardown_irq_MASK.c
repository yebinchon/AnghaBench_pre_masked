
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_msi {int dummy; } ;
struct msi_controller {int dummy; } ;
struct irq_data {int hwirq; } ;


 struct irq_data* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct rcar_msi*,int ) ;
 struct rcar_msi* FUNC_2 (struct msi_controller*) ;

__attribute__((used)) static void FUNC_3(struct msi_controller *VAR_0, unsigned int VAR_1)
{
 struct rcar_msi *VAR_2 = FUNC_2(VAR_0);
 struct irq_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3->hwirq);
}
