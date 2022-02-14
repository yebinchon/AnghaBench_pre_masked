
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int caps2; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node const*,char*,int *) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_1,
         struct mmc_host *VAR_2)
{
 const struct device_node *VAR_3 = VAR_1->dev.of_node;

 if (!VAR_3)
  return;






 if (FUNC_0(VAR_3, "toshiba,mmc-wrprotect-disable", ((void*)0)))
  VAR_2->caps2 |= VAR_0;
}
