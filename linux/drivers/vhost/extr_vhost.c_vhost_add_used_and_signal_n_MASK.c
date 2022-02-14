
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_used_elem {int dummy; } ;
struct vhost_virtqueue {int dummy; } ;
struct vhost_dev {int dummy; } ;


 int FUNC_0 (struct vhost_virtqueue*,struct vring_used_elem*,unsigned int) ;
 int FUNC_1 (struct vhost_dev*,struct vhost_virtqueue*) ;

void FUNC_2(struct vhost_dev *VAR_0,
     struct vhost_virtqueue *VAR_1,
     struct vring_used_elem *VAR_2, unsigned VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_1);
}
