
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_domain* FUNC_0 (int ) ;
 struct irq_domain* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_3 (struct device_node*) ;

__attribute__((used)) static struct irq_domain *FUNC_4(struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 struct irq_domain *VAR_4;

 if (!FUNC_2(VAR_2, "interrupt-parent", ((void*)0)))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)

  return FUNC_0(-VAR_1);

 return VAR_4;
}
