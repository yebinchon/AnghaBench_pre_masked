
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_port_info {int * root; int sched_lock; int port_state; void* last_node_teid; int lport; struct ice_hw* hw; } ;
struct ice_hw {int sw_entry_point_layer; } ;
struct TYPE_5__ {int num_elems; } ;
struct ice_aqc_get_topo_elem {TYPE_3__* generic; TYPE_1__ hdr; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {scalar_t__ elem_type; } ;
struct TYPE_7__ {TYPE_2__ data; int node_teid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ice_aqc_get_topo_elem*) ;
 struct ice_aqc_get_topo_elem* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,int ,struct ice_aqc_get_topo_elem*,int ,int*,int *) ;
 int FUNC_3 (struct ice_hw*,int ,char*,int) ;
 int FUNC_4 (struct ice_port_info*,int *) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_port_info*,int,TYPE_3__*) ;
 int FUNC_7 (struct ice_port_info*,TYPE_3__*) ;
 int FUNC_8 (struct ice_port_info*) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

enum ice_status FUNC_12(struct ice_port_info *VAR_10)
{
 struct ice_aqc_get_topo_elem *VAR_11;
 enum ice_status VAR_12;
 struct ice_hw *VAR_13;
 u8 VAR_14;
 u16 VAR_15;
 u8 VAR_16, VAR_17;

 if (!VAR_10)
  return VAR_7;
 VAR_13 = VAR_10->hw;


 VAR_11 = FUNC_1(FUNC_5(VAR_13), VAR_4, VAR_0);
 if (!VAR_11)
  return VAR_6;


 VAR_12 = FUNC_2(VAR_13, VAR_10->lport, VAR_11, VAR_4,
          &VAR_14, ((void*)0));
 if (VAR_12)
  goto err_init_port;


 if (VAR_14 < 1 || VAR_14 > VAR_9) {
  FUNC_3(VAR_13, VAR_5, "num_branches unexpected %d\n",
     VAR_14);
  VAR_12 = VAR_7;
  goto err_init_port;
 }


 VAR_15 = FUNC_9(VAR_11[0].hdr.num_elems);


 if (VAR_15 < 1 || VAR_15 > VAR_3) {
  FUNC_3(VAR_13, VAR_5, "num_elems unexpected %d\n",
     VAR_15);
  VAR_12 = VAR_7;
  goto err_init_port;
 }




 if (VAR_15 > 2 && VAR_11[0].generic[VAR_15 - 1].data.elem_type ==
     VAR_2)
  VAR_10->last_node_teid =
   FUNC_10(VAR_11[0].generic[VAR_15 - 2].node_teid);
 else
  VAR_10->last_node_teid =
   FUNC_10(VAR_11[0].generic[VAR_15 - 1].node_teid);


 VAR_12 = FUNC_7(VAR_10, &VAR_11[0].generic[0]);
 if (VAR_12)
  goto err_init_port;


 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_15 = FUNC_9(VAR_11[VAR_16].hdr.num_elems);


  for (VAR_17 = 1; VAR_17 < VAR_15; VAR_17++) {

   if (VAR_11[0].generic[VAR_17].data.elem_type ==
       VAR_1)
    VAR_13->sw_entry_point_layer = VAR_17;

   VAR_12 = FUNC_6(VAR_10, VAR_17, &VAR_11[VAR_16].generic[VAR_17]);
   if (VAR_12)
    goto err_init_port;
  }
 }


 if (VAR_10->root)
  FUNC_8(VAR_10);


 VAR_10->port_state = VAR_8;
 FUNC_11(&VAR_10->sched_lock);

err_init_port:
 if (VAR_12 && VAR_10->root) {
  FUNC_4(VAR_10, VAR_10->root);
  VAR_10->root = ((void*)0);
 }

 FUNC_0(FUNC_5(VAR_13), VAR_11);
 return VAR_12;
}
