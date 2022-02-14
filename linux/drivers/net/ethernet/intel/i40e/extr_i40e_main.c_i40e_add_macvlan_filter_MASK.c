
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_aqc_add_macvlan_element_data {int flags; int match_method; scalar_t__ queue_number; scalar_t__ vlan_tag; int mac_addr; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (struct i40e_hw*,int ,struct i40e_aqc_add_macvlan_element_data*,int,int *) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_hw *VAR_2, u16 VAR_3,
        const u8 *VAR_4, int *VAR_5)
{
 struct i40e_aqc_add_macvlan_element_data VAR_6;
 i40e_status VAR_7;
 u16 VAR_8 = 0;

 FUNC_1(VAR_6.mac_addr, VAR_4);
 VAR_6.vlan_tag = 0;
 VAR_6.queue_number = 0;
 VAR_6.match_method = VAR_1;
 VAR_8 |= VAR_0;
 VAR_6.flags = FUNC_0(VAR_8);
 VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_6, 1, ((void*)0));
 *VAR_5 = VAR_2->aq.asq_last_status;

 return VAR_7;
}
