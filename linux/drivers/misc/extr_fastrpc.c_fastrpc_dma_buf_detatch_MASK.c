
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_dma_buf_attachment {int sgt; int node; } ;
struct fastrpc_buf {int lock; } ;
struct dma_buf_attachment {struct fastrpc_dma_buf_attachment* priv; } ;
struct dma_buf {struct fastrpc_buf* priv; } ;


 int FUNC_0 (struct fastrpc_dma_buf_attachment*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dma_buf *VAR_0,
        struct dma_buf_attachment *VAR_1)
{
 struct fastrpc_dma_buf_attachment *VAR_2 = VAR_1->priv;
 struct fastrpc_buf *VAR_3 = VAR_0->priv;

 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_3->lock);
 FUNC_4(&VAR_2->sgt);
 FUNC_0(VAR_2);
}
