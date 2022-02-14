
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {scalar_t__ type; int radio_rev; int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct b43_wldev *VAR_1,
       u16 *VAR_2, u16 *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_1->phy;
 u16 VAR_5, VAR_6, VAR_7;

 if (VAR_4->type == VAR_0) {
  VAR_6 = 0x30;
  if (VAR_4->radio_rev <= 5) {
   VAR_5 = 0x43;
   VAR_7 = 0;
  } else {
   VAR_5 = 0x52;
   VAR_7 = 5;
  }
 } else {
  if (VAR_4->rev >= 2 && VAR_4->radio_rev == 8) {
   VAR_5 = 0x43;
   VAR_6 = 0x10;
   VAR_7 = 2;
  } else {
   VAR_5 = 0x52;
   VAR_6 = 0x30;
   VAR_7 = 5;
  }
 }
 if (VAR_2)
  *VAR_2 = VAR_6;
 if (VAR_3)
  *VAR_3 = VAR_7;

 return VAR_5;
}
