
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int killswitch; } ;


 int FUNC_0 (struct toshiba_acpi_dev*) ;
 int FUNC_1 (struct toshiba_acpi_dev*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, bool VAR_1)
{
 struct toshiba_acpi_dev *VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!VAR_2->killswitch)
  return 0;

 return FUNC_1(VAR_2, !VAR_1);
}
