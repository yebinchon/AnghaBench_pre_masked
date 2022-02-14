
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct platform_device {int dev; } ;
struct intel_vbtn_priv {int input_dev; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 struct intel_vbtn_priv* FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (union acpi_object*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(struct platform_device *VAR_7)
{
 const char *VAR_8 = FUNC_4(VAR_2);
 struct intel_vbtn_priv *VAR_9 = FUNC_3(&VAR_7->dev);
 acpi_handle VAR_10 = FUNC_1(&VAR_7->dev);
 struct acpi_buffer VAR_11 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_12;
 acpi_status VAR_13;
 int VAR_14;

 if (!(VAR_8 && FUNC_7(VAR_8, "31") == 0))
  goto out;

 VAR_13 = FUNC_2(VAR_10, "VGBS", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_13))
  goto out;

 VAR_12 = VAR_11.pointer;
 if (!(VAR_12 && VAR_12->type == VAR_1))
  goto out;

 VAR_14 = !(VAR_12->integer.value & VAR_6);
 FUNC_5(VAR_9->input_dev, VAR_5, VAR_14);
 VAR_14 = (VAR_12->integer.value & VAR_3) ? 1 : 0;
 FUNC_5(VAR_9->input_dev, VAR_4, VAR_14);
out:
 FUNC_6(VAR_11.pointer);
}
