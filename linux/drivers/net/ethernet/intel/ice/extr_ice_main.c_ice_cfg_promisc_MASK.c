
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ice_vsi {scalar_t__ type; int idx; scalar_t__ vlan_ena; TYPE_1__* back; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {struct ice_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ice_hw*,int ,int ,int ) ;
 int FUNC_1 (struct ice_hw*,int ,int ,int) ;
 int FUNC_2 (struct ice_hw*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ice_vsi *VAR_2, u8 VAR_3, bool VAR_4)
{
 struct ice_hw *VAR_5 = &VAR_2->back->hw;
 enum ice_status VAR_6 = 0;

 if (VAR_2->type != VAR_1)
  return 0;

 if (VAR_2->vlan_ena) {
  VAR_6 = FUNC_1(VAR_5, VAR_2->idx, VAR_3,
        VAR_4);
 } else {
  if (VAR_4)
   VAR_6 = FUNC_2(VAR_5, VAR_2->idx, VAR_3,
           0);
  else
   VAR_6 = FUNC_0(VAR_5, VAR_2->idx, VAR_3,
             0);
 }

 if (VAR_6)
  return -VAR_0;

 return 0;
}
