
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vring_desc {int next; int flags; int len; } ;
struct vring {struct vring_desc* desc; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {size_t vdev_id; scalar_t__ pkt_len; scalar_t__ rem_len; scalar_t__ cur_len; struct vring_desc* desc; int vq; struct mlxbf_tmfifo* fifo; } ;
struct mlxbf_tmfifo {int spin_lock; int ** vring; TYPE_1__** vdev; } ;
struct TYPE_2__ {struct virtio_device vdev; } ;


 scalar_t__ VAR_0 ;
 struct vring_desc* FUNC_0 (struct mlxbf_tmfifo_vring*,int) ;
 int FUNC_1 (struct mlxbf_tmfifo_vring*) ;
 int FUNC_2 (struct mlxbf_tmfifo_vring*,struct vring_desc*,int,int*) ;
 int FUNC_3 (struct mlxbf_tmfifo_vring*,struct vring_desc*,int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct virtio_device*,int ) ;
 scalar_t__ FUNC_7 (struct virtio_device*,int ) ;
 struct vring* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static bool FUNC_10(struct mlxbf_tmfifo_vring *VAR_1,
           bool VAR_2, int *VAR_3)
{
 const struct vring *VAR_4 = FUNC_8(VAR_1->vq);
 struct mlxbf_tmfifo *VAR_5 = VAR_1->fifo;
 struct virtio_device *VAR_6;
 bool VAR_7 = 0;
 struct vring_desc *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 VAR_6 = &VAR_5->vdev[VAR_1->vdev_id]->vdev;


 if (!VAR_1->desc) {
  VAR_8 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_8)
   return 0;
 } else {
  VAR_8 = VAR_1->desc;
 }


 if (VAR_1->pkt_len == 0) {
  FUNC_2(VAR_1, VAR_8, VAR_2, &VAR_7);
  (*VAR_3)--;


  if (VAR_7)
   return 0;
  goto mlxbf_tmfifo_desc_done;
 }


 VAR_10 = FUNC_7(VAR_6, VAR_8->len);
 if (VAR_10 > VAR_1->rem_len)
  VAR_10 = VAR_1->rem_len;


 if (VAR_1->cur_len < VAR_10) {
  FUNC_3(VAR_1, VAR_8, VAR_2, VAR_10);
  (*VAR_3)--;
 }


 if (VAR_1->cur_len == VAR_10) {
  VAR_1->cur_len = 0;
  VAR_1->rem_len -= VAR_10;


  if (VAR_1->rem_len > 0 &&
      (FUNC_6(VAR_6, VAR_8->flags) & VAR_0)) {
   VAR_11 = FUNC_6(VAR_6, VAR_8->next);
   VAR_8 = &VAR_4->desc[VAR_11];
   goto mlxbf_tmfifo_desc_done;
  }


  FUNC_1(VAR_1);
  VAR_8 = ((void*)0);
  VAR_5->vring[VAR_2] = ((void*)0);


  FUNC_4(&VAR_5->spin_lock, VAR_9);
  FUNC_9(0, VAR_1->vq);
  FUNC_5(&VAR_5->spin_lock, VAR_9);
 }

mlxbf_tmfifo_desc_done:

 VAR_1->desc = VAR_8;

 return 1;
}
