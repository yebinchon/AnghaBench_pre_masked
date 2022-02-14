
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num; struct vring_packed_desc_event* driver; struct vring_packed_desc_event* device; struct vring_packed_desc_event* desc; } ;
struct TYPE_4__ {size_t ring_size_in_bytes; size_t event_size_in_bytes; int avail_wrap_counter; int used_wrap_counter; int avail_used_flags; struct vring_virtqueue* desc_state; scalar_t__ event_flags_shadow; TYPE_1__ vring; struct vring_virtqueue* desc_extra; scalar_t__ next_avail_idx; void* device_event_dma_addr; void* driver_event_dma_addr; void* ring_dma_addr; } ;
struct virtqueue {void (* callback ) (struct virtqueue*) ;char const* name; unsigned int num_free; unsigned int index; int list; struct virtio_device* vdev; } ;
struct vring_virtqueue {int we_own_ring; int (* notify ) (struct virtqueue*) ;int weak_barriers; int broken; int packed_ring; int in_use; int last_add_time_valid; int indirect; unsigned int next; TYPE_2__ packed; struct virtqueue vq; scalar_t__ free_head; scalar_t__ event; int use_dma_api; scalar_t__ num_added; scalar_t__ last_used_idx; } ;
struct vring_packed_desc_event {int flags; } ;
struct vring_packed_desc {int flags; } ;
struct vring_desc_state_packed {int dummy; } ;
struct vring_desc_extra_packed {int dummy; } ;
struct virtio_device {int vqs; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 struct vring_virtqueue* FUNC_2 (int,int) ;
 void* FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct vring_virtqueue*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (struct virtio_device*,int ) ;
 struct vring_packed_desc_event* FUNC_7 (struct virtio_device*,size_t,void**,int) ;
 int FUNC_8 (struct virtio_device*,size_t,struct vring_packed_desc_event*,void*) ;
 int FUNC_9 (struct virtio_device*) ;

__attribute__((used)) static struct virtqueue *FUNC_10(
 unsigned int VAR_8,
 unsigned int VAR_9,
 unsigned int VAR_10,
 struct virtio_device *VAR_11,
 bool VAR_12,
 bool VAR_13,
 bool VAR_14,
 bool (*VAR_15)(struct virtqueue *),
 void (*VAR_16)(struct virtqueue *),
 const char *VAR_17)
{
 struct vring_virtqueue *VAR_18;
 struct vring_packed_desc *VAR_19;
 struct vring_packed_desc_event *VAR_20, *VAR_21;
 dma_addr_t VAR_22, VAR_23, VAR_24;
 size_t VAR_25, VAR_26;
 unsigned int VAR_27;

 VAR_25 = VAR_9 * sizeof(struct vring_packed_desc);

 VAR_19 = FUNC_7(VAR_11, VAR_25,
     &VAR_22,
     VAR_0|VAR_6|VAR_7);
 if (!VAR_19)
  goto err_ring;

 VAR_26 = sizeof(struct vring_packed_desc_event);

 VAR_20 = FUNC_7(VAR_11, VAR_26,
       &VAR_23,
       VAR_0|VAR_6|VAR_7);
 if (!VAR_20)
  goto err_driver;

 VAR_21 = FUNC_7(VAR_11, VAR_26,
       &VAR_24,
       VAR_0|VAR_6|VAR_7);
 if (!VAR_21)
  goto err_device;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_0);
 if (!VAR_18)
  goto err_vq;

 VAR_18->vq.callback = VAR_16;
 VAR_18->vq.vdev = VAR_11;
 VAR_18->vq.name = VAR_17;
 VAR_18->vq.num_free = VAR_9;
 VAR_18->vq.index = VAR_8;
 VAR_18->we_own_ring = 1;
 VAR_18->notify = VAR_15;
 VAR_18->weak_barriers = VAR_12;
 VAR_18->broken = 0;
 VAR_18->last_used_idx = 0;
 VAR_18->num_added = 0;
 VAR_18->packed_ring = 1;
 VAR_18->use_dma_api = FUNC_9(VAR_11);
 FUNC_4(&VAR_18->vq.list, &VAR_11->vqs);





 VAR_18->indirect = FUNC_6(VAR_11, VAR_3) &&
  !VAR_14;
 VAR_18->event = FUNC_6(VAR_11, VAR_2);

 if (FUNC_6(VAR_11, VAR_1))
  VAR_18->weak_barriers = 0;

 VAR_18->packed.ring_dma_addr = VAR_22;
 VAR_18->packed.driver_event_dma_addr = VAR_23;
 VAR_18->packed.device_event_dma_addr = VAR_24;

 VAR_18->packed.ring_size_in_bytes = VAR_25;
 VAR_18->packed.event_size_in_bytes = VAR_26;

 VAR_18->packed.vring.num = VAR_9;
 VAR_18->packed.vring.desc = VAR_19;
 VAR_18->packed.vring.driver = VAR_20;
 VAR_18->packed.vring.device = VAR_21;

 VAR_18->packed.next_avail_idx = 0;
 VAR_18->packed.avail_wrap_counter = 1;
 VAR_18->packed.used_wrap_counter = 1;
 VAR_18->packed.event_flags_shadow = 0;
 VAR_18->packed.avail_used_flags = 1 << VAR_4;

 VAR_18->packed.desc_state = FUNC_3(VAR_9,
   sizeof(struct vring_desc_state_packed),
   VAR_0);
 if (!VAR_18->packed.desc_state)
  goto err_desc_state;

 FUNC_5(VAR_18->packed.desc_state, 0,
  VAR_9 * sizeof(struct vring_desc_state_packed));


 VAR_18->free_head = 0;
 for (VAR_27 = 0; VAR_27 < VAR_9-1; VAR_27++)
  VAR_18->packed.desc_state[VAR_27].next = VAR_27 + 1;

 VAR_18->packed.desc_extra = FUNC_3(VAR_9,
   sizeof(struct vring_desc_extra_packed),
   VAR_0);
 if (!VAR_18->packed.desc_extra)
  goto err_desc_extra;

 FUNC_5(VAR_18->packed.desc_extra, 0,
  VAR_9 * sizeof(struct vring_desc_extra_packed));


 if (!VAR_16) {
  VAR_18->packed.event_flags_shadow = VAR_5;
  VAR_18->packed.vring.driver->flags =
   FUNC_0(VAR_18->packed.event_flags_shadow);
 }

 return &VAR_18->vq;

err_desc_extra:
 FUNC_1(VAR_18->packed.desc_state);
err_desc_state:
 FUNC_1(VAR_18);
err_vq:
 FUNC_8(VAR_11, VAR_26, VAR_21, VAR_22);
err_device:
 FUNC_8(VAR_11, VAR_26, VAR_20, VAR_22);
err_driver:
 FUNC_8(VAR_11, VAR_25, VAR_19, VAR_22);
err_ring:
 return ((void*)0);
}
