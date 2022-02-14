
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {scalar_t__ tr_backlight_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct toshiba_acpi_dev*,int*) ;
 int FUNC_1 (struct toshiba_acpi_dev*,int ,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct toshiba_acpi_dev *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 u32 VAR_10;

 if (VAR_7->tr_backlight_supported) {
  int VAR_11 = FUNC_0(VAR_7, &VAR_10);

  if (VAR_11)
   return VAR_11;
  if (VAR_10)
   return 0;
  VAR_8++;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_2, &VAR_10);
 if (VAR_9 == VAR_4)
  FUNC_2("ACPI call to get LCD Brightness failed\n");
 else if (VAR_9 == VAR_5)
  return -VAR_1;

 return VAR_9 == VAR_6 ?
   VAR_8 + (VAR_10 >> VAR_3) :
   -VAR_0;
}
