
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_3__ {scalar_t__ sq_last_status; } ;
struct ice_hw {TYPE_1__ adminq; } ;
struct ice_aqc_list_caps {int count; } ;
struct TYPE_4__ {struct ice_aqc_list_caps get_cap; } ;
struct ice_aq_desc {TYPE_2__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,void*,int ,struct ice_sq_cd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ice_aq_desc*,int) ;
 int FUNC_2 (struct ice_hw*,void*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_4, void *VAR_5, u16 VAR_6, u32 *VAR_7,
       enum ice_adminq_opc VAR_8, struct ice_sq_cd *VAR_9)
{
 struct ice_aqc_list_caps *VAR_10;
 struct ice_aq_desc VAR_11;
 enum ice_status VAR_12;

 VAR_10 = &VAR_11.params.get_cap;

 if (VAR_8 != VAR_3 &&
     VAR_8 != VAR_2)
  return VAR_1;

 FUNC_1(&VAR_11, VAR_8);

 VAR_12 = FUNC_0(VAR_4, &VAR_11, VAR_5, VAR_6, VAR_9);
 if (!VAR_12)
  FUNC_2(VAR_4, VAR_5, FUNC_3(VAR_10->count), VAR_8);
 else if (VAR_4->adminq.sq_last_status == VAR_0)
  *VAR_7 = FUNC_3(VAR_10->count);
 return VAR_12;
}
