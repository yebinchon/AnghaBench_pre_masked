
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_vsi_list_map_info {int vsi_list_id; int ref_cnt; int list_entry; int vsi_map; } ;
struct ice_switch_info {int vsi_list_map_head; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;


 int VAR_0 ;
 struct ice_vsi_list_map_info* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static struct ice_vsi_list_map_info *
FUNC_4(struct ice_hw *VAR_1, u16 *VAR_2, u16 VAR_3,
   u16 VAR_4)
{
 struct ice_switch_info *VAR_5 = VAR_1->switch_info;
 struct ice_vsi_list_map_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(FUNC_1(VAR_1), 1, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->vsi_list_id = VAR_4;
 VAR_6->ref_cnt = 1;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_3(VAR_2[VAR_7], VAR_6->vsi_map);

 FUNC_2(&VAR_6->list_entry, &VAR_5->vsi_list_map_head);
 return VAR_6;
}
