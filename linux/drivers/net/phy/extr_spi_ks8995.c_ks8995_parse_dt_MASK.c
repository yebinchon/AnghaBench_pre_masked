
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ks8995_switch {struct ks8995_pdata* pdata; TYPE_2__* spi; } ;
struct ks8995_pdata {int reset_gpio_flags; int reset_gpio; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device_node*,char*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ks8995_switch *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->spi->dev.of_node;
 struct ks8995_pdata *VAR_2 = VAR_0->pdata;

 if (!VAR_1)
  return;

 VAR_2->reset_gpio = FUNC_0(VAR_1, "reset-gpios", 0,
  &VAR_2->reset_gpio_flags);
}
