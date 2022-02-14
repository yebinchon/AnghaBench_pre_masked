
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_3__* desc_extra; struct vring_desc_state_packed* desc_state; } ;
struct TYPE_4__ {unsigned int num_free; } ;
struct vring_virtqueue {unsigned int free_head; TYPE_2__ packed; scalar_t__ use_dma_api; scalar_t__ indirect; TYPE_1__ vq; } ;
struct vring_packed_desc {int dummy; } ;
struct vring_desc_state_packed {size_t last; unsigned int next; unsigned int num; struct vring_packed_desc* indir_desc; int * data; } ;
struct TYPE_6__ {int len; } ;


 int FUNC_0 (struct vring_packed_desc*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct vring_virtqueue*,struct vring_packed_desc*) ;
 int FUNC_3 (struct vring_virtqueue*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct vring_virtqueue *VAR_0,
         unsigned int VAR_1, void **VAR_2)
{
 struct vring_desc_state_packed *VAR_3 = ((void*)0);
 struct vring_packed_desc *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_3 = &VAR_0->packed.desc_state[VAR_1];


 VAR_3->data = ((void*)0);

 VAR_0->packed.desc_state[VAR_3->last].next = VAR_0->free_head;
 VAR_0->free_head = VAR_1;
 VAR_0->vq.num_free += VAR_3->num;

 if (FUNC_1(VAR_0->use_dma_api)) {
  VAR_6 = VAR_1;
  for (VAR_5 = 0; VAR_5 < VAR_3->num; VAR_5++) {
   FUNC_3(VAR_0,
    &VAR_0->packed.desc_extra[VAR_6]);
   VAR_6 = VAR_0->packed.desc_state[VAR_6].next;
  }
 }

 if (VAR_0->indirect) {
  u32 VAR_7;


  VAR_4 = VAR_3->indir_desc;
  if (!VAR_4)
   return;

  if (VAR_0->use_dma_api) {
   VAR_7 = VAR_0->packed.desc_extra[VAR_1].len;
   for (VAR_5 = 0; VAR_5 < VAR_7 / sizeof(struct vring_packed_desc);
     VAR_5++)
    FUNC_2(VAR_0, &VAR_4[VAR_5]);
  }
  FUNC_0(VAR_4);
  VAR_3->indir_desc = ((void*)0);
 } else if (VAR_2) {
  *VAR_2 = VAR_3->indir_desc;
 }
}
