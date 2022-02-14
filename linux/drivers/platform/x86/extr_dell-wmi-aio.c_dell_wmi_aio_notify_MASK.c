
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* pointer; int length; } ;
struct TYPE_3__ {unsigned int value; } ;
union acpi_object {int type; TYPE_2__ buffer; TYPE_1__ integer; } ;
typedef int u32 ;
struct dell_wmi_event {unsigned int* event; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int*,int ) ;
 int VAR_2 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,unsigned int,int,int) ;
 scalar_t__ FUNC_4 (int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_5(u32 VAR_3, void *VAR_4)
{
 struct acpi_buffer VAR_5 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_6;
 struct dell_wmi_event *VAR_7;
 acpi_status VAR_8;

 VAR_8 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_8 != VAR_1) {
  FUNC_2("bad event status 0x%x\n", VAR_8);
  return;
 }

 VAR_6 = (union acpi_object *)VAR_5.pointer;
 if (VAR_6) {
  unsigned int VAR_9 = 0;

  switch (VAR_6->type) {
  case 128:

   VAR_9 = VAR_6->integer.value;
   FUNC_3(VAR_2,
    VAR_9, 1, 1);
   break;
  case 129:
   if (FUNC_0(VAR_6->buffer.pointer,
      VAR_6->buffer.length)) {
    VAR_7 = (struct dell_wmi_event *)
     VAR_6->buffer.pointer;
    VAR_9 = VAR_7->event[0];
   } else {


    if (VAR_6->buffer.pointer &&
      VAR_6->buffer.length > 0)
     VAR_9 = VAR_6->buffer.pointer[0];
   }
   if (VAR_9)
    FUNC_3(
     VAR_2,
     VAR_9, 1, 1);
   break;
  }
 }
 FUNC_1(VAR_6);
}
