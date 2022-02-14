
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u16 ;
struct ice_vsi_ctx {size_t* num_lan_q_entries; struct ice_q_ctx** lan_q_ctx; } ;
struct ice_q_ctx {int dummy; } ;
struct ice_hw {int dummy; } ;


 struct ice_vsi_ctx* FUNC_0 (struct ice_hw*,size_t) ;

__attribute__((used)) static struct ice_q_ctx *
FUNC_1(struct ice_hw *VAR_0, u16 VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct ice_vsi_ctx *VAR_4;
 struct ice_q_ctx *VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4)
  return ((void*)0);
 if (VAR_3 >= VAR_4->num_lan_q_entries[VAR_2])
  return ((void*)0);
 if (!VAR_4->lan_q_ctx[VAR_2])
  return ((void*)0);
 VAR_5 = VAR_4->lan_q_ctx[VAR_2];
 return &VAR_5[VAR_3];
}
