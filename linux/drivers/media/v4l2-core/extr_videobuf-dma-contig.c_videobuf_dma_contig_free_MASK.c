
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dev; } ;
struct videobuf_dma_contig_memory {int * vaddr; int magic; } ;
struct videobuf_buffer {scalar_t__ memory; scalar_t__ baddr; struct videobuf_dma_contig_memory* priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct videobuf_dma_contig_memory*) ;
 int FUNC_2 (struct videobuf_dma_contig_memory*) ;

void FUNC_3(struct videobuf_queue *VAR_2,
         struct videobuf_buffer *VAR_3)
{
 struct videobuf_dma_contig_memory *VAR_4 = VAR_3->priv;







 if (VAR_3->memory != VAR_1)
  return;

 if (!VAR_4)
  return;

 FUNC_0(VAR_4->magic, VAR_0);


 if (VAR_3->baddr) {
  FUNC_2(VAR_4);
  return;
 }


 if (VAR_4->vaddr) {
  FUNC_1(VAR_2->dev, VAR_4);
  VAR_4->vaddr = ((void*)0);
 }
}
