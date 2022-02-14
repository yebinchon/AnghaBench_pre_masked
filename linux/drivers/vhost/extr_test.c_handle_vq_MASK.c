
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int num; int mutex; int iov; void* private_data; } ;
struct vhost_test {int dev; struct vhost_virtqueue* vqs; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct vhost_virtqueue*,int,int ) ;
 int FUNC_6 (int *,struct vhost_virtqueue*) ;
 int FUNC_7 (int *,struct vhost_virtqueue*) ;
 int FUNC_8 (struct vhost_virtqueue*,int ,size_t) ;
 int FUNC_9 (struct vhost_virtqueue*,int ,int ,unsigned int*,unsigned int*,int *,int *) ;
 int FUNC_10 (struct vhost_virtqueue*,char*,...) ;

__attribute__((used)) static void FUNC_11(struct vhost_test *VAR_1)
{
 struct vhost_virtqueue *VAR_2 = &VAR_1->vqs[VAR_0];
 unsigned VAR_3, VAR_4;
 int VAR_5;
 size_t VAR_6, VAR_7 = 0;
 void *VAR_8;

 FUNC_2(&VAR_2->mutex);
 VAR_8 = VAR_2->private_data;
 if (!VAR_8) {
  FUNC_3(&VAR_2->mutex);
  return;
 }

 FUNC_6(&VAR_1->dev, VAR_2);

 for (;;) {
  VAR_5 = FUNC_9(VAR_2, VAR_2->iov,
      FUNC_0(VAR_2->iov),
      &VAR_3, &VAR_4,
      ((void*)0), ((void*)0));

  if (FUNC_4(VAR_5 < 0))
   break;

  if (VAR_5 == VAR_2->num) {
   if (FUNC_4(FUNC_7(&VAR_1->dev, VAR_2))) {
    FUNC_6(&VAR_1->dev, VAR_2);
    continue;
   }
   break;
  }
  if (VAR_4) {
   FUNC_10(VAR_2, "Unexpected descriptor format for TX: "
          "out %d, int %d\n", VAR_3, VAR_4);
   break;
  }
  VAR_6 = FUNC_1(VAR_2->iov, VAR_3);

  if (!VAR_6) {
   FUNC_10(VAR_2, "Unexpected 0 len for TX\n");
   break;
  }
  FUNC_5(&VAR_1->dev, VAR_2, VAR_5, 0);
  VAR_7 += VAR_6;
  if (FUNC_4(FUNC_8(VAR_2, 0, VAR_7)))
   break;
 }

 FUNC_3(&VAR_2->mutex);
}
