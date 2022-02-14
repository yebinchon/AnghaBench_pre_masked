
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gntdev_dmabuf_priv {int dummy; } ;
struct TYPE_3__ {scalar_t__ sgt; struct dma_buf_attachment* attach; int refs; } ;
struct TYPE_4__ {TYPE_1__ imp; } ;
struct gntdev_dmabuf {TYPE_2__ u; int nr_pages; } ;
struct dma_buf_attachment {struct dma_buf* dmabuf; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gntdev_dmabuf*) ;
 int FUNC_1 (struct gntdev_dmabuf*) ;
 int FUNC_2 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_3 (struct dma_buf*) ;
 int FUNC_4 (struct dma_buf_attachment*,scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 struct gntdev_dmabuf* FUNC_6 (struct gntdev_dmabuf_priv*,int ) ;
 int FUNC_7 (struct gntdev_dmabuf*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct gntdev_dmabuf_priv *VAR_1, u32 VAR_2)
{
 struct gntdev_dmabuf *VAR_3;
 struct dma_buf_attachment *VAR_4;
 struct dma_buf *VAR_5;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_8("Releasing DMA buffer with fd %d\n", VAR_2);

 FUNC_5(VAR_3->u.imp.refs,
          VAR_3->nr_pages);

 VAR_4 = VAR_3->u.imp.attach;

 if (VAR_3->u.imp.sgt)
  FUNC_4(VAR_4, VAR_3->u.imp.sgt,
      VAR_0);
 VAR_5 = VAR_4->dmabuf;
 FUNC_2(VAR_4->dmabuf, VAR_4);
 FUNC_3(VAR_5);

 FUNC_7(VAR_3);
 return 0;
}
