
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct delayed_work {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* wl; scalar_t__ periodic_state; struct delayed_work periodic_work; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (struct delayed_work*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct delayed_work*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_1)
{
 struct delayed_work *VAR_2 = &VAR_1->periodic_work;

 VAR_1->periodic_state = 0;
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_1->wl->hw, VAR_2, 0);
}
