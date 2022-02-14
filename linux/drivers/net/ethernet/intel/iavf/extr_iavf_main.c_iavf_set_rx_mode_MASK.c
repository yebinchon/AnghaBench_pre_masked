
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct iavf_adapter {int flags; int aq_required; int mac_vlan_list_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_10)
{
 struct iavf_adapter *VAR_11 = FUNC_2(VAR_10);

 FUNC_3(&VAR_11->mac_vlan_list_lock);
 FUNC_1(VAR_10, VAR_8, VAR_9);
 FUNC_0(VAR_10, VAR_8, VAR_9);
 FUNC_4(&VAR_11->mac_vlan_list_lock);

 if (VAR_10->flags & VAR_7 &&
     !(VAR_11->flags & VAR_5))
  VAR_11->aq_required |= VAR_4;
 else if (!(VAR_10->flags & VAR_7) &&
   VAR_11->flags & VAR_5)
  VAR_11->aq_required |= VAR_2;

 if (VAR_10->flags & VAR_6 &&
     !(VAR_11->flags & VAR_0))
  VAR_11->aq_required |= VAR_3;
 else if (!(VAR_10->flags & VAR_6) &&
   VAR_11->flags & VAR_0)
  VAR_11->aq_required |= VAR_1;
}
