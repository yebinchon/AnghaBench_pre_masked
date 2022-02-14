
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

void FUNC_2(struct b43_wldev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_5 & VAR_0;
 VAR_5 &= 0xFFFF;

 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_6 & ~0xFF);
  FUNC_1(VAR_4, VAR_1, VAR_5);
  FUNC_1(VAR_4, VAR_3, VAR_6);
  break;
 case 130:
  FUNC_0(VAR_6 & ~0xFFFF);
  FUNC_1(VAR_4, VAR_1, VAR_5);
  FUNC_1(VAR_4, VAR_3, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_4, VAR_1, VAR_5);
  FUNC_1(VAR_4, VAR_2, VAR_6 >> 16);
  FUNC_1(VAR_4, VAR_3, VAR_6 & 0xFFFF);
  break;
 default:
  FUNC_0(1);
 }

 return;
}
