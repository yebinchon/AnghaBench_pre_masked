
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_work {int node; int flags; } ;
struct vhost_dev {int worker; int work_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct vhost_dev *VAR_1, struct vhost_work *VAR_2)
{
 if (!VAR_1->worker)
  return;

 if (!FUNC_1(VAR_0, &VAR_2->flags)) {




  FUNC_0(&VAR_2->node, &VAR_1->work_list);
  FUNC_2(VAR_1->worker);
 }
}
