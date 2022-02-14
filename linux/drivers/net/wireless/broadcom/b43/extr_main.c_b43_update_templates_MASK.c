
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct b43_wl {int beacon0_uploaded; int beacon1_uploaded; int beacon_update_trigger; int hw; int beacon_lock; struct sk_buff* current_beacon; int vif; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43_wl *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2;
 unsigned long VAR_3;
 VAR_1 = FUNC_1(VAR_0->hw, VAR_0->vif);
 if (FUNC_5(!VAR_1))
  return;

 FUNC_3(&VAR_0->beacon_lock, VAR_3);
 VAR_2 = VAR_0->current_beacon;
 VAR_0->current_beacon = VAR_1;
 VAR_0->beacon0_uploaded = 0;
 VAR_0->beacon1_uploaded = 0;
 FUNC_4(&VAR_0->beacon_lock, VAR_3);

 FUNC_2(VAR_0->hw, &VAR_0->beacon_update_trigger);

 if (VAR_2)
  FUNC_0(VAR_2);
}
