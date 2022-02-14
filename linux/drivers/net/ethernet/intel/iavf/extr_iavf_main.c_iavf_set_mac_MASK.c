
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct iavf_mac_filter {int remove; } ;
struct TYPE_2__ {int addr; } ;
struct iavf_hw {TYPE_1__ mac; } ;
struct iavf_adapter {int mac_vlan_list_lock; int aq_required; struct iavf_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct iavf_mac_filter* FUNC_2 (struct iavf_adapter*,int ) ;
 struct iavf_mac_filter* FUNC_3 (struct iavf_adapter*,int ) ;
 int FUNC_4 (int ) ;
 struct iavf_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, void *VAR_4)
{
 struct iavf_adapter *VAR_5 = FUNC_5(VAR_3);
 struct iavf_hw *VAR_6 = &VAR_5->hw;
 struct iavf_mac_filter *VAR_7;
 struct sockaddr *VAR_8 = VAR_4;

 if (!FUNC_4(VAR_8->sa_data))
  return -VAR_0;

 if (FUNC_1(VAR_3->dev_addr, VAR_8->sa_data))
  return 0;

 FUNC_6(&VAR_5->mac_vlan_list_lock);

 VAR_7 = FUNC_3(VAR_5, VAR_6->mac.addr);
 if (VAR_7) {
  VAR_7->remove = 1;
  VAR_5->aq_required |= VAR_2;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_8->sa_data);

 FUNC_7(&VAR_5->mac_vlan_list_lock);

 if (VAR_7) {
  FUNC_0(VAR_6->mac.addr, VAR_8->sa_data);
 }

 return (VAR_7 == ((void*)0)) ? -VAR_1 : 0;
}
