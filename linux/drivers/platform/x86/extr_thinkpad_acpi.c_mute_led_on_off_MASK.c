
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_led_table {int state; int off_value; int on_value; int name; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct tp_led_table *VAR_2, bool VAR_3)
{
 acpi_handle VAR_4;
 int VAR_5;

 if (FUNC_0(FUNC_2(VAR_1, VAR_2->name, &VAR_4))) {
  FUNC_3("Thinkpad ACPI has no %s interface.\n", VAR_2->name);
  return -VAR_0;
 }

 if (!FUNC_1(VAR_1, &VAR_5, VAR_2->name, "dd",
   VAR_3 ? VAR_2->on_value : VAR_2->off_value))
  return -VAR_0;

 VAR_2->state = VAR_3;
 return VAR_3;
}
