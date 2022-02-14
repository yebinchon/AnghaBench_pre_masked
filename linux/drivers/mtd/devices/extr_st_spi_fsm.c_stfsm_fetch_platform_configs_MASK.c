
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stfsm {int booted_from_spi; void* reset_por; void* reset_signal; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,scalar_t__*) ;
 struct stfsm* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct regmap*,scalar_t__,scalar_t__*) ;
 struct regmap* FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_0)
{
 struct stfsm *VAR_1 = FUNC_4(VAR_0);
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 struct regmap *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 int VAR_7;


 VAR_1->booted_from_spi = 1;

 VAR_3 = FUNC_6(VAR_2, "st,syscfg");
 if (FUNC_0(VAR_3))
  goto boot_device_fail;

 VAR_1->reset_signal = FUNC_2(VAR_2, "st,reset-signal");

 VAR_1->reset_por = FUNC_2(VAR_2, "st,reset-por");


 VAR_7 = FUNC_3(VAR_2, "st,boot-device-reg", &VAR_4);
 if (VAR_7)
  goto boot_device_fail;


 VAR_7 = FUNC_3(VAR_2, "st,boot-device-spi", &VAR_5);
 if (VAR_7)
  goto boot_device_fail;

 VAR_7 = FUNC_5(VAR_3, VAR_4, &VAR_6);
 if (VAR_7)
  goto boot_device_fail;

 if (VAR_6 != VAR_5)
  VAR_1->booted_from_spi = 0;

 return;

boot_device_fail:
 FUNC_1(&VAR_0->dev,
   "failed to fetch boot device, assuming boot from SPI\n");
}
