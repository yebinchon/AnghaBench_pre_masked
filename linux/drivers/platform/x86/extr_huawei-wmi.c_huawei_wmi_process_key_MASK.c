
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct wmi_device {int dev; } ;
struct key_entry {int dummy; } ;
struct huawei_wmi_priv {int idev; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct huawei_wmi_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 struct key_entry* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct key_entry const*,int,int) ;
 int FUNC_6 (int ,int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_7(struct wmi_device *VAR_3, int VAR_4)
{
 struct huawei_wmi_priv *VAR_5 = FUNC_1(&VAR_3->dev);
 const struct key_entry *VAR_6;






 if (VAR_4 == 0x80) {
  struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
  union acpi_object *VAR_8;
  acpi_status VAR_9;

  VAR_9 = FUNC_6(VAR_2, 0, &VAR_7);
  if (FUNC_0(VAR_9))
   return;

  VAR_8 = (union acpi_object *)VAR_7.pointer;
  if (VAR_8 && VAR_8->type == VAR_1)
   VAR_4 = VAR_8->integer.value;

  FUNC_3(VAR_7.pointer);
 }

 VAR_6 = FUNC_4(VAR_5->idev, VAR_4);
 if (!VAR_6) {
  FUNC_2(&VAR_3->dev, "Unknown key pressed, code: 0x%04x\n", VAR_4);
  return;
 }

 FUNC_5(VAR_5->idev, VAR_6, 1, 1);
}
