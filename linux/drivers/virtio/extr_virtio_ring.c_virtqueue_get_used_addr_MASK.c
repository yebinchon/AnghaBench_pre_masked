
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ desc; scalar_t__ used; } ;
struct TYPE_6__ {TYPE_2__ vring; scalar_t__ queue_dma_addr; } ;
struct TYPE_4__ {scalar_t__ device_event_dma_addr; } ;
struct vring_virtqueue {TYPE_3__ split; TYPE_1__ packed; scalar_t__ packed_ring; int we_own_ring; } ;
struct virtqueue {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;

dma_addr_t FUNC_2(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!VAR_1->we_own_ring);

 if (VAR_1->packed_ring)
  return VAR_1->packed.device_event_dma_addr;

 return VAR_1->split.queue_dma_addr +
  ((char *)VAR_1->split.vring.used - (char *)VAR_1->split.vring.desc);
}
