
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_switch_info {int vsi_list_map_head; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ice_switch_info* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status FUNC_4(struct ice_hw *VAR_2)
{
 struct ice_switch_info *VAR_3;

 VAR_2->switch_info = FUNC_1(FUNC_2(VAR_2),
           sizeof(*VAR_2->switch_info), VAR_0);
 VAR_3 = VAR_2->switch_info;

 if (!VAR_3)
  return VAR_1;

 FUNC_0(&VAR_3->vsi_list_map_head);

 return FUNC_3(VAR_2);
}
