
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int desc; } ;
struct TYPE_10__ {struct vring_virtqueue* desc_state; int queue_dma_addr; TYPE_4__ vring; int queue_size_in_bytes; } ;
struct TYPE_8__ {int vdev; } ;
struct TYPE_6__ {int device; int driver; int desc; } ;
struct TYPE_7__ {struct vring_virtqueue* desc_extra; struct vring_virtqueue* desc_state; int device_event_dma_addr; TYPE_1__ vring; int event_size_in_bytes; int driver_event_dma_addr; int ring_dma_addr; int ring_size_in_bytes; } ;
struct vring_virtqueue {TYPE_5__ split; TYPE_3__ vq; TYPE_2__ packed; scalar_t__ packed_ring; scalar_t__ we_own_ring; } ;
struct virtqueue {int list; } ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (int *) ;
 struct vring_virtqueue* FUNC_2 (struct virtqueue*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->we_own_ring) {
  if (VAR_1->packed_ring) {
   FUNC_3(VAR_1->vq.vdev,
      VAR_1->packed.ring_size_in_bytes,
      VAR_1->packed.vring.desc,
      VAR_1->packed.ring_dma_addr);

   FUNC_3(VAR_1->vq.vdev,
      VAR_1->packed.event_size_in_bytes,
      VAR_1->packed.vring.driver,
      VAR_1->packed.driver_event_dma_addr);

   FUNC_3(VAR_1->vq.vdev,
      VAR_1->packed.event_size_in_bytes,
      VAR_1->packed.vring.device,
      VAR_1->packed.device_event_dma_addr);

   FUNC_0(VAR_1->packed.desc_state);
   FUNC_0(VAR_1->packed.desc_extra);
  } else {
   FUNC_3(VAR_1->vq.vdev,
      VAR_1->split.queue_size_in_bytes,
      VAR_1->split.vring.desc,
      VAR_1->split.queue_dma_addr);

   FUNC_0(VAR_1->split.desc_state);
  }
 }
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_1);
}
