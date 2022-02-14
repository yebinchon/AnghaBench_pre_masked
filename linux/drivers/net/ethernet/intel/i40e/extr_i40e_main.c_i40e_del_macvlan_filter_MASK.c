
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_aqc_remove_macvlan_element_data {int flags; scalar_t__ vlan_tag; int mac_addr; } ;
typedef int i40e_status ;
typedef int element ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (struct i40e_hw*,int ,struct i40e_aqc_remove_macvlan_element_data*,int,int *) ;
 int FUNC_2 (struct i40e_aqc_remove_macvlan_element_data*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_hw *VAR_1, u16 VAR_2,
        const u8 *VAR_3, int *VAR_4)
{
 struct i40e_aqc_remove_macvlan_element_data VAR_5;
 i40e_status VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_5.mac_addr, VAR_3);
 VAR_5.vlan_tag = 0;
 VAR_5.flags = VAR_0;
 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, 1, ((void*)0));
 *VAR_4 = VAR_1->aq.asq_last_status;

 return VAR_6;
}
