
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct vhost_vsock {TYPE_1__ dev; struct vhost_virtqueue* vqs; } ;
struct vhost_virtqueue {int mutex; struct vhost_vsock* private_data; } ;


 size_t FUNC_0 (struct vhost_virtqueue*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vhost_virtqueue*) ;
 int FUNC_5 (struct vhost_virtqueue*) ;

__attribute__((used)) static int FUNC_6(struct vhost_vsock *VAR_1)
{
 struct vhost_virtqueue *VAR_2;
 size_t VAR_3;
 int VAR_4;

 FUNC_1(&VAR_1->dev.mutex);

 VAR_4 = FUNC_3(&VAR_1->dev);
 if (VAR_4)
  goto err;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vqs); VAR_3++) {
  VAR_2 = &VAR_1->vqs[VAR_3];

  FUNC_1(&VAR_2->mutex);

  if (!FUNC_4(VAR_2)) {
   VAR_4 = -VAR_0;
   goto err_vq;
  }

  if (!VAR_2->private_data) {
   VAR_2->private_data = VAR_1;
   VAR_4 = FUNC_5(VAR_2);
   if (VAR_4)
    goto err_vq;
  }

  FUNC_2(&VAR_2->mutex);
 }

 FUNC_2(&VAR_1->dev.mutex);
 return 0;

err_vq:
 VAR_2->private_data = ((void*)0);
 FUNC_2(&VAR_2->mutex);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vqs); VAR_3++) {
  VAR_2 = &VAR_1->vqs[VAR_3];

  FUNC_1(&VAR_2->mutex);
  VAR_2->private_data = ((void*)0);
  FUNC_2(&VAR_2->mutex);
 }
err:
 FUNC_2(&VAR_1->dev.mutex);
 return VAR_4;
}
