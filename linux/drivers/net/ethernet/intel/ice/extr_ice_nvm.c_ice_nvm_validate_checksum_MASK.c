
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_aqc_nvm_checksum {int checksum; int flags; } ;
struct TYPE_2__ {struct ice_aqc_nvm_checksum nvm_checksum; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_hw*,int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 int FUNC_3 (struct ice_hw*) ;
 scalar_t__ FUNC_4 (int ) ;

enum ice_status FUNC_5(struct ice_hw *VAR_5)
{
 struct ice_aqc_nvm_checksum *VAR_6;
 struct ice_aq_desc VAR_7;
 enum ice_status VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = &VAR_7.params.nvm_checksum;

 FUNC_2(&VAR_7, VAR_4);
 VAR_6->flags = VAR_1;

 VAR_8 = FUNC_1(VAR_5, &VAR_7, ((void*)0), 0, ((void*)0));
 FUNC_3(VAR_5);

 if (!VAR_8)
  if (FUNC_4(VAR_6->checksum) != VAR_0)
   VAR_8 = VAR_2;

 return VAR_8;
}
