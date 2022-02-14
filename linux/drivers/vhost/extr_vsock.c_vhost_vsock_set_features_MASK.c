
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mutex; } ;
struct vhost_vsock {TYPE_1__ dev; struct vhost_virtqueue* vqs; } ;
struct vhost_virtqueue {int acked_features; int mutex; } ;


 int FUNC_0 (struct vhost_virtqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct vhost_vsock *VAR_4, u64 VAR_5)
{
 struct vhost_virtqueue *VAR_6;
 int VAR_7;

 if (VAR_5 & ~VAR_3)
  return -VAR_1;

 FUNC_1(&VAR_4->dev.mutex);
 if ((VAR_5 & (1 << VAR_2)) &&
     !FUNC_3(&VAR_4->dev)) {
  FUNC_2(&VAR_4->dev.mutex);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->vqs); VAR_7++) {
  VAR_6 = &VAR_4->vqs[VAR_7];
  FUNC_1(&VAR_6->mutex);
  VAR_6->acked_features = VAR_5;
  FUNC_2(&VAR_6->mutex);
 }
 FUNC_2(&VAR_4->dev.mutex);
 return 0;
}
