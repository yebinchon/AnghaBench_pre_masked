
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
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct toshiba_acpi_dev*,int ,scalar_t__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct toshiba_acpi_dev *VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_8);

 if (VAR_9 == VAR_3)
  FUNC_1("ACPI call to get Cooling Method failed\n");

 if (VAR_9 == VAR_4)
  return -VAR_1;

 return (VAR_9 == VAR_5 || VAR_9 == VAR_6) ? 0 : -VAR_0;
}
