
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_2 (struct b43legacy_wldev*) ;

bool FUNC_3(struct b43legacy_wldev *VAR_5)
{
 if (VAR_5->dev->id.revision >= 3) {
  if (!(FUNC_1(VAR_5, VAR_0)
        & VAR_1))
   return 1;
 } else {





  if (FUNC_2(VAR_5) < VAR_4)
   return 1;
  if (FUNC_0(VAR_5, VAR_2)
      & VAR_3)
   return 1;
 }
 return 0;
}
