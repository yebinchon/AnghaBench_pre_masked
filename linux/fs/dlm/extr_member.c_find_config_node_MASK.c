
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_recover {int nodes_count; struct dlm_config_node* nodes; } ;
struct dlm_config_node {int nodeid; } ;



__attribute__((used)) static struct dlm_config_node *FUNC_0(struct dlm_recover *VAR_0,
      int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nodes_count; VAR_2++) {
  if (VAR_0->nodes[VAR_2].nodeid == VAR_1)
   return &VAR_0->nodes[VAR_2];
 }
 return ((void*)0);
}
