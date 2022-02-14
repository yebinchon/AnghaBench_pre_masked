
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {scalar_t__ busyloop_timeout; } ;
struct vhost_net_virtqueue {struct vhost_virtqueue vq; } ;
struct vhost_net {struct vhost_net_virtqueue* vqs; } ;
struct sock {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct vhost_net_virtqueue*,struct sock*) ;
 int FUNC_1 (struct vhost_net*,struct vhost_virtqueue*,struct vhost_virtqueue*,int*,int) ;
 int FUNC_2 (struct vhost_net_virtqueue*) ;

__attribute__((used)) static int FUNC_3(struct vhost_net *VAR_2, struct sock *VAR_3,
          bool *VAR_4)
{
 struct vhost_net_virtqueue *VAR_5 = &VAR_2->vqs[VAR_0];
 struct vhost_net_virtqueue *VAR_6 = &VAR_2->vqs[VAR_1];
 struct vhost_virtqueue *VAR_7 = &VAR_5->vq;
 struct vhost_virtqueue *VAR_8 = &VAR_6->vq;
 int VAR_9 = FUNC_0(VAR_5, VAR_3);

 if (!VAR_9 && VAR_7->busyloop_timeout) {

  FUNC_2(VAR_5);

  FUNC_1(VAR_2, VAR_7, VAR_8, VAR_4, 1);

  VAR_9 = FUNC_0(VAR_5, VAR_3);
 }

 return VAR_9;
}
