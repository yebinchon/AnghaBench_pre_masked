
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct ice_hw {int port_info; } ;
struct ice_aqc_get_sw_cfg_resp_elem {int vsi_port_num; int pf_vf_num; int swid; } ;
struct ice_aqc_get_sw_cfg_resp {struct ice_aqc_get_sw_cfg_resp_elem* elements; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,void*) ;
 struct ice_aqc_get_sw_cfg_resp* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_aqc_get_sw_cfg_resp*,int ,size_t*,size_t*,int *) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (int ,size_t,int,size_t,size_t,int) ;
 int FUNC_5 (int ) ;

enum ice_status FUNC_6(struct ice_hw *VAR_8)
{
 struct ice_aqc_get_sw_cfg_resp *VAR_9;
 enum ice_status VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12;
 u16 VAR_13;

 VAR_9 = FUNC_1(FUNC_3(VAR_8), VAR_7,
       VAR_0);

 if (!VAR_9)
  return VAR_6;






 do {
  VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_7,
        &VAR_11, &VAR_12, ((void*)0));

  if (VAR_10)
   break;

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   struct ice_aqc_get_sw_cfg_resp_elem *VAR_14;
   u16 VAR_15, VAR_16, VAR_17;
   bool VAR_18 = 0;
   u8 VAR_19;

   VAR_14 = VAR_9[VAR_13].elements;
   VAR_17 = FUNC_5(VAR_14->vsi_port_num) &
    VAR_5;

   VAR_15 = FUNC_5(VAR_14->pf_vf_num) &
    VAR_1;

   VAR_16 = FUNC_5(VAR_14->swid);

   if (FUNC_5(VAR_14->pf_vf_num) &
       VAR_2)
    VAR_18 = 1;

   VAR_19 = FUNC_5(VAR_14->vsi_port_num) >>
    VAR_3;

   if (VAR_19 == VAR_4) {

    continue;
   }

   FUNC_4(VAR_8->port_info, VAR_17,
        VAR_19, VAR_16, VAR_15, VAR_18);
  }
 } while (VAR_11 && !VAR_10);

 FUNC_0(FUNC_3(VAR_8), (void *)VAR_9);
 return VAR_10;
}
