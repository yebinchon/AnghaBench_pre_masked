
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct o2nm_node {int nd_item; } ;
struct TYPE_2__ {int cl_nodes_lock; struct o2nm_node** cl_nodes; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct o2nm_node *FUNC_3(u8 VAR_2)
{
 struct o2nm_node *VAR_3 = ((void*)0);

 if (VAR_2 >= VAR_0 || VAR_1 == ((void*)0))
  goto out;

 FUNC_1(&VAR_1->cl_nodes_lock);
 VAR_3 = VAR_1->cl_nodes[VAR_2];
 if (VAR_3)
  FUNC_0(&VAR_3->nd_item);
 FUNC_2(&VAR_1->cl_nodes_lock);
out:
 return VAR_3;
}
