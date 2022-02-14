
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int heads; struct vhost_dev* dev; } ;
struct vhost_net_virtqueue {int done_idx; struct vhost_virtqueue vq; } ;
struct vhost_dev {int dummy; } ;


 int FUNC_0 (struct vhost_dev*,struct vhost_virtqueue*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vhost_net_virtqueue *VAR_0)
{
 struct vhost_virtqueue *VAR_1 = &VAR_0->vq;
 struct vhost_dev *VAR_2 = VAR_1->dev;

 if (!VAR_0->done_idx)
  return;

 FUNC_0(VAR_2, VAR_1, VAR_1->heads, VAR_0->done_idx);
 VAR_0->done_idx = 0;
}
