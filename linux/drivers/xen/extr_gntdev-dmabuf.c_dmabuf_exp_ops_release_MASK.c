
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gntdev_dmabuf_priv {int lock; } ;
struct TYPE_3__ {int refcount; int map; int priv; } ;
struct TYPE_4__ {TYPE_1__ exp; } ;
struct gntdev_dmabuf {TYPE_2__ u; struct gntdev_dmabuf_priv* priv; } ;
struct dma_buf {struct gntdev_dmabuf* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dma_buf *VAR_1)
{
 struct gntdev_dmabuf *VAR_2 = VAR_1->priv;
 struct gntdev_dmabuf_priv *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_2->u.exp.priv,
         VAR_2->u.exp.map);
 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_2->u.exp.refcount, VAR_0);
 FUNC_3(&VAR_3->lock);
}
