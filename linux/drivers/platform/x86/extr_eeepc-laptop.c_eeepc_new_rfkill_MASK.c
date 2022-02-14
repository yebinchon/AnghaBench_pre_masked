
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill {int dummy; } ;
struct eeepc_laptop {TYPE_1__* platform_device; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
typedef int acpi_handle ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct eeepc_laptop*,int,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct eeepc_laptop*,int) ;
 struct rfkill* FUNC_2 (char const*,int *,int,int *,int ) ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (struct rfkill*,int) ;
 int FUNC_5 (struct rfkill*) ;

__attribute__((used)) static int FUNC_6(struct eeepc_laptop *VAR_2,
       struct rfkill **VAR_3,
       const char *VAR_4,
       enum rfkill_type VAR_5, int VAR_6)
{
 acpi_handle VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_6, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_3 = FUNC_2(VAR_4, &VAR_2->platform_device->dev, VAR_5,
          &VAR_1, VAR_7);

 if (!*VAR_3)
  return -VAR_0;

 FUNC_4(*VAR_3, FUNC_1(VAR_2, VAR_6) != 1);
 VAR_8 = FUNC_5(*VAR_3);
 if (VAR_8) {
  FUNC_3(*VAR_3);
  *VAR_3 = ((void*)0);
  return VAR_8;
 }
 return 0;
}
