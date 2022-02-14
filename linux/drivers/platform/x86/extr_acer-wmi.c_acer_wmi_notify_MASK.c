
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u32 ;
typedef int u16 ;
struct key_entry {int keycode; } ;
struct event_return_value {int function; int device_state; int key_num; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;




 int FUNC_0 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,int) ;
 struct key_entry* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_8 (int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_9(u32 VAR_16, void *VAR_17)
{
 struct acpi_buffer VAR_18 = { VAR_7, ((void*)0) };
 union acpi_object *VAR_19;
 struct event_return_value VAR_20;
 acpi_status VAR_21;
 u16 VAR_22;
 const struct key_entry *VAR_23;
 u32 VAR_24;

 VAR_21 = FUNC_8(VAR_16, &VAR_18);
 if (VAR_21 != VAR_9) {
  FUNC_4("bad event status 0x%x\n", VAR_21);
  return;
 }

 VAR_19 = (union acpi_object *)VAR_18.pointer;

 if (!VAR_19)
  return;
 if (VAR_19->type != VAR_8) {
  FUNC_4("Unknown response received %d\n", VAR_19->type);
  FUNC_2(VAR_19);
  return;
 }
 if (VAR_19->buffer.length != 8) {
  FUNC_4("Unknown buffer length %d\n", VAR_19->buffer.length);
  FUNC_2(VAR_19);
  return;
 }

 VAR_20 = *((struct event_return_value *)VAR_19->buffer.pointer);
 FUNC_2(VAR_19);

 switch (VAR_20.function) {
 case 128:
  VAR_22 = VAR_20.device_state;
  FUNC_3("device state: 0x%x\n", VAR_22);

  VAR_23 = FUNC_6(VAR_12,
       VAR_20.key_num);
  if (!VAR_23) {
   FUNC_4("Unknown key number - 0x%x\n",
    VAR_20.key_num);
  } else {
   VAR_24 = VAR_20.key_num;
   switch (VAR_23->keycode) {
   case 130:
   case 132:
    if (FUNC_1(VAR_2))
     FUNC_5(VAR_15,
      !(VAR_22 & VAR_6));
    if (FUNC_1(VAR_1))
     FUNC_5(VAR_14,
      !(VAR_22 & VAR_4));
    if (FUNC_1(VAR_0))
     FUNC_5(VAR_13,
      !(VAR_22 & VAR_3));
    break;
   case 131:
    VAR_24 = (VAR_22 & VAR_5) ?
      VAR_11 : VAR_10;
   }
   FUNC_7(VAR_12, VAR_24, 1, 1);
  }
  break;
 case 129:
  FUNC_0();
  break;
 default:
  FUNC_4("Unknown function number - %d - %d\n",
   VAR_20.function, VAR_20.key_num);
  break;
 }
}
