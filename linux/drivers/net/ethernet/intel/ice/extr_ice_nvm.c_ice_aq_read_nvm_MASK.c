
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_nvm {int offset_high; void* length; void* offset_low; void* module_typeid; int cmd_flags; } ;
struct TYPE_2__ {struct ice_aqc_nvm nvm; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,void*,int,struct ice_sq_cd*) ;
 int VAR_2 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_3, u16 VAR_4, u32 VAR_5, u16 VAR_6,
  void *VAR_7, bool VAR_8, struct ice_sq_cd *VAR_9)
{
 struct ice_aq_desc VAR_10;
 struct ice_aqc_nvm *VAR_11;

 VAR_11 = &VAR_10.params.nvm;


 if (VAR_5 & 0xFF000000)
  return VAR_1;

 FUNC_2(&VAR_10, VAR_2);


 if (VAR_8)
  VAR_11->cmd_flags |= VAR_0;
 VAR_11->module_typeid = FUNC_0(VAR_4);
 VAR_11->offset_low = FUNC_0(VAR_5 & 0xFFFF);
 VAR_11->offset_high = (VAR_5 >> 16) & 0xFF;
 VAR_11->length = FUNC_0(VAR_6);

 return FUNC_1(VAR_3, &VAR_10, VAR_7, VAR_6, VAR_9);
}
