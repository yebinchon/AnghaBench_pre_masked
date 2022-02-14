
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {int key_event_valid; int last_key_event; scalar_t__ system_event_supported; scalar_t__ info_supported; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct toshiba_acpi_dev*,int ,int*) ;
 int FUNC_1 (struct toshiba_acpi_dev*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct toshiba_acpi_dev*) ;
 int FUNC_5 (struct toshiba_acpi_dev*,int) ;

__attribute__((used)) static void FUNC_6(struct toshiba_acpi_dev *VAR_2)
{
 if (VAR_2->info_supported) {
  int VAR_3 = FUNC_4(VAR_2);

  if (VAR_3 < 0) {
   FUNC_2("Failed to query hotkey event\n");
  } else if (VAR_3 != 0) {
   FUNC_5(VAR_2, VAR_3);
   VAR_2->key_event_valid = 1;
   VAR_2->last_key_event = VAR_3;
  }
 } else if (VAR_2->system_event_supported) {
  u32 VAR_4;
  u32 VAR_5;
  int VAR_6 = 3;

  do {
   VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_5);
   switch (VAR_4) {
   case 128:
    FUNC_5(VAR_2, (int)VAR_5);
    VAR_2->key_event_valid = 1;
    VAR_2->last_key_event = VAR_5;
    break;
   case 129:





    VAR_4 = FUNC_1(VAR_2, VAR_0, 1);
    if (VAR_4 == 128)
     FUNC_3("Re-enabled hotkeys\n");

   default:
    VAR_6--;
    break;
   }
  } while (VAR_6 && VAR_4 != VAR_1);
 }
}
