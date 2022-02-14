
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ radio_on; } ;
struct b43_wldev {scalar_t__ radio_hw_enable; TYPE_1__ phy; } ;
struct b43_led {int hw_state; int activelow; int index; int state; int wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_1,
      struct b43_led *VAR_2)
{
 bool VAR_3;
 bool VAR_4;

 if (!VAR_2->wl)
  return;

 VAR_3 = (VAR_1->phy.radio_on && VAR_1->radio_hw_enable);




 if (VAR_3)
  VAR_4 = FUNC_0(&VAR_2->state) != VAR_0;
 else
  VAR_4 = 0;
 if (VAR_4 == VAR_2->hw_state)
  return;
 VAR_2->hw_state = VAR_4;

 if (VAR_4)
  FUNC_2(VAR_1, VAR_2->index, VAR_2->activelow);
 else
  FUNC_1(VAR_1, VAR_2->index, VAR_2->activelow);
}
