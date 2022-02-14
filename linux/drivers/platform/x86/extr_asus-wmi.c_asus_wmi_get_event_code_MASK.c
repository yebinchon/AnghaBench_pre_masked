
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_5(u32 VAR_4)
{
 struct acpi_buffer VAR_5 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_6;
 acpi_status VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_4, &VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_3("Failed to get WMI notify code: %s\n",
    FUNC_1(VAR_7));
  return -VAR_2;
 }

 VAR_6 = (union acpi_object *)VAR_5.pointer;

 if (VAR_6 && VAR_6->type == VAR_1)
  VAR_8 = (int)(VAR_6->integer.value & VAR_3);
 else
  VAR_8 = -VAR_2;

 FUNC_2(VAR_6);
 return VAR_8;
}
