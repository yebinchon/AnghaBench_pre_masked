
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gntdev_dmabuf_export_args {int count; int fd; TYPE_5__* dmabuf_priv; TYPE_4__* dev; int map; int priv; int pages; } ;
struct TYPE_9__ {int map; int priv; int refcount; } ;
struct TYPE_10__ {TYPE_1__ exp; } ;
struct gntdev_dmabuf {int nr_pages; int fd; int * dmabuf; TYPE_5__* priv; int next; TYPE_2__ u; int pages; } ;
struct TYPE_14__ {int size; struct gntdev_dmabuf* priv; int flags; int * ops; scalar_t__ owner; int exp_name; } ;
struct TYPE_13__ {int filp; int lock; int exp_list; } ;
struct TYPE_12__ {TYPE_3__* driver; } ;
struct TYPE_11__ {scalar_t__ owner; } ;


 int FUNC_0 (TYPE_6__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int * FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct gntdev_dmabuf*) ;
 int FUNC_8 (int *) ;
 struct gntdev_dmabuf* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static int FUNC_14(struct gntdev_dmabuf_export_args *VAR_9)
{
 FUNC_0(VAR_8);
 struct gntdev_dmabuf *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_8(&VAR_10->u.exp.refcount);

 VAR_10->priv = VAR_9->dmabuf_priv;
 VAR_10->nr_pages = VAR_9->count;
 VAR_10->pages = VAR_9->pages;
 VAR_10->u.exp.priv = VAR_9->priv;
 VAR_10->u.exp.map = VAR_9->map;

 VAR_8.exp_name = VAR_2;
 if (VAR_9->dev->driver && VAR_9->dev->driver->owner)
  VAR_8.owner = VAR_9->dev->driver->owner;
 else
  VAR_8.owner = VAR_6;
 VAR_8.ops = &VAR_7;
 VAR_8.size = VAR_9->count << VAR_5;
 VAR_8.flags = VAR_4;
 VAR_8.priv = VAR_10;

 VAR_10->dmabuf = FUNC_3(&VAR_8);
 if (FUNC_1(VAR_10->dmabuf)) {
  VAR_11 = FUNC_2(VAR_10->dmabuf);
  VAR_10->dmabuf = ((void*)0);
  goto fail;
 }

 VAR_11 = FUNC_4(VAR_10->dmabuf, VAR_3);
 if (VAR_11 < 0)
  goto fail;

 VAR_10->fd = VAR_11;
 VAR_9->fd = VAR_11;

 FUNC_13("Exporting DMA buffer with fd %d\n", VAR_11);

 FUNC_11(&VAR_9->dmabuf_priv->lock);
 FUNC_10(&VAR_10->next, &VAR_9->dmabuf_priv->exp_list);
 FUNC_12(&VAR_9->dmabuf_priv->lock);
 FUNC_6(VAR_10->priv->filp);
 return 0;

fail:
 if (VAR_10->dmabuf)
  FUNC_5(VAR_10->dmabuf);
 FUNC_7(VAR_10);
 return VAR_11;
}
