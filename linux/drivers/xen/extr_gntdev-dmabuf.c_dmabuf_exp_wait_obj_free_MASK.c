
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_dmabuf_wait_obj {int next; } ;
struct gntdev_dmabuf_priv {int lock; } ;


 int FUNC_0 (struct gntdev_dmabuf_wait_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gntdev_dmabuf_priv *VAR_0,
         struct gntdev_dmabuf_wait_obj *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_1(&VAR_1->next);
 FUNC_3(&VAR_0->lock);
 FUNC_0(VAR_1);
}
