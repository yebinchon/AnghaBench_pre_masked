
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct ion_dma_buf_attachment {int list; int dev; struct sg_table* table; } ;
struct ion_buffer {int lock; int attachments; int sg_table; } ;
struct dma_buf_attachment {struct ion_dma_buf_attachment* priv; int dev; } ;
struct dma_buf {struct ion_buffer* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sg_table*) ;
 struct sg_table* FUNC_2 (int ) ;
 int FUNC_3 (struct ion_dma_buf_attachment*) ;
 struct ion_dma_buf_attachment* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dma_buf *VAR_2,
         struct dma_buf_attachment *VAR_3)
{
 struct ion_dma_buf_attachment *VAR_4;
 struct sg_table *VAR_5;
 struct ion_buffer *VAR_6 = VAR_2->priv;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_6->sg_table);
 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 VAR_4->table = VAR_5;
 VAR_4->dev = VAR_3->dev;
 FUNC_0(&VAR_4->list);

 VAR_3->priv = VAR_4;

 FUNC_6(&VAR_6->lock);
 FUNC_5(&VAR_4->list, &VAR_6->attachments);
 FUNC_7(&VAR_6->lock);

 return 0;
}
