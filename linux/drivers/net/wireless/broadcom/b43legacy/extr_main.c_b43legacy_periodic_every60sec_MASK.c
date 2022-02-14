
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_1)
{
 FUNC_3(VAR_1);
 if (VAR_1->dev->bus->sprom.boardflags_lo & VAR_0) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
}
