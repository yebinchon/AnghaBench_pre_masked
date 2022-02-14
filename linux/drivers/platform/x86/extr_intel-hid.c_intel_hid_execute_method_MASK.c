
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {unsigned long long value; } ;
union acpi_object {TYPE_2__ package; int type; TYPE_1__ integer; } ;
typedef enum intel_hid_dsm_fn_codes { ____Placeholder_intel_hid_dsm_fn_codes } intel_hid_dsm_fn_codes ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_2 (int ,int *,int,int,union acpi_object*) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 (int ,char*,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static bool FUNC_5(acpi_handle VAR_7,
         enum intel_hid_dsm_fn_codes VAR_8,
         unsigned long long VAR_9)
{
 union acpi_object *VAR_10, VAR_11, VAR_12;
 acpi_status VAR_13;
 char *VAR_14;

 if (VAR_8 <= VAR_2 ||
     VAR_8 >= VAR_3)
  return 0;

 VAR_14 = (char *)VAR_6[VAR_8];

 if (!(VAR_5 & VAR_8))
  goto skip_dsm_exec;


 VAR_12.type = VAR_0;
 VAR_12.integer.value = VAR_9;

 VAR_11 = VAR_1;
 VAR_11 = 1;
 VAR_11 = &VAR_12;

 VAR_10 = FUNC_2(VAR_7, &VAR_4, 1, VAR_8, &VAR_11);
 if (VAR_10) {
  FUNC_4(VAR_7, "Exec DSM Fn code: %d[%s] success\n",
      VAR_8, VAR_14);
  FUNC_0(VAR_10);
  return 1;
 }

skip_dsm_exec:
 VAR_13 = FUNC_3(VAR_7, VAR_14, VAR_9);
 if (FUNC_1(VAR_13))
  return 1;

 return 0;
}
