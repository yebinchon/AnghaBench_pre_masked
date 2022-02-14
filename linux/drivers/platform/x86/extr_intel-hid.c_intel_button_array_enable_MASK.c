
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hid_priv {int array; } ;
struct device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 struct intel_hid_priv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1, bool VAR_2)
{
 struct intel_hid_priv *VAR_3 = FUNC_3(VAR_1);
 acpi_handle VAR_4 = FUNC_1(VAR_1);
 unsigned long long VAR_5;
 acpi_status VAR_6;

 if (!VAR_3->array)
  return;


 VAR_6 = FUNC_2(VAR_4, "BTNC", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_1, "failed to get button capability\n");
  return;
 }


 if (!FUNC_5(VAR_4, VAR_0,
          VAR_2 ? VAR_5 : 1))
  FUNC_4(VAR_1, "failed to set button capability\n");
}
