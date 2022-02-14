
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct gntdev_dmabuf_attachment {int dir; struct sg_table* sgt; } ;
struct gntdev_dmabuf {int nr_pages; int pages; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; struct gntdev_dmabuf_attachment* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct gntdev_dmabuf* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sg_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sg_table*) ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 struct sg_table* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sg_table*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct sg_table*) ;

__attribute__((used)) static struct sg_table *
FUNC_7(struct dma_buf_attachment *VAR_5,
      enum dma_data_direction VAR_6)
{
 struct gntdev_dmabuf_attachment *VAR_7 = VAR_5->priv;
 struct gntdev_dmabuf *VAR_8 = VAR_5->dmabuf->priv;
 struct sg_table *VAR_9;

 FUNC_5("Mapping %d pages for dev %p\n", VAR_8->nr_pages,
   VAR_5->dev);

 if (VAR_6 == VAR_1 || !VAR_7)
  return FUNC_0(-VAR_3);


 if (VAR_7->dir == VAR_6)
  return VAR_7->sgt;





 if (VAR_7->dir != VAR_1)
  return FUNC_0(-VAR_2);

 VAR_9 = FUNC_3(VAR_8->pages,
      VAR_8->nr_pages);
 if (!FUNC_1(VAR_9)) {
  if (!FUNC_2(VAR_5->dev, VAR_9->sgl, VAR_9->nents, VAR_6,
          VAR_0)) {
   FUNC_6(VAR_9);
   FUNC_4(VAR_9);
   VAR_9 = FUNC_0(-VAR_4);
  } else {
   VAR_7->sgt = VAR_9;
   VAR_7->dir = VAR_6;
  }
 }
 if (FUNC_1(VAR_9))
  FUNC_5("Failed to map sg table for dev %p\n", VAR_5->dev);
 return VAR_9;
}
