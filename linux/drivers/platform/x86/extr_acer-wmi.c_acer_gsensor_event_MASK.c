
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
struct acpi_buffer {int length; union acpi_object* pointer; } ;
typedef int s16 ;
typedef int out_obj ;
typedef int acpi_status ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 acpi_status VAR_6;
 struct acpi_buffer VAR_7;
 union acpi_object VAR_8[5];

 if (!FUNC_2(VAR_3))
  return -1;

 VAR_7.length = sizeof(VAR_8);
 VAR_7.pointer = VAR_8;

 VAR_6 = FUNC_1(VAR_5, "RDVL", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_6))
  return -1;

 if (VAR_8->package.count != 4)
  return -1;

 FUNC_3(VAR_4, VAR_0,
  (s16)VAR_8->package.elements[0].integer.value);
 FUNC_3(VAR_4, VAR_1,
  (s16)VAR_8->package.elements[1].integer.value);
 FUNC_3(VAR_4, VAR_2,
  (s16)VAR_8->package.elements[2].integer.value);
 FUNC_4(VAR_4);
 return 0;
}
