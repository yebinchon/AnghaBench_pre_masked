
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {scalar_t__ special_functions; scalar_t__ kbd_function_keys_supported; TYPE_1__* acpi_dev; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,int *,int *) ;
 scalar_t__ FUNC_2 (struct toshiba_acpi_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct toshiba_acpi_dev *VAR_7)
{
 acpi_status VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_7->acpi_dev->handle,
          "ENAB", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_8))
  return -VAR_1;





 if (VAR_7->kbd_function_keys_supported && VAR_7->special_functions)
  VAR_9 = FUNC_2(VAR_7, VAR_3,
       VAR_4);
 else
  VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_2);

 if (VAR_9 == VAR_5)
  return -VAR_0;
 else if (VAR_9 == VAR_6)
  return -VAR_1;

 return 0;
}
