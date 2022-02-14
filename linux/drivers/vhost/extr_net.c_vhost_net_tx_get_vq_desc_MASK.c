
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int num; int iov; int private_data; scalar_t__ busyloop_timeout; } ;
struct vhost_net_virtqueue {struct vhost_virtqueue vq; } ;
struct vhost_net {struct vhost_net_virtqueue* vqs; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct vhost_virtqueue*,int ,int ,unsigned int*,unsigned int*,int *,int *) ;
 int FUNC_2 (struct vhost_net*,struct vhost_virtqueue*,struct vhost_virtqueue*,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vhost_net*,struct vhost_net_virtqueue*,int ,struct msghdr*) ;

__attribute__((used)) static int FUNC_5(struct vhost_net *VAR_1,
        struct vhost_net_virtqueue *VAR_2,
        unsigned int *VAR_3, unsigned int *VAR_4,
        struct msghdr *VAR_5, bool *VAR_6)
{
 struct vhost_net_virtqueue *VAR_7 = &VAR_1->vqs[VAR_0];
 struct vhost_virtqueue *VAR_8 = &VAR_7->vq;
 struct vhost_virtqueue *VAR_9 = &VAR_2->vq;

 int VAR_10 = FUNC_1(VAR_9, VAR_9->iov, FUNC_0(VAR_9->iov),
      VAR_3, VAR_4, ((void*)0), ((void*)0));

 if (VAR_10 == VAR_9->num && VAR_9->busyloop_timeout) {

  if (!FUNC_3(VAR_9->private_data))
   FUNC_4(VAR_1, VAR_2, VAR_9->private_data, VAR_5);

  FUNC_2(VAR_1, VAR_8, VAR_9, VAR_6, 0);

  VAR_10 = FUNC_1(VAR_9, VAR_9->iov, FUNC_0(VAR_9->iov),
          VAR_3, VAR_4, ((void*)0), ((void*)0));
 }

 return VAR_10;
}
