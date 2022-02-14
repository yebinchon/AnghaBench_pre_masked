
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {void* sw_resp; } ;
struct ice_aqc_res_elem {TYPE_1__ e; } ;
struct ice_aqc_alloc_free_res_elem {struct ice_aqc_res_elem* elem; void* res_type; void* num_elems; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,struct ice_aqc_alloc_free_res_elem*) ;
 struct ice_aqc_alloc_free_res_elem* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ice_hw*,int,struct ice_aqc_alloc_free_res_elem*,int,int,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct ice_hw*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static enum ice_status
FUNC_6(struct ice_hw *VAR_14, u16 *VAR_15,
      enum ice_sw_lkup_type VAR_16,
      enum ice_adminq_opc VAR_17)
{
 struct ice_aqc_alloc_free_res_elem *VAR_18;
 struct ice_aqc_res_elem *VAR_19;
 enum ice_status VAR_20;
 u16 VAR_21;

 VAR_21 = sizeof(*VAR_18);
 VAR_18 = FUNC_2(FUNC_4(VAR_14), VAR_21, VAR_0);
 if (!VAR_18)
  return VAR_3;
 VAR_18->num_elems = FUNC_0(1);

 if (VAR_16 == VAR_7 ||
     VAR_16 == VAR_8 ||
     VAR_16 == VAR_5 ||
     VAR_16 == VAR_6 ||
     VAR_16 == VAR_9 ||
     VAR_16 == VAR_10) {
  VAR_18->res_type = FUNC_0(VAR_2);
 } else if (VAR_16 == VAR_11) {
  VAR_18->res_type =
   FUNC_0(VAR_1);
 } else {
  VAR_20 = VAR_4;
  goto ice_aq_alloc_free_vsi_list_exit;
 }

 if (VAR_17 == VAR_13)
  VAR_18->elem[0].e.sw_resp = FUNC_0(*VAR_15);

 VAR_20 = FUNC_3(VAR_14, 1, VAR_18, VAR_21, VAR_17, ((void*)0));
 if (VAR_20)
  goto ice_aq_alloc_free_vsi_list_exit;

 if (VAR_17 == VAR_12) {
  VAR_19 = &VAR_18->elem[0];
  *VAR_15 = FUNC_5(VAR_19->e.sw_resp);
 }

ice_aq_alloc_free_vsi_list_exit:
 FUNC_1(FUNC_4(VAR_14), VAR_18);
 return VAR_20;
}
