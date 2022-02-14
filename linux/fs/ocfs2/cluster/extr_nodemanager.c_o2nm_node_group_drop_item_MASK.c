
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct o2nm_node {size_t nd_num; int nd_item; int nd_ip_node; scalar_t__ nd_ipv4_address; } ;
struct o2nm_cluster {scalar_t__ cl_local_node; int cl_nodes_lock; int cl_nodes_bitmap; struct o2nm_node** cl_nodes; int cl_node_ip_tree; scalar_t__ cl_has_local; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int ci_parent; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct config_item*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct o2nm_node*) ;
 int FUNC_5 (struct o2nm_node*) ;
 int FUNC_6 (int *,int *) ;
 struct o2nm_cluster* FUNC_7 (int ) ;
 struct o2nm_node* FUNC_8 (struct config_item*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct config_group *VAR_2,
          struct config_item *VAR_3)
{
 struct o2nm_node *VAR_4 = FUNC_8(VAR_3);
 struct o2nm_cluster *VAR_5 = FUNC_7(VAR_2->cg_item.ci_parent);

 if (VAR_5->cl_nodes[VAR_4->nd_num] == VAR_4) {
  FUNC_4(VAR_4);

  if (VAR_5->cl_has_local &&
      (VAR_5->cl_local_node == VAR_4->nd_num)) {
   VAR_5->cl_has_local = 0;
   VAR_5->cl_local_node = VAR_1;
   FUNC_5(VAR_4);
  }
 }



 FUNC_9(&VAR_5->cl_nodes_lock);


 if (VAR_4->nd_ipv4_address)
  FUNC_6(&VAR_4->nd_ip_node, &VAR_5->cl_node_ip_tree);


 if (VAR_5->cl_nodes[VAR_4->nd_num] == VAR_4) {
  VAR_5->cl_nodes[VAR_4->nd_num] = ((void*)0);
  FUNC_0(VAR_4->nd_num, VAR_5->cl_nodes_bitmap);
 }
 FUNC_10(&VAR_5->cl_nodes_lock);

 FUNC_3(VAR_0, "o2nm: Unregistered node %s\n",
      FUNC_1(&VAR_4->nd_item));

 FUNC_2(VAR_3);
}
