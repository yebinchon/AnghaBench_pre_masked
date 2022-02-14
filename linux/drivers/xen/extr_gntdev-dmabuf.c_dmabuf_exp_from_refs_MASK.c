
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct gntdev_priv {int dmabuf_priv; int dma_dev; int lock; } ;
struct gntdev_grant_map {int pages; int count; int flags; TYPE_1__* grants; } ;
struct gntdev_dmabuf_export_args {int fd; int pages; int count; int dmabuf_priv; int dev; struct gntdev_grant_map* map; struct gntdev_priv* priv; } ;
struct TYPE_2__ {void* ref; void* domid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gntdev_grant_map*) ;
 int FUNC_1 (struct gntdev_grant_map*) ;
 struct gntdev_grant_map* FUNC_2 (struct gntdev_priv*,int,int) ;
 int FUNC_3 (struct gntdev_dmabuf_export_args*) ;
 int FUNC_4 (struct gntdev_priv*,struct gntdev_grant_map*) ;
 int FUNC_5 (struct gntdev_priv*,struct gntdev_grant_map*) ;
 int FUNC_6 (struct gntdev_grant_map*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct gntdev_priv *VAR_2, int VAR_3,
    int VAR_4, u32 VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 struct gntdev_grant_map *VAR_8;
 struct gntdev_dmabuf_export_args VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8->grants[VAR_10].domid = VAR_5;
  VAR_8->grants[VAR_10].ref = VAR_6[VAR_10];
 }

 FUNC_7(&VAR_2->lock);
 FUNC_5(VAR_2, VAR_8);
 FUNC_8(&VAR_2->lock);

 VAR_8->flags |= VAR_1;




 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 < 0)
  goto out;

 VAR_9.priv = VAR_2;
 VAR_9.map = VAR_8;
 VAR_9.dev = VAR_2->dma_dev;
 VAR_9.dmabuf_priv = VAR_2->dmabuf_priv;
 VAR_9.count = VAR_8->count;
 VAR_9.pages = VAR_8->pages;
 VAR_9.fd = -1;

 VAR_11 = FUNC_3(&VAR_9);
 if (VAR_11 < 0)
  goto out;

 *VAR_7 = VAR_9.fd;
 return 0;

out:
 FUNC_4(VAR_2, VAR_8);
 return VAR_11;
}
