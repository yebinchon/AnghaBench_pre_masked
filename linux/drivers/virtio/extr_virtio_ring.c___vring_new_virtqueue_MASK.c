
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtqueue {void (* callback ) (struct virtqueue*) ;char const* name; int num_free; unsigned int index; int list; struct virtio_device* vdev; } ;
struct vring {int num; TYPE_2__* desc; TYPE_1__* avail; } ;
struct TYPE_6__ {unsigned int avail_flags_shadow; int desc_state; struct vring vring; scalar_t__ avail_idx_shadow; scalar_t__ queue_size_in_bytes; scalar_t__ queue_dma_addr; } ;
struct vring_virtqueue {int packed_ring; int we_own_ring; int (* notify ) (struct virtqueue*) ;int weak_barriers; int broken; int in_use; int last_add_time_valid; int indirect; struct virtqueue vq; TYPE_3__ split; scalar_t__ free_head; scalar_t__ event; int use_dma_api; scalar_t__ num_added; scalar_t__ last_used_idx; } ;
struct vring_desc_state_split {int dummy; } ;
struct virtio_device {int vqs; } ;
struct TYPE_5__ {void* next; } ;
struct TYPE_4__ {void* flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (struct virtio_device*,unsigned int) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 struct vring_virtqueue* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct virtio_device*,int ) ;
 int FUNC_7 (struct virtio_device*) ;

struct virtqueue *FUNC_8(unsigned int VAR_6,
     struct vring VAR_7,
     struct virtio_device *VAR_8,
     bool VAR_9,
     bool VAR_10,
     bool (*VAR_11)(struct virtqueue *),
     void (*VAR_12)(struct virtqueue *),
     const char *VAR_13)
{
 unsigned int VAR_14;
 struct vring_virtqueue *VAR_15;

 if (FUNC_6(VAR_8, VAR_2))
  return ((void*)0);

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_0);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->packed_ring = 0;
 VAR_15->vq.callback = VAR_12;
 VAR_15->vq.vdev = VAR_8;
 VAR_15->vq.name = VAR_13;
 VAR_15->vq.num_free = VAR_7.num;
 VAR_15->vq.index = VAR_6;
 VAR_15->we_own_ring = 0;
 VAR_15->notify = VAR_11;
 VAR_15->weak_barriers = VAR_9;
 VAR_15->broken = 0;
 VAR_15->last_used_idx = 0;
 VAR_15->num_added = 0;
 VAR_15->use_dma_api = FUNC_7(VAR_8);
 FUNC_4(&VAR_15->vq.list, &VAR_8->vqs);





 VAR_15->indirect = FUNC_6(VAR_8, VAR_4) &&
  !VAR_10;
 VAR_15->event = FUNC_6(VAR_8, VAR_3);

 if (FUNC_6(VAR_8, VAR_1))
  VAR_15->weak_barriers = 0;

 VAR_15->split.queue_dma_addr = 0;
 VAR_15->split.queue_size_in_bytes = 0;

 VAR_15->split.vring = VAR_7;
 VAR_15->split.avail_flags_shadow = 0;
 VAR_15->split.avail_idx_shadow = 0;


 if (!VAR_12) {
  VAR_15->split.avail_flags_shadow |= VAR_5;
  if (!VAR_15->event)
   VAR_15->split.vring.avail->flags = FUNC_0(VAR_8,
     VAR_15->split.avail_flags_shadow);
 }

 VAR_15->split.desc_state = FUNC_3(VAR_7.num,
   sizeof(struct vring_desc_state_split), VAR_0);
 if (!VAR_15->split.desc_state) {
  FUNC_1(VAR_15);
  return ((void*)0);
 }


 VAR_15->free_head = 0;
 for (VAR_14 = 0; VAR_14 < VAR_7.num-1; VAR_14++)
  VAR_15->split.vring.desc[VAR_14].next = FUNC_0(VAR_8, VAR_14 + 1);
 FUNC_5(VAR_15->split.desc_state, 0, VAR_7.num *
   sizeof(struct vring_desc_state_split));

 return &VAR_15->vq;
}
