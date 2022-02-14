
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_vsi {int idx; } ;
struct ice_vf {int port_vlan_id; scalar_t__ num_vlan; struct ice_pf* pf; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {struct ice_hw hw; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,int ,int ,int ) ;
 int FUNC_1 (struct ice_hw*,int ,int ,int) ;
 int FUNC_2 (struct ice_hw*,int ,int ,int ) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_vf *VAR_0, struct ice_vsi *VAR_1, u8 VAR_2,
         bool VAR_3)
{
 struct ice_pf *VAR_4 = VAR_0->pf;
 enum ice_status VAR_5 = 0;
 struct ice_hw *VAR_6;

 VAR_6 = &VAR_4->hw;
 if (VAR_0->num_vlan) {
  VAR_5 = FUNC_1(VAR_6, VAR_1->idx, VAR_2,
        VAR_3);
 } else if (VAR_0->port_vlan_id) {
  if (VAR_3)
   VAR_5 = FUNC_0(VAR_6, VAR_1->idx, VAR_2,
             VAR_0->port_vlan_id);
  else
   VAR_5 = FUNC_2(VAR_6, VAR_1->idx, VAR_2,
           VAR_0->port_vlan_id);
 } else {
  if (VAR_3)
   VAR_5 = FUNC_0(VAR_6, VAR_1->idx, VAR_2,
             0);
  else
   VAR_5 = FUNC_2(VAR_6, VAR_1->idx, VAR_2,
           0);
 }

 return VAR_5;
}
