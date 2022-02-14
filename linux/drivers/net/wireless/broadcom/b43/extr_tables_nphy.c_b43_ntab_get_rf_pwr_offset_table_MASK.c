
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int FUNC_1 (int ,char*) ;

const s16 *FUNC_2(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;

 if (FUNC_0(VAR_4->wl) == VAR_0) {
  switch (VAR_5->rev) {
  case 17:
   if (VAR_5->radio_rev == 14)
    return VAR_1;
   break;
  case 16:
   if (VAR_5->radio_rev == 9)
    return VAR_2;
   break;
  }

  FUNC_1(VAR_4->wl,
         "No 2GHz RF power table available for this device\n");
  return ((void*)0);
 } else {
  switch (VAR_5->rev) {
  case 16:
   if (VAR_5->radio_rev == 9)
    return VAR_3;
   break;
  }

  FUNC_1(VAR_4->wl,
         "No 5GHz RF power table available for this device\n");
  return ((void*)0);
 }
}
