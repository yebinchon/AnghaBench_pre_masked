
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int dummy; } ;
struct videobuf_dma_sg_memory {struct videobuf_dmabuf dma; int magic; } ;
struct videobuf_buffer {struct videobuf_dma_sg_memory* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

struct videobuf_dmabuf *FUNC_2(struct videobuf_buffer *VAR_1)
{
 struct videobuf_dma_sg_memory *VAR_2 = VAR_1->priv;
 FUNC_0(!VAR_2);

 FUNC_1(VAR_2->magic, VAR_0);

 return &VAR_2->dma;
}
