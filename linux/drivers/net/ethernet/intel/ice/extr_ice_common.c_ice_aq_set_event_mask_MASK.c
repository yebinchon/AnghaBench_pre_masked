
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_set_event_mask {int event_mask; int lport_num; } ;
struct TYPE_2__ {struct ice_aqc_set_event_mask set_event_mask; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;

enum ice_status
FUNC_3(struct ice_hw *VAR_1, u8 VAR_2, u16 VAR_3,
        struct ice_sq_cd *VAR_4)
{
 struct ice_aqc_set_event_mask *VAR_5;
 struct ice_aq_desc VAR_6;

 VAR_5 = &VAR_6.params.set_event_mask;

 FUNC_2(&VAR_6, VAR_0);

 VAR_5->lport_num = VAR_2;

 VAR_5->event_mask = FUNC_0(VAR_3);
 return FUNC_1(VAR_1, &VAR_6, ((void*)0), 0, VAR_4);
}
