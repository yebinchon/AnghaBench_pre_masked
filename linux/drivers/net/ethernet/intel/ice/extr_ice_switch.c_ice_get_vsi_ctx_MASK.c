
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_vsi_ctx {int dummy; } ;
struct ice_hw {struct ice_vsi_ctx** vsi_ctx; } ;


 size_t VAR_0 ;

struct ice_vsi_ctx *FUNC_0(struct ice_hw *VAR_1, u16 VAR_2)
{
 return (VAR_2 >= VAR_0) ? ((void*)0) : VAR_1->vsi_ctx[VAR_2];
}
