
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dma_contig_memory {int dma_handle; int magic; } ;
struct videobuf_buffer {struct videobuf_dma_contig_memory* priv; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

dma_addr_t FUNC_2(struct videobuf_buffer *VAR_1)
{
 struct videobuf_dma_contig_memory *VAR_2 = VAR_1->priv;

 FUNC_0(!VAR_2);
 FUNC_1(VAR_2->magic, VAR_0);

 return VAR_2->dma_handle;
}
