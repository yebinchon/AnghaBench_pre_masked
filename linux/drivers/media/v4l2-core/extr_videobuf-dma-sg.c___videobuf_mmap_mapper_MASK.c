
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_flags; int vm_end; int vm_start; struct videobuf_mapping* vm_private_data; int * vm_ops; } ;
struct videobuf_queue {struct videobuf_buffer** bufs; } ;
struct videobuf_mapping {int count; struct videobuf_queue* q; } ;
struct videobuf_dma_sg_memory {int magic; } ;
struct videobuf_buffer {int bsize; scalar_t__ baddr; struct videobuf_mapping* map; struct videobuf_dma_sg_memory* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*,...) ;
 struct videobuf_mapping* FUNC_4 (int,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct videobuf_queue *VAR_10,
      struct videobuf_buffer *VAR_11,
      struct vm_area_struct *VAR_12)
{
 struct videobuf_dma_sg_memory *VAR_13 = VAR_11->priv;
 struct videobuf_mapping *VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17 = 0, VAR_18;
 int VAR_19;

 VAR_19 = -VAR_0;

 FUNC_0(!VAR_13);
 FUNC_1(VAR_13->magic, VAR_3);


 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  if (VAR_11 == VAR_10->bufs[VAR_15]) {
   VAR_17 = FUNC_2(VAR_10->bufs[VAR_15]->bsize);
   break;
  }
 }


 if (!VAR_17) {
  FUNC_3(1, "mmap app bug: offset invalid [offset=0x%lx]\n",
    (VAR_12->vm_pgoff << VAR_4));
  goto done;
 }

 VAR_16 = VAR_15;


 VAR_19 = -VAR_1;
 VAR_14 = FUNC_4(sizeof(struct videobuf_mapping), VAR_2);
 if (((void*)0) == VAR_14)
  goto done;

 VAR_17 = 0;
 for (VAR_18 = VAR_15; VAR_18 <= VAR_16; VAR_18++) {
  if (((void*)0) == VAR_10->bufs[VAR_18])
   continue;
  VAR_10->bufs[VAR_18]->map = VAR_14;
  VAR_10->bufs[VAR_18]->baddr = VAR_12->vm_start + VAR_17;
  VAR_17 += FUNC_2(VAR_10->bufs[VAR_18]->bsize);
 }

 VAR_14->count = 1;
 VAR_14->q = VAR_10;
 VAR_12->vm_ops = &VAR_9;
 VAR_12->vm_flags |= VAR_7 | VAR_6;
 VAR_12->vm_flags &= ~VAR_8;
 VAR_12->vm_private_data = VAR_14;
 FUNC_3(1, "mmap %p: q=%p %08lx-%08lx pgoff %08lx bufs %d-%d\n",
  VAR_14, VAR_10, VAR_12->vm_start, VAR_12->vm_end, VAR_12->vm_pgoff, VAR_15, VAR_16);
 VAR_19 = 0;

done:
 return VAR_19;
}
