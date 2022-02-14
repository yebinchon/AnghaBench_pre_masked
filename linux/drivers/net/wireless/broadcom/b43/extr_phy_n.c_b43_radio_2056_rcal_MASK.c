
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u8 FUNC_5(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;
 u16 VAR_5, VAR_6;

 if (VAR_4->rev != 3)
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0, VAR_5 | 0x7);

 FUNC_4(10);
 FUNC_2(VAR_3, VAR_2, 0x01);
 FUNC_4(10);
 FUNC_2(VAR_3, VAR_2, 0x09);

 if (!FUNC_1(VAR_3, VAR_1, 0x80, 0x80, 100,
      1000000)) {
  FUNC_3(VAR_3->wl, "Radio recalibration timeout\n");
  return 0;
 }

 FUNC_2(VAR_3, VAR_2, 0x01);
 VAR_6 = FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_2, 0x00);

 FUNC_2(VAR_3, VAR_0, VAR_5);

 return VAR_6 & 0x1f;
}
