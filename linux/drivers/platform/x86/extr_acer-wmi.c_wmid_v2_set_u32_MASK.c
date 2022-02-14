
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static acpi_status FUNC_1(u32 VAR_4, u32 VAR_5)
{
 u16 VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  return VAR_3;
 }
 return FUNC_0(VAR_4, VAR_6);
}
