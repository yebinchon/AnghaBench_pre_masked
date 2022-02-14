
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int last_avail_idx; int avail_idx; } ;
struct vhost_dev {int dummy; } ;
typedef int __virtio16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vhost_virtqueue*,int ) ;
 int FUNC_2 (struct vhost_virtqueue*,int *) ;

bool FUNC_3(struct vhost_dev *VAR_0, struct vhost_virtqueue *VAR_1)
{
 __virtio16 VAR_2;
 int VAR_3;

 if (VAR_1->avail_idx != VAR_1->last_avail_idx)
  return 0;

 VAR_3 = FUNC_2(VAR_1, &VAR_2);
 if (FUNC_0(VAR_3))
  return 0;
 VAR_1->avail_idx = FUNC_1(VAR_1, VAR_2);

 return VAR_1->avail_idx == VAR_1->last_avail_idx;
}
