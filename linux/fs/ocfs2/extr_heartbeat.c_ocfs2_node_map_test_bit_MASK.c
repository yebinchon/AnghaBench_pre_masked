
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int node_map_lock; } ;
struct ocfs2_node_map {int num_nodes; int map; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct ocfs2_super *VAR_1,
       struct ocfs2_node_map *VAR_2,
       int VAR_3)
{
 int VAR_4;
 if (VAR_3 >= VAR_2->num_nodes) {
  FUNC_1(VAR_0, "bit=%d map->num_nodes=%d\n", VAR_3, VAR_2->num_nodes);
  FUNC_0();
 }
 FUNC_2(&VAR_1->node_map_lock);
 VAR_4 = FUNC_4(VAR_3, VAR_2->map);
 FUNC_3(&VAR_1->node_map_lock);
 return VAR_4;
}
