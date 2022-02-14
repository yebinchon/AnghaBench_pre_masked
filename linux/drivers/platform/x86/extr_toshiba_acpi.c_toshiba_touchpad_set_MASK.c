
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct toshiba_acpi_dev*) ;
 int FUNC_2 (struct toshiba_acpi_dev*) ;
 scalar_t__ FUNC_3 (struct toshiba_acpi_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct toshiba_acpi_dev *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 if (!FUNC_2(VAR_6))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_7);
 FUNC_1(VAR_6);
 if (VAR_8 == VAR_3)
  FUNC_0("ACPI call to set the touchpad failed\n");
 else if (VAR_8 == VAR_4)
  return -VAR_1;

 return VAR_8 == VAR_5 ? 0 : -VAR_0;
}
