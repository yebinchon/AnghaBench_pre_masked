
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {unsigned long busyloop_timeout; int mutex; struct socket* private_data; } ;
struct vhost_net {int dev; } ;
struct socket {int dummy; } ;


 unsigned long FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct socket*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (int *,struct vhost_virtqueue*) ;
 int FUNC_9 (int *,struct vhost_virtqueue*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_12 (int *,struct vhost_virtqueue*) ;

__attribute__((used)) static void FUNC_13(struct vhost_net *VAR_0,
    struct vhost_virtqueue *VAR_1,
    struct vhost_virtqueue *VAR_2,
    bool *VAR_3,
    bool VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 struct socket *VAR_7;
 struct vhost_virtqueue *VAR_8 = VAR_4 ? VAR_2 : VAR_1;





 if (!FUNC_2(&VAR_8->mutex))
  return;

 FUNC_8(&VAR_0->dev, VAR_8);
 VAR_7 = VAR_1->private_data;

 VAR_5 = VAR_4 ? VAR_1->busyloop_timeout:
         VAR_2->busyloop_timeout;

 FUNC_4();
 VAR_6 = FUNC_0() + VAR_5;

 while (FUNC_7(VAR_6)) {
  if (FUNC_10(&VAR_0->dev)) {
   *VAR_3 = 1;
   break;
  }

  if ((FUNC_6(VAR_7) &&
       !FUNC_12(&VAR_0->dev, VAR_1)) ||
      !FUNC_12(&VAR_0->dev, VAR_2))
   break;

  FUNC_1();
 }

 FUNC_5();

 if (VAR_4 || FUNC_6(VAR_7))
  FUNC_11(VAR_0, VAR_8);
 else if (!VAR_4)
  FUNC_9(&VAR_0->dev, VAR_1);

 FUNC_3(&VAR_8->mutex);
}
