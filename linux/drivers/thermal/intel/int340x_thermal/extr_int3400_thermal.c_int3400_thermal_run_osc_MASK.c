
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ pointer; } ;
struct TYPE_3__ {int length; int* pointer; } ;
struct acpi_osc_context {int rev; TYPE_2__ ret; TYPE_1__ cap; int uuid_str; } ;
typedef enum int3400_thermal_uuid { ____Placeholder_int3400_thermal_uuid } int3400_thermal_uuid ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,struct acpi_osc_context*) ;
 int * VAR_3 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_4,
    enum int3400_thermal_uuid VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8[2];
 acpi_status VAR_9;
 int VAR_10 = 0;
 struct acpi_osc_context VAR_11 = {
  .uuid_str = VAR_3[VAR_5],
  .rev = 1,
  .cap.length = 8,
 };

 VAR_8[VAR_1] = 0;
 VAR_8[VAR_2] = VAR_6;

 VAR_11.cap.pointer = VAR_8;

 VAR_9 = FUNC_1(VAR_4, &VAR_11);
 if (FUNC_0(VAR_9)) {
  VAR_7 = *((u32 *)(VAR_11.ret.pointer + 4));
  if (VAR_7 != VAR_6)
   VAR_10 = -VAR_0;
 } else
  VAR_10 = -VAR_0;

 FUNC_2(VAR_11.ret.pointer);
 return VAR_10;
}
