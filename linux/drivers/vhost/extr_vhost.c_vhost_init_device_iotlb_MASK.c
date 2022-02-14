
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int mutex; struct vhost_umem* iotlb; } ;
struct vhost_umem {int dummy; } ;
struct vhost_dev {int nvqs; struct vhost_virtqueue** vqs; struct vhost_umem* iotlb; } ;


 int VAR_0 ;
 int FUNC_0 (struct vhost_virtqueue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vhost_umem* FUNC_3 () ;
 int FUNC_4 (struct vhost_umem*) ;

int FUNC_5(struct vhost_dev *VAR_1, bool VAR_2)
{
 struct vhost_umem *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_1->iotlb;
 VAR_1->iotlb = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1->nvqs; ++VAR_5) {
  struct vhost_virtqueue *VAR_6 = VAR_1->vqs[VAR_5];

  FUNC_1(&VAR_6->mutex);
  VAR_6->iotlb = VAR_3;
  FUNC_0(VAR_6);
  FUNC_2(&VAR_6->mutex);
 }

 FUNC_4(VAR_4);

 return 0;
}
