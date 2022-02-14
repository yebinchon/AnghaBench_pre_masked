
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {scalar_t__ handle_kick; int poll; int mutex; struct vhost_dev* dev; int * heads; int * indirect; int * log; } ;
struct vhost_dev {int nvqs; int iov_limit; int weight; int byte_weight; struct vhost_virtqueue** vqs; int iotlb_lock; int pending_list; int read_list; int wait; int work_list; int * worker; int * mm; int * iotlb; int * umem; int * log_ctx; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ,struct vhost_dev*) ;
 int FUNC_6 (struct vhost_dev*,struct vhost_virtqueue*) ;

void FUNC_7(struct vhost_dev *VAR_1,
      struct vhost_virtqueue **VAR_2, int VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 struct vhost_virtqueue *VAR_7;
 int VAR_8;

 VAR_1->vqs = VAR_2;
 VAR_1->nvqs = VAR_3;
 FUNC_3(&VAR_1->mutex);
 VAR_1->log_ctx = ((void*)0);
 VAR_1->umem = ((void*)0);
 VAR_1->iotlb = ((void*)0);
 VAR_1->mm = ((void*)0);
 VAR_1->worker = ((void*)0);
 VAR_1->iov_limit = VAR_4;
 VAR_1->weight = VAR_5;
 VAR_1->byte_weight = VAR_6;
 FUNC_1(&VAR_1->work_list);
 FUNC_2(&VAR_1->wait);
 FUNC_0(&VAR_1->read_list);
 FUNC_0(&VAR_1->pending_list);
 FUNC_4(&VAR_1->iotlb_lock);


 for (VAR_8 = 0; VAR_8 < VAR_1->nvqs; ++VAR_8) {
  VAR_7 = VAR_1->vqs[VAR_8];
  VAR_7->log = ((void*)0);
  VAR_7->indirect = ((void*)0);
  VAR_7->heads = ((void*)0);
  VAR_7->dev = VAR_1;
  FUNC_3(&VAR_7->mutex);
  FUNC_6(VAR_1, VAR_7);
  if (VAR_7->handle_kick)
   FUNC_5(&VAR_7->poll, VAR_7->handle_kick,
     VAR_0, VAR_1);
 }
}
