
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_handle ;



 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(acpi_handle VAR_0, u32 VAR_1,
 void *VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0);
  break;
 default:
  FUNC_1("Unsupported event [0x%x]\n", VAR_1);
  break;
 }
}
