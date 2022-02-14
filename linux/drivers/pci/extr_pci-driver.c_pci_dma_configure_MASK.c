
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int fwnode; TYPE_1__* parent; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,scalar_t__,int) ;
 struct device* FUNC_5 (int ) ;
 int FUNC_6 (struct device*) ;
 struct acpi_device* FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1)
{
 struct device *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_5(FUNC_8(VAR_1));

 if (FUNC_0(VAR_0) && VAR_2->parent &&
     VAR_2->parent->of_node) {
  VAR_3 = FUNC_4(VAR_1, VAR_2->parent->of_node, 1);
 } else if (FUNC_3(VAR_2)) {
  struct acpi_device *VAR_4 = FUNC_7(VAR_2->fwnode);

  VAR_3 = FUNC_1(VAR_1, FUNC_2(VAR_4));
 }

 FUNC_6(VAR_2);
 return VAR_3;
}
