
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct of_phandle_args*) ;
 struct irq_domain* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int,struct of_phandle_args*) ;

int FUNC_3(struct device_node *VAR_1, int VAR_2)
{
 int VAR_3;
 struct of_phandle_args VAR_4;
 struct irq_domain *VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_5 = FUNC_1(VAR_4.np);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(&VAR_4);
}
