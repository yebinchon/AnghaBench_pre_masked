
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_umem {int umem_list; scalar_t__ numem; int umem_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct vhost_umem* FUNC_1 (int,int ) ;

__attribute__((used)) static struct vhost_umem *FUNC_2(void)
{
 struct vhost_umem *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->umem_tree = VAR_1;
 VAR_2->numem = 0;
 FUNC_0(&VAR_2->umem_list);

 return VAR_2;
}
