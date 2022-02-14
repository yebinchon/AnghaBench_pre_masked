
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; } ;
struct videobuf_dma_contig_memory {unsigned long size; unsigned long dma_handle; } ;
struct videobuf_buffer {scalar_t__ size; int baddr; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct videobuf_dma_contig_memory *VAR_6,
     struct videobuf_buffer *VAR_7)
{
 unsigned long VAR_8 = FUNC_4(VAR_7->baddr);
 struct mm_struct *VAR_9 = VAR_5->mm;
 struct vm_area_struct *VAR_10;
 unsigned long VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_15 = VAR_8 & ~VAR_2;
 VAR_6->size = FUNC_0(VAR_7->size + VAR_15);
 VAR_16 = -VAR_1;

 FUNC_1(&VAR_9->mmap_sem);

 VAR_10 = FUNC_2(VAR_9, VAR_8);
 if (!VAR_10)
  goto out_up;

 if ((VAR_8 + VAR_6->size) > VAR_10->vm_end)
  goto out_up;

 VAR_13 = 0;
 VAR_11 = 0;
 VAR_14 = VAR_8;

 while (VAR_13 < (VAR_6->size >> VAR_3)) {
  VAR_16 = FUNC_3(VAR_10, VAR_14, &VAR_12);
  if (VAR_16)
   break;

  if (VAR_13 == 0)
   VAR_6->dma_handle = (VAR_12 << VAR_3) + VAR_15;
  else if (VAR_12 != (VAR_11 + 1))
   VAR_16 = -VAR_0;

  if (VAR_16)
   break;

  VAR_11 = VAR_12;
  VAR_14 += VAR_4;
  VAR_13++;
 }

out_up:
 FUNC_5(&VAR_5->mm->mmap_sem);

 return VAR_16;
}
