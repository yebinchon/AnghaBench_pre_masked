
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_soc_data {scalar_t__ irq; } ;
struct pcs_device {scalar_t__ domain; struct pcs_soc_data socdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct pcs_soc_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct pcs_device *VAR_1)
{
 struct pcs_soc_data *VAR_2 = &VAR_1->socdata;

 if (VAR_2->irq < 0)
  return;

 if (VAR_1->domain)
  FUNC_1(VAR_1->domain);

 if (VAR_0)
  FUNC_0(VAR_2->irq, VAR_2);
 else
  FUNC_2(VAR_2->irq, ((void*)0));
}
