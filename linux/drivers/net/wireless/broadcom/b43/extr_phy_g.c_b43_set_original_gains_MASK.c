
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 u16 VAR_4, VAR_5;
 u16 VAR_6;
 u16 VAR_7 = 0x0008, VAR_8 = 0x0018;

 if (VAR_3->rev <= 1) {
  VAR_7 = 0x0010;
  VAR_8 = 0x0020;
 }

 VAR_6 = VAR_0;
 if (VAR_3->rev <= 1)
  VAR_6 = VAR_1;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = (VAR_4 & 0xFFFC);
  VAR_5 |= (VAR_4 & 0x0001) << 1;
  VAR_5 |= (VAR_4 & 0x0002) >> 1;

  FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5);
 }

 for (VAR_4 = VAR_7; VAR_4 < VAR_8; VAR_4++)
  FUNC_1(VAR_2, VAR_6, VAR_4, VAR_4 - VAR_7);

 FUNC_2(VAR_2, 0x04A0, 0xBFBF, 0x4040);
 FUNC_2(VAR_2, 0x04A1, 0xBFBF, 0x4040);
 FUNC_2(VAR_2, 0x04A2, 0xBFBF, 0x4000);
 FUNC_0(VAR_2, 0, 1);
}
