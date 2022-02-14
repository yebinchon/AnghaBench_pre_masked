
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_suspend_resume_elem {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,int ,void*,int ,int *,struct ice_sq_cd*) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_hw *VAR_1, u16 VAR_2,
      struct ice_aqc_suspend_resume_elem *VAR_3,
      u16 VAR_4, u16 *VAR_5, struct ice_sq_cd *VAR_6)
{
 return FUNC_0(VAR_1, VAR_0,
        VAR_2, (void *)VAR_3, VAR_4,
        VAR_5, VAR_6);
}
