
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int mutex; void* private_data; } ;
struct TYPE_2__ {int nvqs; int mutex; } ;
struct vhost_test {TYPE_1__ dev; struct vhost_virtqueue* vqs; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vhost_test*,int) ;
 int FUNC_4 (struct vhost_virtqueue*) ;
 int FUNC_5 (struct vhost_virtqueue*) ;

__attribute__((used)) static long FUNC_6(struct vhost_test *VAR_2, int VAR_3)
{
 void *VAR_4, *VAR_5;
 struct vhost_virtqueue *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3 < 0 || VAR_3 > 1)
  return -VAR_1;

 FUNC_0(&VAR_2->dev.mutex);
 VAR_7 = FUNC_2(&VAR_2->dev);
 if (VAR_7)
  goto err;

 for (VAR_8 = 0; VAR_8 < VAR_2->dev.nvqs; ++VAR_8) {

  if (!FUNC_4(&VAR_2->vqs[VAR_8])) {
   VAR_7 = -VAR_0;
   goto err;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_2->dev.nvqs; ++VAR_8) {
  VAR_6 = VAR_2->vqs + VAR_8;
  FUNC_0(&VAR_6->mutex);
  VAR_4 = VAR_3 ? VAR_2 : ((void*)0);


  VAR_5 = VAR_6->private_data;
  VAR_6->private_data = VAR_4;

  VAR_7 = FUNC_5(&VAR_2->vqs[VAR_8]);

  FUNC_1(&VAR_6->mutex);

  if (VAR_7)
   goto err;

  if (VAR_5) {
   FUNC_3(VAR_2, VAR_8);
  }
 }

 FUNC_1(&VAR_2->dev.mutex);
 return 0;

err:
 FUNC_1(&VAR_2->dev.mutex);
 return VAR_7;
}
