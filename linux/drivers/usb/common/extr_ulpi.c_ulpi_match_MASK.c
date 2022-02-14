
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulpi_driver {struct ulpi_device_id* id_table; } ;
struct ulpi_device_id {scalar_t__ vendor; scalar_t__ product; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ product; } ;
struct ulpi {TYPE_1__ id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct device_driver*) ;
 struct ulpi* FUNC_1 (struct device*) ;
 struct ulpi_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct ulpi_driver *VAR_2 = FUNC_2(VAR_1);
 struct ulpi *VAR_3 = FUNC_1(VAR_0);
 const struct ulpi_device_id *VAR_4;


 if (VAR_3->id.vendor == 0)
  return FUNC_0(VAR_0, VAR_1);

 for (VAR_4 = VAR_2->id_table; VAR_4->vendor; VAR_4++)
  if (VAR_4->vendor == VAR_3->id.vendor &&
      VAR_4->product == VAR_3->id.product)
   return 1;

 return 0;
}
