
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_port_info {int sched_lock; } ;
struct ice_aqc_port_ets_elem {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_port_info*,struct ice_aqc_port_ets_elem*,int ,struct ice_sq_cd*) ;
 int FUNC_1 (struct ice_port_info*,struct ice_aqc_port_ets_elem*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

enum ice_status
FUNC_4(struct ice_port_info *VAR_0,
     struct ice_aqc_port_ets_elem *VAR_1, u16 VAR_2,
     struct ice_sq_cd *VAR_3)
{
 enum ice_status VAR_4;

 FUNC_2(&VAR_0->sched_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->sched_lock);
 return VAR_4;
}
