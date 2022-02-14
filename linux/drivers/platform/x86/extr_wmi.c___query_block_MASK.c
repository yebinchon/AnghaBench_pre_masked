
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
union acpi_object {TYPE_2__ integer; int type; } ;
typedef scalar_t__ u8 ;
struct guid_block {scalar_t__ instance_count; int flags; int object_id; } ;
struct wmi_block {scalar_t__ read_takes_no_args; TYPE_1__* acpi_device; struct guid_block gblock; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static acpi_status FUNC_5(struct wmi_block *VAR_6, u8 VAR_7,
     struct acpi_buffer *VAR_8)
{
 struct guid_block *VAR_9 = ((void*)0);
 acpi_handle VAR_10;
 acpi_status VAR_11, VAR_12 = VAR_5;
 struct acpi_object_list VAR_13;
 union acpi_object VAR_14[1];
 char VAR_15[5];
 char VAR_16[5] = "WC";

 if (!VAR_8)
  return VAR_4;

 VAR_9 = &VAR_6->gblock;
 VAR_10 = VAR_6->acpi_device->handle;

 if (VAR_9->instance_count <= VAR_7)
  return VAR_4;


 if (VAR_9->flags & (VAR_1 | VAR_3))
  return VAR_5;

 VAR_13.count = 1;
 VAR_13.pointer = VAR_14;
 VAR_14[0].type = VAR_0;
 VAR_14[0].integer.value = VAR_7;

 if (VAR_7 == 0 && VAR_6->read_takes_no_args)
  VAR_13.count = 0;





 if (VAR_9->flags & VAR_2) {
  FUNC_4(VAR_16, VAR_9->object_id, 2);






  VAR_12 = FUNC_2(VAR_10, VAR_16, 1);
 }

 FUNC_3(VAR_15, "WQ");
 FUNC_4(VAR_15, VAR_9->object_id, 2);

 VAR_11 = FUNC_1(VAR_10, VAR_15, &VAR_13, VAR_8);





 if ((VAR_9->flags & VAR_2) && FUNC_0(VAR_12)) {
  VAR_11 = FUNC_2(VAR_10, VAR_16, 0);
 }

 return VAR_11;
}
