
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {int dummy; } ;
struct vhost_net_virtqueue {struct vhost_net_buf rxq; } ;


 int FUNC_0 (struct vhost_net_buf*) ;
 int FUNC_1 (struct vhost_net_buf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vhost_net_virtqueue*) ;

__attribute__((used)) static int FUNC_4(struct vhost_net_virtqueue *VAR_0)
{
 struct vhost_net_buf *VAR_1 = &VAR_0->rxq;

 if (!FUNC_1(VAR_1))
  goto out;

 if (!FUNC_3(VAR_0))
  return 0;

out:
 return FUNC_2(FUNC_0(VAR_1));
}
