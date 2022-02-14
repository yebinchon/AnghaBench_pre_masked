
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_aqc_q_shutdown {int driver_unloading; } ;
struct TYPE_2__ {struct ice_aqc_q_shutdown q_shutdown; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

enum ice_status FUNC_2(struct ice_hw *VAR_2, bool VAR_3)
{
 struct ice_aqc_q_shutdown *VAR_4;
 struct ice_aq_desc VAR_5;

 VAR_4 = &VAR_5.params.q_shutdown;

 FUNC_1(&VAR_5, VAR_1);

 if (VAR_3)
  VAR_4->driver_unloading = VAR_0;

 return FUNC_0(VAR_2, &VAR_5, ((void*)0), 0, ((void*)0));
}
