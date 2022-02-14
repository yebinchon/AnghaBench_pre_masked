
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_vsi_ctx {scalar_t__ vsi_num; } ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ice_vsi_ctx* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_vsi_ctx*,struct ice_sq_cd*) ;
 int FUNC_2 (struct ice_hw*,struct ice_vsi_ctx*,int,struct ice_sq_cd*) ;
 struct ice_vsi_ctx* FUNC_3 (struct ice_hw*,scalar_t__) ;
 int FUNC_4 (struct ice_hw*) ;
 int FUNC_5 (struct ice_hw*,scalar_t__,struct ice_vsi_ctx*) ;

enum ice_status
FUNC_6(struct ice_hw *VAR_4, u16 VAR_5, struct ice_vsi_ctx *VAR_6,
     struct ice_sq_cd *VAR_7)
{
 struct ice_vsi_ctx *VAR_8;
 enum ice_status VAR_9;

 if (VAR_5 >= VAR_3)
  return VAR_2;
 VAR_9 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_8) {

  VAR_8 = FUNC_0(FUNC_4(VAR_4),
        sizeof(*VAR_8), VAR_0);
  if (!VAR_8) {
   FUNC_2(VAR_4, VAR_6, 0, VAR_7);
   return VAR_1;
  }
  *VAR_8 = *VAR_6;
  FUNC_5(VAR_4, VAR_5, VAR_8);
 } else {

  if (VAR_8->vsi_num != VAR_6->vsi_num)
   VAR_8->vsi_num = VAR_6->vsi_num;
 }

 return 0;
}
