
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_dma_buf_attachment {int node; int dev; int sgt; } ;
struct fastrpc_buf {int lock; int attachments; int dev; int size; int phys; int virt; } ;
struct dma_buf_attachment {struct fastrpc_dma_buf_attachment* priv; int dev; } ;
struct dma_buf {struct fastrpc_buf* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ,int ,int ) ;
 int FUNC_4 (struct fastrpc_dma_buf_attachment*) ;
 struct fastrpc_dma_buf_attachment* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dma_buf *VAR_3,
      struct dma_buf_attachment *VAR_4)
{
 struct fastrpc_dma_buf_attachment *VAR_5;
 struct fastrpc_buf *VAR_6 = VAR_3->priv;
 int VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_6->dev, &VAR_5->sgt, VAR_6->virt,
         FUNC_0(VAR_6->phys), VAR_6->size);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6->dev, "failed to get scatterlist from DMA API\n");
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 VAR_5->dev = VAR_4->dev;
 FUNC_1(&VAR_5->node);
 VAR_4->priv = VAR_5;

 FUNC_7(&VAR_6->lock);
 FUNC_6(&VAR_5->node, &VAR_6->attachments);
 FUNC_8(&VAR_6->lock);

 return 0;
}
