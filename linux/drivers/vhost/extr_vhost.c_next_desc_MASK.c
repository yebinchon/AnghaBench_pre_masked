
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int flags; int next; } ;
struct vhost_virtqueue {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vhost_virtqueue*,int ) ;
 unsigned int FUNC_2 (struct vhost_virtqueue*,int ) ;

__attribute__((used)) static unsigned FUNC_3(struct vhost_virtqueue *VAR_1, struct vring_desc *VAR_2)
{
 unsigned int VAR_3;


 if (!(VAR_2->flags & FUNC_1(VAR_1, VAR_0)))
  return -1U;


 VAR_3 = FUNC_2(VAR_1, FUNC_0(VAR_2->next));
 return VAR_3;
}
