
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43legacy_plcp_hdr6 {int* raw; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(struct b43legacy_plcp_hdr6 *VAR_0)
{
 switch (VAR_0->raw[0]) {
 case 0x0A:
  return 0;
 case 0x14:
  return 1;
 case 0x37:
  return 2;
 case 0x6E:
  return 3;
 }
 FUNC_0(1);
 return -1;
}
