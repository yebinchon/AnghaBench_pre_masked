
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int mutex; struct socket* private_data; } ;
struct vhost_net_virtqueue {struct vhost_virtqueue vq; } ;
struct vhost_net {int dev; struct vhost_net_virtqueue* vqs; } ;
struct socket {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct vhost_net*,struct socket*) ;
 int FUNC_1 (struct vhost_net*,struct socket*) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vhost_virtqueue*) ;
 int FUNC_5 (struct vhost_net*,struct vhost_virtqueue*) ;
 scalar_t__ FUNC_6 (struct socket*) ;
 int FUNC_7 (struct vhost_virtqueue*) ;

__attribute__((used)) static void FUNC_8(struct vhost_net *VAR_1)
{
 struct vhost_net_virtqueue *VAR_2 = &VAR_1->vqs[VAR_0];
 struct vhost_virtqueue *VAR_3 = &VAR_2->vq;
 struct socket *VAR_4;

 FUNC_2(&VAR_3->mutex, VAR_0);
 VAR_4 = VAR_3->private_data;
 if (!VAR_4)
  goto out;

 if (!FUNC_7(VAR_3))
  goto out;

 FUNC_4(&VAR_1->dev, VAR_3);
 FUNC_5(VAR_1, VAR_3);

 if (FUNC_6(VAR_4))
  FUNC_1(VAR_1, VAR_4);
 else
  FUNC_0(VAR_1, VAR_4);

out:
 FUNC_3(&VAR_3->mutex);
}
