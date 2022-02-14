
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
typedef scalar_t__ u64 ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (union acpi_object*) ;
 union acpi_object* FUNC_1 (struct device*,int ) ;
 union acpi_object* FUNC_2 (struct device*,union acpi_object*,int ,int*) ;
 int FUNC_3 (union acpi_object*) ;

u64 FUNC_4(struct device *VAR_3)
{
 union acpi_object *VAR_4, *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (FUNC_0(VAR_4)) {
  VAR_6 = 0;
  goto out;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4,
      VAR_1, &VAR_7);
 if (FUNC_0(VAR_5) || VAR_7 != 0 ||
     VAR_5->package.elements[1].integer.value != VAR_2) {
  VAR_6 = 0;
  goto out_free;
 }

 VAR_6 = VAR_5->package.elements[1].integer.value;
out_free:
 FUNC_3(VAR_4);
out:
 return VAR_6;
}
