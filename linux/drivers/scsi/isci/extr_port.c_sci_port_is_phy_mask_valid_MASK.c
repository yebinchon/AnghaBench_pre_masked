
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isci_port {int physical_port_index; } ;



__attribute__((used)) static bool FUNC_0(
 struct isci_port *VAR_0,
 u32 VAR_1)
{
 if (VAR_0->physical_port_index == 0) {
  if (((VAR_1 & 0x0F) == 0x0F)
      || ((VAR_1 & 0x03) == 0x03)
      || ((VAR_1 & 0x01) == 0x01)
      || (VAR_1 == 0))
   return 1;
 } else if (VAR_0->physical_port_index == 1) {
  if (((VAR_1 & 0x02) == 0x02)
      || (VAR_1 == 0))
   return 1;
 } else if (VAR_0->physical_port_index == 2) {
  if (((VAR_1 & 0x0C) == 0x0C)
      || ((VAR_1 & 0x04) == 0x04)
      || (VAR_1 == 0))
   return 1;
 } else if (VAR_0->physical_port_index == 3) {
  if (((VAR_1 & 0x08) == 0x08)
      || (VAR_1 == 0))
   return 1;
 }

 return 0;
}
