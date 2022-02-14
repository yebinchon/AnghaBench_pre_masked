
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_vsi_ctx {int vsi_num; } ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_vsi_ctx*,struct ice_sq_cd*) ;
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (struct ice_hw*,int ) ;

enum ice_status
FUNC_3(struct ice_hw *VAR_1, u16 VAR_2, struct ice_vsi_ctx *VAR_3,
        struct ice_sq_cd *VAR_4)
{
 if (!FUNC_2(VAR_1, VAR_2))
  return VAR_0;
 VAR_3->vsi_num = FUNC_1(VAR_1, VAR_2);
 return FUNC_0(VAR_1, VAR_3, VAR_4);
}
