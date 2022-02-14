
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_used_elem {int member_1; int member_0; } ;
struct vhost_virtqueue {int dummy; } ;


 int FUNC_0 (struct vhost_virtqueue*,int) ;
 int FUNC_1 (struct vhost_virtqueue*,struct vring_used_elem*,int) ;

int FUNC_2(struct vhost_virtqueue *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct vring_used_elem VAR_3 = {
  FUNC_0(VAR_0, VAR_1),
  FUNC_0(VAR_0, VAR_2)
 };

 return FUNC_1(VAR_0, &VAR_3, 1);
}
