
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipi; } ;
struct irq_info {scalar_t__ type; TYPE_1__ u; } ;
typedef enum ipi_vector { ____Placeholder_ipi_vector } ipi_vector ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct irq_info* FUNC_1 (unsigned int) ;

__attribute__((used)) static enum ipi_vector FUNC_2(unsigned VAR_1)
{
 struct irq_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2 == ((void*)0));
 FUNC_0(VAR_2->type != VAR_0);

 return VAR_2->u.ipi;
}
