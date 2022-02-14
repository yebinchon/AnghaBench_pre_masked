
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int is_le; int signalled_used_valid; int last_used_idx; TYPE_1__* used; int iotlb; int private_data; } ;
typedef int __virtio16 ;
struct TYPE_2__ {int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct vhost_virtqueue*,int ) ;
 int FUNC_2 (struct vhost_virtqueue*,int *) ;
 int FUNC_3 (struct vhost_virtqueue*) ;
 int FUNC_4 (struct vhost_virtqueue*) ;
 int FUNC_5 (struct vhost_virtqueue*,char*,int *) ;

int FUNC_6(struct vhost_virtqueue *VAR_1)
{
 __virtio16 VAR_2;
 int VAR_3;
 bool VAR_4 = VAR_1->is_le;

 if (!VAR_1->private_data)
  return 0;

 FUNC_3(VAR_1);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err;
 VAR_1->signalled_used_valid = 0;
 if (!VAR_1->iotlb &&
     !FUNC_0(&VAR_1->used->idx, sizeof VAR_1->used->idx)) {
  VAR_3 = -VAR_0;
  goto err;
 }
 VAR_3 = FUNC_2(VAR_1, &VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_1, "Can't access used idx at %p\n",
         &VAR_1->used->idx);
  goto err;
 }
 VAR_1->last_used_idx = FUNC_1(VAR_1, VAR_2);
 return 0;

err:
 VAR_1->is_le = VAR_4;
 return VAR_3;
}
