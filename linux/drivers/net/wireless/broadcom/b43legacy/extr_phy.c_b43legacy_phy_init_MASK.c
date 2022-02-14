
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int type; int rev; } ;
struct b43legacy_wldev {int wl; struct b43legacy_phy phy; } ;




 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 int VAR_3 = -VAR_0;

 switch (VAR_2->type) {
 case 129:
  switch (VAR_2->rev) {
  case 2:
   FUNC_0(VAR_1);
   VAR_3 = 0;
   break;
  case 4:
   FUNC_1(VAR_1);
   VAR_3 = 0;
   break;
  case 5:
   FUNC_2(VAR_1);
   VAR_3 = 0;
   break;
  case 6:
   FUNC_3(VAR_1);
   VAR_3 = 0;
   break;
  }
  break;
 case 128:
  FUNC_4(VAR_1);
  VAR_3 = 0;
  break;
 }
 if (VAR_3)
  FUNC_5(VAR_1->wl, "Unknown PHYTYPE found\n");

 return VAR_3;
}
