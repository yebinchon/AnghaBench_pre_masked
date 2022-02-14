
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43legacy_phy {int radio_ver; int radio_rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_1,
       u8 VAR_2)
{
 struct b43legacy_phy *VAR_3 = &VAR_1->phy;

 FUNC_2();

 if (VAR_3->radio_ver != 0x2050 || VAR_3->radio_rev >= 6)

  return;

 if (VAR_2 <= 10)
  FUNC_0(VAR_1, VAR_0,
      FUNC_1(VAR_2 + 4));
 else
  FUNC_0(VAR_1, VAR_0,
      FUNC_1(VAR_2));
 FUNC_3(1);
 FUNC_0(VAR_1, VAR_0,
     FUNC_1(VAR_2));
}
