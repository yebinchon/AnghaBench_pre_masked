
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vring_desc {int next; int flags; int len; int addr; } ;
struct vring {struct vring_desc* desc; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {int vq; } ;
struct TYPE_2__ {size_t head; scalar_t__ buf; int tail; } ;
struct mlxbf_tmfifo_vdev {TYPE_1__ tx_buf; struct virtio_device vdev; } ;


 size_t FUNC_0 (size_t,int ,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__,void*,size_t) ;
 void* FUNC_2 (int ) ;
 size_t FUNC_3 (struct virtio_device*,int ) ;
 size_t FUNC_4 (struct virtio_device*,int ) ;
 int FUNC_5 (struct virtio_device*,int ) ;
 struct vring* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mlxbf_tmfifo_vdev *VAR_2,
         struct mlxbf_tmfifo_vring *VAR_3,
         struct vring_desc *VAR_4)
{
 const struct vring *VAR_5 = FUNC_6(VAR_3->vq);
 struct virtio_device *VAR_6 = &VAR_2->vdev;
 u32 VAR_7, VAR_8, VAR_9;
 void *VAR_10;

 while (VAR_4) {
  VAR_10 = FUNC_2(FUNC_5(VAR_6, VAR_4->addr));
  VAR_7 = FUNC_4(VAR_6, VAR_4->len);

  VAR_9 = FUNC_0(VAR_2->tx_buf.head, VAR_2->tx_buf.tail,
     VAR_0);
  if (VAR_7 <= VAR_9) {
   FUNC_1(VAR_2->tx_buf.buf + VAR_2->tx_buf.head, VAR_10, VAR_7);
  } else {
   FUNC_1(VAR_2->tx_buf.buf + VAR_2->tx_buf.head, VAR_10, VAR_9);
   VAR_10 += VAR_9;
   FUNC_1(VAR_2->tx_buf.buf, VAR_10, VAR_7 - VAR_9);
  }
  VAR_2->tx_buf.head = (VAR_2->tx_buf.head + VAR_7) %
   VAR_0;

  if (!(FUNC_3(VAR_6, VAR_4->flags) & VAR_1))
   break;
  VAR_8 = FUNC_3(VAR_6, VAR_4->next);
  VAR_4 = &VAR_5->desc[VAR_8];
 }
}
