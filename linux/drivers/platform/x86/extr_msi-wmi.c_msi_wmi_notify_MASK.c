
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct key_entry {scalar_t__ type; int keycode; int code; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int ktime_t ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {scalar_t__ quirk_last_pressed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,...) ;
 struct key_entry* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,struct key_entry*,int,int) ;
 scalar_t__ FUNC_8 (int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_9(u32 VAR_10, void *VAR_11)
{
 struct acpi_buffer VAR_12 = { VAR_0, ((void*)0) };
 struct key_entry *VAR_13;
 union acpi_object *VAR_14;
 acpi_status VAR_15;

 VAR_15 = FUNC_8(VAR_10, &VAR_12);
 if (VAR_15 != VAR_2) {
  FUNC_5("bad event status 0x%x\n", VAR_15);
  return;
 }

 VAR_14 = (union acpi_object *)VAR_12.pointer;

 if (VAR_14 && VAR_14->type == VAR_1) {
  int VAR_16 = VAR_14->integer.value;
  FUNC_4("Eventcode: 0x%x\n", VAR_16);
  VAR_13 = FUNC_6(VAR_9,
    VAR_16);
  if (!VAR_13) {
   FUNC_5("Unknown key pressed - %x\n", VAR_16);
   goto msi_wmi_notify_exit;
  }

  if (VAR_7->quirk_last_pressed) {
   ktime_t VAR_17 = FUNC_1();
   ktime_t VAR_18 = FUNC_2(VAR_17, VAR_8);


   if (FUNC_3(VAR_18) < 1000 * 50) {
    FUNC_4("Suppressed key event 0x%X - "
      "Last press was %lld us ago\n",
      VAR_13->code, FUNC_3(VAR_18));
    goto msi_wmi_notify_exit;
   }
   VAR_8 = VAR_17;
  }

  if (VAR_13->type == VAR_3 &&

  (VAR_6 ||
  (VAR_13->code != VAR_5 &&
  VAR_13->code != VAR_4))) {
   FUNC_4("Send key: 0x%X - Input layer keycode: %d\n",
     VAR_13->code, VAR_13->keycode);
   FUNC_7(VAR_9, VAR_13, 1,
         1);
  }
 } else
  FUNC_5("Unknown event received\n");

msi_wmi_notify_exit:
 FUNC_0(VAR_12.pointer);
}
