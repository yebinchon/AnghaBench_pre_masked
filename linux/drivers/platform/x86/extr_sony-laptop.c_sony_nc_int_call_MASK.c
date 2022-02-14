
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u64 ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_2, char *VAR_3, int *VAR_4,
  int *VAR_5)
{
 union acpi_object *VAR_6 = ((void*)0);
 if (VAR_4) {
  u64 VAR_7 = *VAR_4;
  VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 } else
  VAR_6 = FUNC_0(VAR_2, VAR_3, ((void*)0));

 if (!VAR_6)
  return -VAR_1;

 if (VAR_6->type != VAR_0) {
  FUNC_2("Invalid acpi_object: expected 0x%x got 0x%x\n",
    VAR_0, VAR_6->type);
  FUNC_1(VAR_6);
  return -VAR_1;
 }

 if (VAR_5)
  *VAR_5 = VAR_6->integer.value;

 FUNC_1(VAR_6);
 return 0;
}
