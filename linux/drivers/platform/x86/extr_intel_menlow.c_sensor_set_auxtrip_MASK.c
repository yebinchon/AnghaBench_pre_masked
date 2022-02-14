
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(acpi_handle VAR_7, int VAR_8, int VAR_9)
{
 acpi_status VAR_10;
 union acpi_object VAR_11 = {
  VAR_0
 };
 struct acpi_object_list VAR_12 = {
  1, &VAR_11
 };
 unsigned long long VAR_13;

 if (VAR_8 != 0 && VAR_8 != 1)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_7, VAR_8 ? VAR_3 : VAR_4,
           ((void*)0), &VAR_13);
 if (FUNC_0(VAR_10))
  return -VAR_2;
 if ((VAR_8 && VAR_9 < VAR_13) || (!VAR_8 && VAR_9 > VAR_13))
  return -VAR_1;

 VAR_11.integer.value = VAR_9;
 VAR_10 = FUNC_1(VAR_7, VAR_8 ? VAR_6 : VAR_5,
           &VAR_12, &VAR_13);
 if (FUNC_0(VAR_10))
  return -VAR_2;



 return 0;
}
