
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blank_nvm_mode; } ;
struct ice_hw {TYPE_1__ nvm; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_access_type { ____Placeholder_ice_aq_res_access_type } ice_aq_res_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,int ,int,int ) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_hw *VAR_2, enum ice_aq_res_access_type VAR_3)
{
 if (VAR_2->nvm.blank_nvm_mode)
  return 0;

 return FUNC_0(VAR_2, VAR_0, VAR_3, VAR_1);
}
