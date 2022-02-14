
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int guid_t ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int FUNC_6 (struct hisi_hba*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct hisi_hba*) ;

__attribute__((used)) static int FUNC_9(struct hisi_hba *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 union acpi_object *VAR_4;
 guid_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_2);
 if (VAR_6) {
  FUNC_3(VAR_3, "hisi_sas_reset_hw failed, rc=%d", VAR_6);
  return VAR_6;
 }

 FUNC_7(100);
 FUNC_6(VAR_2);

 if (FUNC_5("D5918B4B-37AE-4E10-A99F-E5E8A6EF4C1F", &VAR_5)) {
  FUNC_3(VAR_3, "Parse GUID failed\n");
  return -VAR_1;
 }


 VAR_4 = FUNC_2(FUNC_1(VAR_3), &VAR_5, 0,
    VAR_0, ((void*)0));
 if (!VAR_4)
  FUNC_4(VAR_3, "Switch over to MSI handling failed\n");
 else
  FUNC_0(VAR_4);

 return 0;
}
