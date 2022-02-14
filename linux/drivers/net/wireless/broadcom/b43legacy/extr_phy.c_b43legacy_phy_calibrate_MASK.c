
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int calibrated; scalar_t__ type; int rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;

void FUNC_3(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_3->phy;

 FUNC_1(VAR_3, VAR_0);
 if (VAR_4->calibrated)
  return;
 if (VAR_4->type == VAR_1 && VAR_4->rev == 1) {
  FUNC_2(VAR_3, 0);
  FUNC_0(VAR_3);
  FUNC_2(VAR_3, VAR_2);
 }
 VAR_4->calibrated = 1;
}
