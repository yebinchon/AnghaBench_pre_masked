
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; struct videobuf_mapping* vm_private_data; } ;
struct videobuf_queue {TYPE_1__** bufs; int dev; scalar_t__ streaming; } ;
struct videobuf_mapping {scalar_t__ count; struct videobuf_queue* q; } ;
struct videobuf_dma_contig_memory {int * vaddr; int magic; } ;
struct TYPE_2__ {scalar_t__ baddr; struct videobuf_mapping* map; struct videobuf_dma_contig_memory* priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct videobuf_dma_contig_memory*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct videobuf_mapping*) ;
 int FUNC_4 (struct videobuf_queue*) ;
 int FUNC_5 (struct videobuf_queue*) ;
 int FUNC_6 (struct videobuf_queue*) ;

__attribute__((used)) static void FUNC_7(struct vm_area_struct *VAR_2)
{
 struct videobuf_mapping *VAR_3 = VAR_2->vm_private_data;
 struct videobuf_queue *VAR_4 = VAR_3->q;
 int VAR_5;

 FUNC_2(VAR_4->dev, "vm_close %p [count=%u,vma=%08lx-%08lx]\n",
  VAR_3, VAR_3->count, VAR_2->vm_start, VAR_2->vm_end);

 VAR_3->count--;
 if (0 == VAR_3->count) {
  struct videobuf_dma_contig_memory *VAR_6;

  FUNC_2(VAR_4->dev, "munmap %p q=%p\n", VAR_3, VAR_4);
  FUNC_5(VAR_4);


  if (VAR_4->streaming)
   FUNC_4(VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (((void*)0) == VAR_4->bufs[VAR_5])
    continue;

   if (VAR_4->bufs[VAR_5]->map != VAR_3)
    continue;

   VAR_6 = VAR_4->bufs[VAR_5]->priv;
   if (VAR_6) {






    FUNC_0(VAR_6->magic, VAR_0);




    FUNC_2(VAR_4->dev, "buf[%d] freeing %p\n",
     VAR_5, VAR_6->vaddr);

    FUNC_1(VAR_4->dev, VAR_6);
    VAR_6->vaddr = ((void*)0);
   }

   VAR_4->bufs[VAR_5]->map = ((void*)0);
   VAR_4->bufs[VAR_5]->baddr = 0;
  }

  FUNC_3(VAR_3);

  FUNC_6(VAR_4);
 }
}
