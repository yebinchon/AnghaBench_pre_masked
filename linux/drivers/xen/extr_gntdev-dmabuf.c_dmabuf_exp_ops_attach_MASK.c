
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_dmabuf_attachment {int dir; } ;
struct dma_buf_attachment {struct gntdev_dmabuf_attachment* priv; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gntdev_dmabuf_attachment* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_3,
     struct dma_buf_attachment *VAR_4)
{
 struct gntdev_dmabuf_attachment *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5),
           VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dir = VAR_0;
 VAR_4->priv = VAR_5;
 return 0;
}
