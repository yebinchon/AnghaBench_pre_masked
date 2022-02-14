
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef int u32 ;
struct key_entry {scalar_t__ type; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,long,...) ;
 int FUNC_3 (char*,int ) ;
 struct key_entry* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct key_entry*,int,int) ;
 int FUNC_6 (int ,struct acpi_buffer*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(u32 VAR_4, void *VAR_5)
{
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_7;
 acpi_status VAR_8;
 long VAR_9 = (long)VAR_5;

 FUNC_2("event guid %li\n", VAR_9);
 VAR_8 = FUNC_6(VAR_4, &VAR_6);
 if (FUNC_0(VAR_8)) {
  FUNC_3("Bad event status 0x%x\n", VAR_8);
  return;
 }

 VAR_7 = (union acpi_object *)VAR_6.pointer;
 if (!VAR_7)
  return;

 if (VAR_7->type == VAR_1) {
  int VAR_10 = VAR_7->integer.value;
  struct key_entry *VAR_11;

  VAR_11 =
      FUNC_4(VAR_3, VAR_10);
  if (VAR_11 && VAR_11->type == VAR_2)
   FUNC_5(VAR_3, VAR_11, 1, 1);
 }

 FUNC_2("Type: %i    Eventcode: 0x%llx\n", VAR_7->type,
   VAR_7->integer.value);
 FUNC_1(VAR_6.pointer);
}
