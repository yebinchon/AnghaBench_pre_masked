
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int nd_item; } ;
struct o2nm_cluster {int cl_nodes_lock; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 struct o2nm_node* FUNC_1 (struct o2nm_cluster*,int ,int *,int *) ;
 struct o2nm_cluster* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct o2nm_node *FUNC_4(__be32 VAR_1)
{
 struct o2nm_node *VAR_2 = ((void*)0);
 struct o2nm_cluster *VAR_3 = VAR_0;

 if (VAR_3 == ((void*)0))
  goto out;

 FUNC_2(&VAR_3->cl_nodes_lock);
 VAR_2 = FUNC_1(VAR_3, VAR_1, ((void*)0), ((void*)0));
 if (VAR_2)
  FUNC_0(&VAR_2->nd_item);
 FUNC_3(&VAR_3->cl_nodes_lock);

out:
 return VAR_2;
}
