
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct b43legacy_phy {int type; int channel; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int country_code; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

int FUNC_8(struct b43legacy_wldev *VAR_5,
      u8 VAR_6,
      int VAR_7)
{
 struct b43legacy_phy *VAR_8 = &VAR_5->phy;

 if (VAR_6 == 0xFF) {
  switch (VAR_8->type) {
  case 129:
  case 128:
   VAR_6 = VAR_2;
   break;
  default:
   FUNC_0(1);
  }
 }


 if (VAR_7)
  FUNC_4(VAR_5, VAR_6);

 FUNC_5(VAR_5, VAR_0,
     FUNC_6(VAR_6));

 if (VAR_6 == 14) {
  if (VAR_5->dev->bus->sprom.country_code == 5)
   FUNC_3(VAR_5, VAR_3,
           VAR_4,
           FUNC_2(VAR_5,
           VAR_3,
           VAR_4)
           & ~(1 << 7));
  else
   FUNC_3(VAR_5, VAR_3,
           VAR_4,
           FUNC_2(VAR_5,
           VAR_3,
           VAR_4)
           | (1 << 7));
  FUNC_5(VAR_5, VAR_1,
      FUNC_1(VAR_5,
      VAR_1) | (1 << 11));
 } else
  FUNC_5(VAR_5, VAR_1,
      FUNC_1(VAR_5,
      VAR_1) & 0xF7BF);

 VAR_8->channel = VAR_6;


 FUNC_7(8);

 return 0;
}
