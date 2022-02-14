
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static acpi_status
FUNC_4(acpi_handle VAR_4,
       u32 VAR_5, void *VAR_6, void **VAR_7)
{
 acpi_status VAR_8;
 int *VAR_9 = VAR_6;

 VAR_8 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_8))
  return VAR_2;

 switch (*VAR_9) {
 case 129:
  FUNC_1(VAR_4,
         VAR_0,
         VAR_3,
         ((void*)0));
  break;
 case 128:
  FUNC_2(VAR_4,
        VAR_0,
        VAR_3);
  break;
 default:
  break;
 }


 return VAR_1;
}
