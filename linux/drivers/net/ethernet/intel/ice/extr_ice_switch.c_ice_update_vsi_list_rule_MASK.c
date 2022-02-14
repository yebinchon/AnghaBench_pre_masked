
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_3__ {void* index; void* number_vsi; void** vsi; } ;
struct TYPE_4__ {TYPE_1__ vsi_list; } ;
struct ice_aqc_sw_rules_elem {TYPE_2__ pdata; void* type; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,struct ice_aqc_sw_rules_elem*) ;
 struct ice_aqc_sw_rules_elem* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct ice_hw*,struct ice_aqc_sw_rules_elem*,int,int,int,int *) ;
 int FUNC_5 (struct ice_hw*,int) ;
 int FUNC_6 (struct ice_hw*) ;
 int FUNC_7 (struct ice_hw*,int) ;

__attribute__((used)) static enum ice_status
FUNC_8(struct ice_hw *VAR_14, u16 *VAR_15, u16 VAR_16,
    u16 VAR_17, bool VAR_18, enum ice_adminq_opc VAR_19,
    enum ice_sw_lkup_type VAR_20)
{
 struct ice_aqc_sw_rules_elem *VAR_21;
 enum ice_status VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 int VAR_25;

 if (!VAR_16)
  return VAR_6;

 if (VAR_20 == VAR_9 ||
     VAR_20 == VAR_10 ||
     VAR_20 == VAR_7 ||
     VAR_20 == VAR_8 ||
     VAR_20 == VAR_11 ||
     VAR_20 == VAR_12)
  VAR_24 = VAR_18 ? VAR_3 :
    VAR_4;
 else if (VAR_20 == VAR_13)
  VAR_24 = VAR_18 ? VAR_1 :
    VAR_2;
 else
  return VAR_6;

 VAR_23 = (u16)FUNC_0(VAR_16);
 VAR_21 = FUNC_3(FUNC_6(VAR_14), VAR_23, VAR_0);
 if (!VAR_21)
  return VAR_5;
 for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++) {
  if (!FUNC_7(VAR_14, VAR_15[VAR_25])) {
   VAR_22 = VAR_6;
   goto exit;
  }

  VAR_21->pdata.vsi_list.vsi[VAR_25] =
   FUNC_1(FUNC_5(VAR_14, VAR_15[VAR_25]));
 }

 VAR_21->type = FUNC_1(VAR_24);
 VAR_21->pdata.vsi_list.number_vsi = FUNC_1(VAR_16);
 VAR_21->pdata.vsi_list.index = FUNC_1(VAR_17);

 VAR_22 = FUNC_4(VAR_14, VAR_21, VAR_23, 1, VAR_19, ((void*)0));

exit:
 FUNC_2(FUNC_6(VAR_14), VAR_21);
 return VAR_22;
}
