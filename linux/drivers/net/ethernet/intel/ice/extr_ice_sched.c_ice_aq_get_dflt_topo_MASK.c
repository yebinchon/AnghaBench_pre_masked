
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_topo_elem {int dummy; } ;
struct ice_aqc_get_topo {int num_branches; int port_num; } ;
struct TYPE_2__ {struct ice_aqc_get_topo get_topo; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_get_topo_elem*,int ,struct ice_sq_cd*) ;
 int VAR_0 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_1, u8 VAR_2,
       struct ice_aqc_get_topo_elem *VAR_3, u16 VAR_4,
       u8 *VAR_5, struct ice_sq_cd *VAR_6)
{
 struct ice_aqc_get_topo *VAR_7;
 struct ice_aq_desc VAR_8;
 enum ice_status VAR_9;

 VAR_7 = &VAR_8.params.get_topo;
 FUNC_1(&VAR_8, VAR_0);
 VAR_7->port_num = VAR_2;
 VAR_9 = FUNC_0(VAR_1, &VAR_8, VAR_3, VAR_4, VAR_6);
 if (!VAR_9 && VAR_5)
  *VAR_5 = VAR_7->num_branches;

 return VAR_9;
}
