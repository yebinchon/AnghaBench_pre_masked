
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct vhost_vsock {TYPE_1__ dev; struct vhost_virtqueue* vqs; } ;
struct vhost_virtqueue {int mutex; int * private_data; } ;


 size_t FUNC_0 (struct vhost_virtqueue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct vhost_vsock *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 FUNC_1(&VAR_0->dev.mutex);

 VAR_2 = FUNC_3(&VAR_0->dev);
 if (VAR_2)
  goto err;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->vqs); VAR_1++) {
  struct vhost_virtqueue *VAR_3 = &VAR_0->vqs[VAR_1];

  FUNC_1(&VAR_3->mutex);
  VAR_3->private_data = ((void*)0);
  FUNC_2(&VAR_3->mutex);
 }

err:
 FUNC_2(&VAR_0->dev.mutex);
 return VAR_2;
}
