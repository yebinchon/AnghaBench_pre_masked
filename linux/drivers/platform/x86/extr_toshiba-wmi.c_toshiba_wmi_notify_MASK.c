
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union acpi_object {int type; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_5(u32 VAR_1, void *VAR_2)
{
 struct acpi_buffer VAR_3 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_4(VAR_1, &VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_3("Bad event status 0x%x\n", VAR_5);
  return;
 }

 VAR_4 = (union acpi_object *)VAR_3.pointer;
 if (!VAR_4)
  return;


 FUNC_2("Unknown event received, obj type %x\n", VAR_4->type);

 FUNC_1(VAR_3.pointer);
}
