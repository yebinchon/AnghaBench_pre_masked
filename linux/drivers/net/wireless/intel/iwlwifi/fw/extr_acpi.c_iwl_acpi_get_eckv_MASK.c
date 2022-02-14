
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (union acpi_object*) ;
 int FUNC_1 (union acpi_object*) ;
 union acpi_object* FUNC_2 (struct device*,int ) ;
 union acpi_object* FUNC_3 (struct device*,union acpi_object*,int ,int*) ;
 int FUNC_4 (union acpi_object*) ;

int FUNC_5(struct device *VAR_4, u32 *VAR_5)
{
 union acpi_object *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_4, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_1,
      &VAR_9);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto out_free;
 }

 if (VAR_6->package.elements[1].type != VAR_2 ||
     VAR_9 != 0) {
  VAR_8 = -VAR_3;
  goto out_free;
 }

 *VAR_5 = VAR_6->package.elements[1].integer.value;

 VAR_8 = 0;

out_free:
 FUNC_4(VAR_7);
 return VAR_8;
}
