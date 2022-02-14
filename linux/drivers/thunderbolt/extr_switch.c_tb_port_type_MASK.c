
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tb_regs_port_header {int type; } ;



__attribute__((used)) static const char *FUNC_0(struct tb_regs_port_header *VAR_0)
{
 switch (VAR_0->type >> 16) {
 case 0:
  switch ((u8) VAR_0->type) {
  case 0:
   return "Inactive";
  case 1:
   return "Port";
  case 2:
   return "NHI";
  default:
   return "unknown";
  }
 case 0x2:
  return "Ethernet";
 case 0x8:
  return "SATA";
 case 0xe:
  return "DP/HDMI";
 case 0x10:
  return "PCIe";
 case 0x20:
  return "USB";
 default:
  return "unknown";
 }
}
