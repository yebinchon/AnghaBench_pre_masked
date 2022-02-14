
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_plcp_hdr6 {int* raw; } ;



__attribute__((used)) static int FUNC_0(struct b43_plcp_hdr6 *VAR_0, bool VAR_1)
{

 int VAR_2 = VAR_1 ? 0 : 4;

 switch (VAR_0->raw[0] & 0xF) {
 case 0xB:
  return VAR_2 + 0;
 case 0xF:
  return VAR_2 + 1;
 case 0xA:
  return VAR_2 + 2;
 case 0xE:
  return VAR_2 + 3;
 case 0x9:
  return VAR_2 + 4;
 case 0xD:
  return VAR_2 + 5;
 case 0x8:
  return VAR_2 + 6;
 case 0xC:
  return VAR_2 + 7;
 }
 return -1;
}
