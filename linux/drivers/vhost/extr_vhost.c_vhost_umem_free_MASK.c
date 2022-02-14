
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_umem_node {int link; } ;
struct vhost_umem {int numem; int umem_tree; } ;


 int FUNC_0 (struct vhost_umem_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vhost_umem_node*,int *) ;

__attribute__((used)) static void FUNC_3(struct vhost_umem *VAR_0,
       struct vhost_umem_node *VAR_1)
{
 FUNC_2(VAR_1, &VAR_0->umem_tree);
 FUNC_1(&VAR_1->link);
 FUNC_0(VAR_1);
 VAR_0->numem--;
}
