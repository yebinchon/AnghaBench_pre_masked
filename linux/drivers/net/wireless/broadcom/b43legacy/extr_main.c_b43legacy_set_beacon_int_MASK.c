
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_wldev {int wl; TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_wldev *VAR_2,
         u16 VAR_3)
{
 FUNC_0(VAR_2);
 if (VAR_2->dev->id.revision >= 3) {
  FUNC_3(VAR_2, VAR_0,
     (VAR_3 << 16));
  FUNC_3(VAR_2, VAR_1,
     (VAR_3 << 10));
 } else {
  FUNC_2(VAR_2, 0x606, (VAR_3 >> 6));
  FUNC_2(VAR_2, 0x610, VAR_3);
 }
 FUNC_1(VAR_2);
 FUNC_4(VAR_2->wl, "Set beacon interval to %u\n", VAR_3);
}
