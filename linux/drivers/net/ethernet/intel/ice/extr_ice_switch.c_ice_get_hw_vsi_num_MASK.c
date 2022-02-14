
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ice_hw {TYPE_1__** vsi_ctx; } ;
struct TYPE_2__ {size_t vsi_num; } ;



u16 FUNC_0(struct ice_hw *VAR_0, u16 VAR_1)
{
 return VAR_0->vsi_ctx[VAR_1]->vsi_num;
}
