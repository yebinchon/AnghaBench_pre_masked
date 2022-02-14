
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long value; } ;
union acpi_object {TYPE_1__ integer; } ;
typedef enum intel_hid_dsm_fn_codes { ____Placeholder_intel_hid_dsm_fn_codes } intel_hid_dsm_fn_codes ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_object* FUNC_2 (int ,int *,int,int,int *,int ) ;
 int FUNC_3 (int ,char*,int *,unsigned long long*) ;
 int FUNC_4 (int ,char*,int,char*,unsigned long long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static bool FUNC_5(acpi_handle VAR_6,
          enum intel_hid_dsm_fn_codes VAR_7,
          unsigned long long *VAR_8)
{
 union acpi_object *VAR_9;
 acpi_status VAR_10;
 char *VAR_11;

 if (VAR_7 <= VAR_1 ||
     VAR_7 >= VAR_2)
  return 0;

 VAR_11 = (char *)VAR_5[VAR_7];

 if (!(VAR_4 & VAR_7))
  goto skip_dsm_eval;

 VAR_9 = FUNC_2(VAR_6, &VAR_3,
          1, VAR_7,
          ((void*)0), VAR_0);
 if (VAR_9) {
  *VAR_8 = VAR_9->integer.value;
  FUNC_4(VAR_6,
      "Eval DSM Fn code: %d[%s] results: 0x%llx\n",
      VAR_7, VAR_11, *VAR_8);
  FUNC_0(VAR_9);
  return 1;
 }

skip_dsm_eval:
 VAR_10 = FUNC_3(VAR_6, VAR_11, ((void*)0), VAR_8);
 if (FUNC_1(VAR_10))
  return 1;

 return 0;
}
