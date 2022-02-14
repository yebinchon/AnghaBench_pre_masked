
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_platform_data {int tsc_irq; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1, struct device *VAR_2,
      struct max8925_platform_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, "maxim,tsc-irq", &VAR_3->tsc_irq);
 if (VAR_4) {
  FUNC_0(VAR_2, "Not found maxim,tsc-irq property\n");
  return -VAR_0;
 }
 return 0;
}
