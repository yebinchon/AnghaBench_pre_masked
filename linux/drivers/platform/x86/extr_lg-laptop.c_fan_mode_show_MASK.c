
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union acpi_object*) ;
 union acpi_object* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
        struct device_attribute *VAR_6, char *VAR_7)
{
 unsigned int VAR_8;
 union acpi_object *VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_4, 0);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_9->type != VAR_0) {
  FUNC_0(VAR_9);
  return -VAR_1;
 }

 VAR_8 = VAR_9->integer.value & 0x01;
 FUNC_0(VAR_9);

 return FUNC_2(VAR_7, VAR_2, "%d\n", VAR_8);
}
