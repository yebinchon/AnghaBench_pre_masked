
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct guid_block {int guid; int flags; int notify_id; int object_id; int instance_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(const struct guid_block *VAR_4)
{
 FUNC_1("%pUL:\n", VAR_4->guid);
 if (VAR_4->flags & VAR_0)
  FUNC_1("\tnotify_id: 0x%02X\n", VAR_4->notify_id);
 else
  FUNC_1("\tobject_id: %2pE\n", VAR_4->object_id);
 FUNC_1("\tinstance_count: %d\n", VAR_4->instance_count);
 FUNC_1("\tflags: %#x", VAR_4->flags);
 if (VAR_4->flags) {
  if (VAR_4->flags & VAR_1)
   FUNC_0(" ACPI_WMI_EXPENSIVE");
  if (VAR_4->flags & VAR_2)
   FUNC_0(" ACPI_WMI_METHOD");
  if (VAR_4->flags & VAR_3)
   FUNC_0(" ACPI_WMI_STRING");
  if (VAR_4->flags & VAR_0)
   FUNC_0(" ACPI_WMI_EVENT");
 }
 FUNC_0("\n");

}
