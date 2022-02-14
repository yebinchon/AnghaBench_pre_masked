
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* ops; } ;
struct b43_wldev {TYPE_5__* wl; TYPE_4__ phy; TYPE_2__* dev; } ;
struct TYPE_10__ {int * current_beacon; } ;
struct TYPE_8__ {int (* switch_analog ) (struct b43_wldev*,int ) ;} ;
struct TYPE_7__ {int bus_type; TYPE_1__* bdev; } ;
struct TYPE_6__ {int bus; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_5)
{
 FUNC_0(VAR_5 && FUNC_8(VAR_5) > VAR_3);
 if (!VAR_5 || FUNC_8(VAR_5) != VAR_3)
  return;

 FUNC_7(VAR_5, VAR_4);


 FUNC_5(VAR_5, VAR_2, ~VAR_1,
        VAR_0);

 switch (VAR_5->dev->bus_type) {
 }

 FUNC_4(VAR_5);
 FUNC_6(VAR_5);
 FUNC_2(VAR_5);
 VAR_5->phy.ops->switch_analog(VAR_5, 0);
 if (VAR_5->wl->current_beacon) {
  FUNC_10(VAR_5->wl->current_beacon);
  VAR_5->wl->current_beacon = ((void*)0);
 }

 FUNC_3(VAR_5, 0);
 FUNC_1(VAR_5);
}
