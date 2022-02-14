
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct toshiba_acpi_dev {scalar_t__ hotkey_event_type; int ntfy_supported; int info_supported; int system_event_supported; TYPE_3__* hotkey_dev; TYPE_2__* acpi_dev; int hotkey_work; scalar_t__ kbd_function_keys_supported; } ;
struct key_entry {int dummy; } ;
typedef scalar_t__ acpi_handle ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_9__ {char* name; char* phys; TYPE_1__ id; } ;
struct TYPE_8__ {scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct toshiba_acpi_dev*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_3__*,struct key_entry const*,int *) ;
 struct key_entry* VAR_8 ;
 int FUNC_14 (struct toshiba_acpi_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct key_entry* VAR_11 ;
 scalar_t__ FUNC_15 (struct toshiba_acpi_dev*,scalar_t__*) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct toshiba_acpi_dev *VAR_12)
{
 const struct key_entry *VAR_13 = VAR_11;
 acpi_handle VAR_14;
 int VAR_15;

 if (VAR_7) {
  FUNC_10("Hotkeys disabled by module parameter\n");
  return 0;
 }

 if (FUNC_16(VAR_5)) {
  FUNC_10("WMI event detected, hotkeys will not be monitored\n");
  return 0;
 }

 VAR_15 = FUNC_14(VAR_12);
 if (VAR_15)
  return VAR_15;

 if (FUNC_15(VAR_12, &VAR_12->hotkey_event_type))
  FUNC_11("Unable to query Hotkey Event Type\n");

 VAR_12->hotkey_dev = FUNC_6();
 if (!VAR_12->hotkey_dev)
  return -VAR_1;

 VAR_12->hotkey_dev->name = "Toshiba input device";
 VAR_12->hotkey_dev->phys = "toshiba_acpi/input0";
 VAR_12->hotkey_dev->id.bustype = VAR_0;

 if (VAR_12->hotkey_event_type == VAR_3 ||
     !VAR_12->kbd_function_keys_supported)
  VAR_13 = VAR_11;
 else if (VAR_12->hotkey_event_type == VAR_4 ||
   VAR_12->kbd_function_keys_supported)
  VAR_13 = VAR_8;
 else
  FUNC_10("Unknown event type received %x\n",
   VAR_12->hotkey_event_type);
 VAR_15 = FUNC_13(VAR_12->hotkey_dev, VAR_13, ((void*)0));
 if (VAR_15)
  goto err_free_dev;
 VAR_14 = FUNC_2();
 if (VAR_14 && FUNC_1(VAR_14, "NTFY")) {
  FUNC_0(&VAR_12->hotkey_work, VAR_9);

  VAR_15 = FUNC_4(VAR_10);
  if (VAR_15) {
   FUNC_9("Error installing key filter\n");
   goto err_free_dev;
  }

  VAR_12->ntfy_supported = 1;
 }





 if (FUNC_1(VAR_12->acpi_dev->handle, "INFO"))
  VAR_12->info_supported = 1;
 else if (FUNC_3(VAR_12, VAR_2, 1) == VAR_6)
  VAR_12->system_event_supported = 1;

 if (!VAR_12->info_supported && !VAR_12->system_event_supported) {
  FUNC_12("No hotkey query interface found\n");
  goto err_remove_filter;
 }

 VAR_15 = FUNC_8(VAR_12->hotkey_dev);
 if (VAR_15) {
  FUNC_10("Unable to register input device\n");
  goto err_remove_filter;
 }

 return 0;

 err_remove_filter:
 if (VAR_12->ntfy_supported)
  FUNC_5(VAR_10);
 err_free_dev:
 FUNC_7(VAR_12->hotkey_dev);
 VAR_12->hotkey_dev = ((void*)0);
 return VAR_15;
}
