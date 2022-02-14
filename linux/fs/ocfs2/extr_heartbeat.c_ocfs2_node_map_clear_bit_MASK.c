
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int node_map_lock; } ;
struct ocfs2_node_map {int num_nodes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_node_map*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_super *VAR_0,
         struct ocfs2_node_map *VAR_1,
         int VAR_2)
{
 if (VAR_2==-1)
  return;
 FUNC_0(VAR_2 >= VAR_1->num_nodes);
 FUNC_2(&VAR_0->node_map_lock);
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_0->node_map_lock);
}
