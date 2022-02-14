
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iavf_vlan_filter {int add; int list; int vlan; } ;
struct iavf_adapter {int mac_vlan_list_lock; int aq_required; int vlan_filter_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iavf_vlan_filter* FUNC_0 (struct iavf_adapter*,int ) ;
 struct iavf_vlan_filter* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct
iavf_vlan_filter *FUNC_5(struct iavf_adapter *VAR_2, u16 VAR_3)
{
 struct iavf_vlan_filter *VAR_4 = ((void*)0);

 FUNC_3(&VAR_2->mac_vlan_list_lock);

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
  if (!VAR_4)
   goto clearout;

  VAR_4->vlan = VAR_3;

  FUNC_2(&VAR_4->list, &VAR_2->vlan_filter_list);
  VAR_4->add = 1;
  VAR_2->aq_required |= VAR_1;
 }

clearout:
 FUNC_4(&VAR_2->mac_vlan_list_lock);
 return VAR_4;
}
