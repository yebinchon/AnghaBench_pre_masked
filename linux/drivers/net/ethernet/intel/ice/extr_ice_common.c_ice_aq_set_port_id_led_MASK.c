
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_sq_cd {int dummy; } ;
struct ice_port_info {struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_set_port_id_led {int ident_mode; } ;
struct TYPE_2__ {struct ice_aqc_set_port_id_led set_port_id_led; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,struct ice_sq_cd*) ;
 int VAR_2 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

enum ice_status
FUNC_2(struct ice_port_info *VAR_3, bool VAR_4,
         struct ice_sq_cd *VAR_5)
{
 struct ice_aqc_set_port_id_led *VAR_6;
 struct ice_hw *VAR_7 = VAR_3->hw;
 struct ice_aq_desc VAR_8;

 VAR_6 = &VAR_8.params.set_port_id_led;

 FUNC_1(&VAR_8, VAR_2);

 if (VAR_4)
  VAR_6->ident_mode = VAR_1;
 else
  VAR_6->ident_mode = VAR_0;

 return FUNC_0(VAR_7, &VAR_8, ((void*)0), 0, VAR_5);
}
