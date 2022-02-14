
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_vsi_ctx {int dummy; } ;
struct ice_hw {struct ice_vsi_ctx** vsi_ctx; } ;



__attribute__((used)) static void
FUNC_0(struct ice_hw *VAR_0, u16 VAR_1, struct ice_vsi_ctx *VAR_2)
{
 VAR_0->vsi_ctx[VAR_1] = VAR_2;
}
