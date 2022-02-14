
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct seq_file {struct asus_wmi* private; } ;
struct bios_args {int arg1; int arg0; } ;
struct TYPE_4__ {int ctrl_param; int dev_id; int method_id; } ;
struct asus_wmi {TYPE_2__ debug; } ;
struct acpi_buffer {scalar_t__ pointer; struct bios_args* member_1; int member_0; } ;
typedef int args ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 struct asus_wmi *VAR_6 = VAR_4->private;
 struct bios_args VAR_7 = {
  .arg0 = VAR_6->debug.dev_id,
  .arg1 = VAR_6->debug.ctrl_param,
 };
 struct acpi_buffer VAR_8 = { (acpi_size) sizeof(VAR_7), &VAR_7 };
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_10;
 acpi_status VAR_11;

 VAR_11 = FUNC_3(VAR_2,
         0, VAR_6->debug.method_id,
         &VAR_8, &VAR_9);

 if (FUNC_0(VAR_11))
  return -VAR_3;

 VAR_10 = (union acpi_object *)VAR_9.pointer;
 if (VAR_10 && VAR_10->type == VAR_1)
  FUNC_2(VAR_4, "%#x(%#x, %#x) = %#x\n", VAR_6->debug.method_id,
      VAR_6->debug.dev_id, VAR_6->debug.ctrl_param,
      (u32) VAR_10->integer.value);
 else
  FUNC_2(VAR_4, "%#x(%#x, %#x) = t:%d\n", VAR_6->debug.method_id,
      VAR_6->debug.dev_id, VAR_6->debug.ctrl_param,
      VAR_10 ? VAR_10->type : -1);

 FUNC_1(VAR_10);

 return 0;
}
