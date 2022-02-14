
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_dev {int nvqs; int * mm; int * worker; int work_list; int wait; int * iotlb; int * umem; int * log_ctx; TYPE_1__** vqs; } ;
struct TYPE_2__ {int * call_ctx; scalar_t__ kick; int * error_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vhost_dev*) ;
 int FUNC_7 (struct vhost_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vhost_dev*,TYPE_1__*) ;
 int FUNC_10 (int *,int) ;

void FUNC_11(struct vhost_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nvqs; ++VAR_3) {
  if (VAR_2->vqs[VAR_3]->error_ctx)
   FUNC_1(VAR_2->vqs[VAR_3]->error_ctx);
  if (VAR_2->vqs[VAR_3]->kick)
   FUNC_2(VAR_2->vqs[VAR_3]->kick);
  if (VAR_2->vqs[VAR_3]->call_ctx)
   FUNC_1(VAR_2->vqs[VAR_3]->call_ctx);
  FUNC_9(VAR_2, VAR_2->vqs[VAR_3]);
 }
 FUNC_7(VAR_2);
 if (VAR_2->log_ctx)
  FUNC_1(VAR_2->log_ctx);
 VAR_2->log_ctx = ((void*)0);

 FUNC_8(VAR_2->umem);
 VAR_2->umem = ((void*)0);
 FUNC_8(VAR_2->iotlb);
 VAR_2->iotlb = ((void*)0);
 FUNC_6(VAR_2);
 FUNC_10(&VAR_2->wait, VAR_0 | VAR_1);
 FUNC_0(!FUNC_4(&VAR_2->work_list));
 if (VAR_2->worker) {
  FUNC_3(VAR_2->worker);
  VAR_2->worker = ((void*)0);
 }
 if (VAR_2->mm)
  FUNC_5(VAR_2->mm);
 VAR_2->mm = ((void*)0);
}
