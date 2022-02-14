
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_platform_data {int irq_mode; scalar_t__ companion_addr; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0,
        struct device *VAR_1,
        struct pm860x_platform_data *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_0, "marvell,88pm860x-irq-read-clr", ((void*)0)))
  VAR_2->irq_mode = 1;
 VAR_3 = FUNC_2(VAR_0, "marvell,88pm860x-slave-addr",
       &VAR_2->companion_addr);
 if (VAR_3) {
  FUNC_0(VAR_1,
   "Not found \"marvell,88pm860x-slave-addr\" property\n");
  VAR_2->companion_addr = 0;
 }
 return 0;
}
