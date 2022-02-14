
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

void FUNC_3(struct b43_wldev *VAR_4, u32 VAR_5,
    unsigned int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 u8 *VAR_9 = VAR_7;
 unsigned int VAR_10;

 VAR_8 = VAR_5 & VAR_0;
 VAR_5 &= ~VAR_0;
 FUNC_0(VAR_5 > 0xFFFF);

 FUNC_2(VAR_4, VAR_1, VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  switch (VAR_8) {
  case 128:
   *VAR_9 = FUNC_1(VAR_4, VAR_3) & 0xFF;
   VAR_9++;
   break;
  case 130:
   *((u16 *)VAR_9) = FUNC_1(VAR_4, VAR_3);
   VAR_9 += 2;
   break;
  case 129:
   *((u32 *)VAR_9) = FUNC_1(VAR_4, VAR_2);
   *((u32 *)VAR_9) <<= 16;
   *((u32 *)VAR_9) |= FUNC_1(VAR_4, VAR_3);
   VAR_9 += 4;
   break;
  default:
   FUNC_0(1);
  }
 }
}
