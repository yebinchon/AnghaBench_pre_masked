
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int node_teid; } ;
struct ice_sched_node {TYPE_1__ info; } ;
struct TYPE_6__ {int sq_last_status; } ;
struct ice_hw {TYPE_3__ adminq; } ;
struct TYPE_5__ {int num_elems; int parent_teid; } ;
struct ice_aqc_delete_elem {int * teid; TYPE_2__ hdr; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ice_aqc_delete_elem*) ;
 struct ice_aqc_delete_elem* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct ice_hw*,int,struct ice_aqc_delete_elem*,int,int*,int *) ;
 int FUNC_5 (struct ice_hw*,int ,char*,int ) ;
 int FUNC_6 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_7(struct ice_hw *VAR_3, struct ice_sched_node *VAR_4,
         u16 VAR_5, u32 *VAR_6)
{
 struct ice_aqc_delete_elem *VAR_7;
 u16 VAR_8, VAR_9 = 0;
 enum ice_status VAR_10;
 u16 VAR_11;

 VAR_11 = sizeof(*VAR_7) + sizeof(u32) * (VAR_5 - 1);
 VAR_7 = FUNC_3(FUNC_6(VAR_3), VAR_11, VAR_0);
 if (!VAR_7)
  return VAR_2;

 VAR_7->hdr.parent_teid = VAR_4->info.node_teid;
 VAR_7->hdr.num_elems = FUNC_0(VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_7->teid[VAR_8] = FUNC_1(VAR_6[VAR_8]);

 VAR_10 = FUNC_4(VAR_3, 1, VAR_7, VAR_11,
        &VAR_9, ((void*)0));
 if (VAR_10 || VAR_9 != 1)
  FUNC_5(VAR_3, VAR_1, "remove node failed FW error %d\n",
     VAR_3->adminq.sq_last_status);

 FUNC_2(FUNC_6(VAR_3), VAR_7);
 return VAR_10;
}
