
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {int mng_vlan_id; int * active_vlans; int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (int ) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int,int) ;

int FUNC_11(struct net_device *VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_8(VAR_4);
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 int VAR_7 = VAR_0;

 while (FUNC_9(VAR_3, &VAR_5->flags) && VAR_7--)
  FUNC_10(10000, 20000);

 FUNC_0(FUNC_9(VAR_3, &VAR_5->flags));
 FUNC_1(VAR_5);
 FUNC_5(VAR_5);
 FUNC_4(VAR_5);

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);




 if ((VAR_6->mng_cookie.status &
      VAR_1) &&
     !FUNC_9(VAR_5->mng_vlan_id, VAR_5->active_vlans)) {
  FUNC_6(VAR_4, FUNC_7(VAR_2),
           VAR_5->mng_vlan_id);
 }

 return 0;
}
