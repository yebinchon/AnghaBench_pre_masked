
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iavf_vlan_filter {int remove; } ;
struct iavf_adapter {int mac_vlan_list_lock; int aq_required; } ;


 int VAR_0 ;
 struct iavf_vlan_filter* FUNC_0 (struct iavf_adapter*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iavf_adapter *VAR_1, u16 VAR_2)
{
 struct iavf_vlan_filter *VAR_3;

 FUNC_1(&VAR_1->mac_vlan_list_lock);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3) {
  VAR_3->remove = 1;
  VAR_1->aq_required |= VAR_0;
 }

 FUNC_2(&VAR_1->mac_vlan_list_lock);
}
