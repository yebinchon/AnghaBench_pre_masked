
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_hw {scalar_t__* vsi_ctx; } ;


 size_t VAR_0 ;

bool FUNC_0(struct ice_hw *VAR_1, u16 VAR_2)
{
 return VAR_2 < VAR_0 && VAR_1->vsi_ctx[VAR_2];
}
