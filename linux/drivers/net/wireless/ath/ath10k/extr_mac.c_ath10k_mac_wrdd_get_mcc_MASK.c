
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
typedef size_t u32 ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath10k*,char*) ;

__attribute__((used)) static u32 FUNC_1(struct ath10k *VAR_3, union acpi_object *VAR_4)
{
 union acpi_object *VAR_5;
 union acpi_object *VAR_6;
 union acpi_object *VAR_7;
 u32 VAR_8;

 if (VAR_4->type != VAR_1 ||
     VAR_4->package.count < 2 ||
     VAR_4->package.elements[0].type != VAR_0 ||
     VAR_4->package.elements[0].integer.value != 0) {
  FUNC_0(VAR_3, "ignoring malformed/unsupported wrdd structure\n");
  return 0;
 }

 for (VAR_8 = 1; VAR_8 < VAR_4->package.count; ++VAR_8) {
  VAR_5 = &VAR_4->package.elements[VAR_8];

  if (VAR_5->type != VAR_1)
   continue;
  if (VAR_5->package.count < 2)
   continue;
  if (VAR_5->package.elements[0].type != VAR_0 ||
      VAR_5->package.elements[1].type != VAR_0)
   continue;

  VAR_6 = &VAR_5->package.elements[0];
  if (VAR_6->integer.value != VAR_2)
   continue;

  VAR_7 = &VAR_5->package.elements[1];
  return VAR_7->integer.value;
 }
 return 0;
}
