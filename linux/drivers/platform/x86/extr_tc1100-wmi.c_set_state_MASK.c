
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_buffer {int length; int* pointer; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_2(u32 *VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 acpi_status VAR_6;
 struct acpi_buffer VAR_7;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_4 > 2)
  return -VAR_1;

 switch (VAR_4) {
 case 128:
  VAR_5 = (*VAR_3) ? 1 : 2;
  break;
 case 129:
  VAR_5 = (*VAR_3) ? 0 : 1;
  break;
 default:
  return -VAR_1;
 }

 VAR_7.length = sizeof(u32);
 VAR_7.pointer = &VAR_5;

 VAR_6 = FUNC_1(VAR_2, VAR_4, &VAR_7);
 if (FUNC_0(VAR_6))
  return -VAR_1;

 return 0;
}
