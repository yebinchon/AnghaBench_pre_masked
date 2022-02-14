
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_10__ {size_t num; TYPE_2__* desc; } ;
struct TYPE_12__ {size_t next_avail_idx; size_t avail_used_flags; int avail_wrap_counter; TYPE_5__* desc_state; TYPE_4__ vring; TYPE_1__* desc_extra; } ;
struct TYPE_9__ {int num_free; } ;
struct vring_virtqueue {size_t free_head; int num_added; TYPE_6__ packed; TYPE_3__ vq; int weak_barriers; scalar_t__ use_dma_api; } ;
struct vring_packed_desc {void* len; void* addr; void* flags; } ;
struct scatterlist {unsigned int length; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_11__ {size_t next; int num; size_t last; struct vring_packed_desc* indir_desc; void* data; } ;
struct TYPE_8__ {void* flags; void* id; void* len; void* addr; } ;
struct TYPE_7__ {unsigned int len; size_t flags; int addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vring_packed_desc* FUNC_2 (unsigned int,int ) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (unsigned int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct vring_packed_desc*) ;
 int FUNC_7 (char*,...) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vring_virtqueue*,struct scatterlist*,int ) ;
 int FUNC_12 (struct vring_virtqueue*,struct vring_packed_desc*,unsigned int,int ) ;
 scalar_t__ FUNC_13 (struct vring_virtqueue*,int ) ;
 int FUNC_14 (struct vring_virtqueue*,struct vring_packed_desc*) ;

__attribute__((used)) static int FUNC_15(struct vring_virtqueue *VAR_8,
           struct scatterlist *VAR_9[],
           unsigned int VAR_10,
           unsigned int VAR_11,
           unsigned int VAR_12,
           void *VAR_13,
           gfp_t VAR_14)
{
 struct vring_packed_desc *VAR_15;
 struct scatterlist *VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 u16 VAR_20, VAR_21;
 dma_addr_t VAR_22;

 VAR_20 = VAR_8->packed.next_avail_idx;
 VAR_15 = FUNC_2(VAR_10, VAR_14);

 if (FUNC_9(VAR_8->vq.num_free < 1)) {
  FUNC_7("Can't add buf len 1 - avail = 0\n");
  FUNC_6(VAR_15);
  FUNC_1(VAR_8);
  return -VAR_3;
 }

 VAR_17 = 0;
 VAR_21 = VAR_8->free_head;
 FUNC_0(VAR_21 == VAR_8->packed.vring.num);

 for (VAR_18 = 0; VAR_18 < VAR_11 + VAR_12; VAR_18++) {
  for (VAR_16 = VAR_9[VAR_18]; VAR_16; VAR_16 = FUNC_8(VAR_16)) {
   VAR_22 = FUNC_11(VAR_8, VAR_16, VAR_18 < VAR_11 ?
     VAR_1 : VAR_0);
   if (FUNC_13(VAR_8, VAR_22))
    goto unmap_release;

   VAR_15[VAR_17].flags = FUNC_3(VAR_18 < VAR_11 ?
      0 : VAR_5);
   VAR_15[VAR_17].addr = FUNC_5(VAR_22);
   VAR_15[VAR_17].len = FUNC_4(VAR_16->length);
   VAR_17++;
  }
 }


 VAR_22 = FUNC_12(VAR_8, VAR_15,
   VAR_10 * sizeof(struct vring_packed_desc),
   VAR_1);
 if (FUNC_13(VAR_8, VAR_22))
  goto unmap_release;

 VAR_8->packed.vring.desc[VAR_20].addr = FUNC_5(VAR_22);
 VAR_8->packed.vring.desc[VAR_20].len = FUNC_4(VAR_10 *
    sizeof(struct vring_packed_desc));
 VAR_8->packed.vring.desc[VAR_20].id = FUNC_3(VAR_21);

 if (VAR_8->use_dma_api) {
  VAR_8->packed.desc_extra[VAR_21].addr = VAR_22;
  VAR_8->packed.desc_extra[VAR_21].len = VAR_10 *
    sizeof(struct vring_packed_desc);
  VAR_8->packed.desc_extra[VAR_21].flags = VAR_4 |
        VAR_8->packed.avail_used_flags;
 }






 FUNC_10(VAR_8->weak_barriers);
 VAR_8->packed.vring.desc[VAR_20].flags = FUNC_3(VAR_4 |
      VAR_8->packed.avail_used_flags);


 VAR_8->vq.num_free -= 1;


 VAR_18 = VAR_20 + 1;
 if (VAR_18 >= VAR_8->packed.vring.num) {
  VAR_18 = 0;
  VAR_8->packed.avail_wrap_counter ^= 1;
  VAR_8->packed.avail_used_flags ^=
    1 << VAR_6 |
    1 << VAR_7;
 }
 VAR_8->packed.next_avail_idx = VAR_18;
 VAR_8->free_head = VAR_8->packed.desc_state[VAR_21].next;


 VAR_8->packed.desc_state[VAR_21].num = 1;
 VAR_8->packed.desc_state[VAR_21].data = VAR_13;
 VAR_8->packed.desc_state[VAR_21].indir_desc = VAR_15;
 VAR_8->packed.desc_state[VAR_21].last = VAR_21;

 VAR_8->num_added += 1;

 FUNC_7("Added buffer head %i to %p\n", VAR_20, VAR_8);
 FUNC_1(VAR_8);

 return 0;

unmap_release:
 VAR_19 = VAR_17;

 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++)
  FUNC_14(VAR_8, &VAR_15[VAR_17]);

 FUNC_6(VAR_15);

 FUNC_1(VAR_8);
 return -VAR_2;
}
