
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {TYPE_1__* domain; } ;
struct advk_pcie {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {struct advk_pcie* host_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct advk_pcie*,int ) ;
 int FUNC_2 (struct advk_pcie*,int ,int ) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct advk_pcie *VAR_2 = VAR_1->domain->host_data;
 irq_hw_number_t VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 |= FUNC_0(VAR_3);
 FUNC_2(VAR_2, VAR_4, VAR_0);
}
