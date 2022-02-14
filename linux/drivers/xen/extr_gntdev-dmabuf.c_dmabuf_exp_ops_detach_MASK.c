
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dir; int nents; int sgl; struct sg_table* sgt; } ;
struct gntdev_dmabuf_attachment {int dir; int nents; int sgl; struct gntdev_dmabuf_attachment* sgt; } ;
struct dma_buf_attachment {struct sg_table* priv; int dev; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf *VAR_2,
      struct dma_buf_attachment *VAR_3)
{
 struct gntdev_dmabuf_attachment *VAR_4 = VAR_3->priv;

 if (VAR_4) {
  struct sg_table *VAR_5 = VAR_4->sgt;

  if (VAR_5) {
   if (VAR_4->dir != VAR_1)
    FUNC_0(VAR_3->dev, VAR_5->sgl,
         VAR_5->nents,
         VAR_4->dir,
         VAR_0);
   FUNC_2(VAR_5);
  }

  FUNC_1(VAR_5);
  FUNC_1(VAR_4);
  VAR_3->priv = ((void*)0);
 }
}
