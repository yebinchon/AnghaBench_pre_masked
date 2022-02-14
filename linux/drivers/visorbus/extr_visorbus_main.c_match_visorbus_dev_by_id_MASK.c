
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {scalar_t__ chipset_bus_no; scalar_t__ chipset_dev_no; } ;
struct visor_busdev {scalar_t__ bus_no; scalar_t__ dev_no; } ;
struct device {int dummy; } ;


 struct visor_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, const void *VAR_1)
{
 struct visor_device *VAR_2 = FUNC_0(VAR_0);
 const struct visor_busdev *VAR_3 = VAR_1;

 if (VAR_2->chipset_bus_no == VAR_3->bus_no &&
     VAR_2->chipset_dev_no == VAR_3->dev_no)
  return 1;
 return 0;
}
