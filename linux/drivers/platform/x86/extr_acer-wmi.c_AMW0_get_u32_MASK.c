
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int brightness; int bluetooth; int wireless; int mailled; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static acpi_status FUNC_1(u32 *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 switch (VAR_4) {
 case 129:
  switch (VAR_2->mailled) {
  default:
   VAR_5 = FUNC_0(0xA, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = (VAR_6 >> 7) & 0x1;
   return VAR_1;
  }
  break;
 case 128:
  switch (VAR_2->wireless) {
  case 1:
   VAR_5 = FUNC_0(0x7B, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = VAR_6 & 0x1;
   return VAR_1;
  case 2:
   VAR_5 = FUNC_0(0x71, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = VAR_6 & 0x1;
   return VAR_1;
  case 3:
   VAR_5 = FUNC_0(0x78, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = VAR_6 & 0x1;
   return VAR_1;
  default:
   VAR_5 = FUNC_0(0xA, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = (VAR_6 >> 2) & 0x1;
   return VAR_1;
  }
  break;
 case 131:
  switch (VAR_2->bluetooth) {
  default:
   VAR_5 = FUNC_0(0xA, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = (VAR_6 >> 4) & 0x1;
   return VAR_1;
  }
  break;
 case 130:
  switch (VAR_2->brightness) {
  default:
   VAR_5 = FUNC_0(0x83, &VAR_6);
   if (VAR_5)
    return VAR_0;
   *VAR_3 = VAR_6;
   return VAR_1;
  }
  break;
 default:
  return VAR_0;
 }
 return VAR_1;
}
