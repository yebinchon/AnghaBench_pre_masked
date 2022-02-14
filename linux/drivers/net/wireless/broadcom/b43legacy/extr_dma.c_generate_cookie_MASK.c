
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_dmaring {int index; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(struct b43legacy_dmaring *VAR_0,
      int VAR_1)
{
 u16 VAR_2 = 0x1000;







 switch (VAR_0->index) {
 case 0:
  VAR_2 = 0xA000;
  break;
 case 1:
  VAR_2 = 0xB000;
  break;
 case 2:
  VAR_2 = 0xC000;
  break;
 case 3:
  VAR_2 = 0xD000;
  break;
 case 4:
  VAR_2 = 0xE000;
  break;
 case 5:
  VAR_2 = 0xF000;
  break;
 }
 FUNC_0(!(((u16)VAR_1 & 0xF000) == 0x0000));
 VAR_2 |= (u16)VAR_1;

 return VAR_2;
}
