
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {scalar_t__ tr_backlight_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct toshiba_acpi_dev*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct toshiba_acpi_dev *VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (VAR_7->tr_backlight_supported) {
  int VAR_10 = FUNC_2(VAR_7, !VAR_8);

  if (VAR_10)
   return VAR_10;
  if (VAR_8)
   VAR_8--;
 }

 VAR_8 = VAR_8 << VAR_3;
 VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_8);
 if (VAR_9 == VAR_4)
  FUNC_1("ACPI call to set LCD Brightness failed\n");
 else if (VAR_9 == VAR_5)
  return -VAR_1;

 return VAR_9 == VAR_6 ? 0 : -VAR_0;
}
