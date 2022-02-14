
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_umem {int umem_list; } ;
struct vhost_dev {int nvqs; TYPE_1__** vqs; struct vhost_umem* umem; } ;
struct TYPE_2__ {struct vhost_umem* umem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhost_dev*) ;

void FUNC_2(struct vhost_dev *VAR_0, struct vhost_umem *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);


 FUNC_0(&VAR_1->umem_list);
 VAR_0->umem = VAR_1;



 for (VAR_2 = 0; VAR_2 < VAR_0->nvqs; ++VAR_2)
  VAR_0->vqs[VAR_2]->umem = VAR_1;
}
