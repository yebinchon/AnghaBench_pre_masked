
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_port_info {int hw; TYPE_3__* root; } ;
struct ice_aqc_query_port_ets {int port_teid; } ;
struct ice_aqc_port_ets_elem {int dummy; } ;
struct TYPE_4__ {struct ice_aqc_query_port_ets port_ets; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {int node_teid; } ;
struct TYPE_6__ {TYPE_2__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ice_aq_desc*,struct ice_aqc_port_ets_elem*,int ,struct ice_sq_cd*) ;
 int VAR_1 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_port_info *VAR_2,
        struct ice_aqc_port_ets_elem *VAR_3, u16 VAR_4,
        struct ice_sq_cd *VAR_5)
{
 struct ice_aqc_query_port_ets *VAR_6;
 struct ice_aq_desc VAR_7;
 enum ice_status VAR_8;

 if (!VAR_2)
  return VAR_0;
 VAR_6 = &VAR_7.params.port_ets;
 FUNC_1(&VAR_7, VAR_1);
 VAR_6->port_teid = VAR_2->root->info.node_teid;

 VAR_8 = FUNC_0(VAR_2->hw, &VAR_7, VAR_3, VAR_4, VAR_5);
 return VAR_8;
}
