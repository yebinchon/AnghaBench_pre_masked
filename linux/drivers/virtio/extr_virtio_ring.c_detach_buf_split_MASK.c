
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct vring_desc* desc; } ;
struct TYPE_8__ {TYPE_3__* desc_state; TYPE_1__ vring; } ;
struct TYPE_6__ {int vdev; int num_free; } ;
struct vring_virtqueue {unsigned int free_head; TYPE_4__ split; TYPE_2__ vq; scalar_t__ indirect; } ;
struct vring_desc {int flags; int next; int len; } ;
typedef int __virtio16 ;
struct TYPE_7__ {struct vring_desc* indir_desc; int * data; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct vring_desc*) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct vring_virtqueue*,struct vring_desc*) ;

__attribute__((used)) static void FUNC_6(struct vring_virtqueue *VAR_2, unsigned int VAR_3,
        void **VAR_4)
{
 unsigned int VAR_5, VAR_6;
 __virtio16 VAR_7 = FUNC_1(VAR_2->vq.vdev, VAR_1);


 VAR_2->split.desc_state[VAR_3].data = ((void*)0);


 VAR_5 = VAR_3;

 while (VAR_2->split.vring.desc[VAR_5].flags & VAR_7) {
  FUNC_5(VAR_2, &VAR_2->split.vring.desc[VAR_5]);
  VAR_5 = FUNC_3(VAR_2->vq.vdev, VAR_2->split.vring.desc[VAR_5].next);
  VAR_2->vq.num_free++;
 }

 FUNC_5(VAR_2, &VAR_2->split.vring.desc[VAR_5]);
 VAR_2->split.vring.desc[VAR_5].next = FUNC_1(VAR_2->vq.vdev,
      VAR_2->free_head);
 VAR_2->free_head = VAR_3;


 VAR_2->vq.num_free++;

 if (VAR_2->indirect) {
  struct vring_desc *VAR_8 =
    VAR_2->split.desc_state[VAR_3].indir_desc;
  u32 VAR_9;


  if (!VAR_8)
   return;

  VAR_9 = FUNC_4(VAR_2->vq.vdev,
    VAR_2->split.vring.desc[VAR_3].len);

  FUNC_0(!(VAR_2->split.vring.desc[VAR_3].flags &
    FUNC_1(VAR_2->vq.vdev, VAR_0)));
  FUNC_0(VAR_9 == 0 || VAR_9 % sizeof(struct vring_desc));

  for (VAR_6 = 0; VAR_6 < VAR_9 / sizeof(struct vring_desc); VAR_6++)
   FUNC_5(VAR_2, &VAR_8[VAR_6]);

  FUNC_2(VAR_8);
  VAR_2->split.desc_state[VAR_3].indir_desc = ((void*)0);
 } else if (VAR_4) {
  *VAR_4 = VAR_2->split.desc_state[VAR_3].indir_desc;
 }
}
