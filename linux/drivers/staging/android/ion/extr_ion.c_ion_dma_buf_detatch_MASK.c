
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_dma_buf_attachment {int table; int list; } ;
struct ion_buffer {int lock; } ;
struct dma_buf_attachment {struct ion_dma_buf_attachment* priv; } ;
struct dma_buf {struct ion_buffer* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ion_dma_buf_attachment*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dma_buf *VAR_0,
    struct dma_buf_attachment *VAR_1)
{
 struct ion_dma_buf_attachment *VAR_2 = VAR_1->priv;
 struct ion_buffer *VAR_3 = VAR_0->priv;

 FUNC_3(&VAR_3->lock);
 FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_3->lock);
 FUNC_0(VAR_2->table);

 FUNC_1(VAR_2);
}
