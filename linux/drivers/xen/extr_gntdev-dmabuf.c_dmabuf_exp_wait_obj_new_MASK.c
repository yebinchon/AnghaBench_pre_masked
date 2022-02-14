
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gntdev_dmabuf_wait_obj {int next; struct gntdev_dmabuf* gntdev_dmabuf; int completion; } ;
struct gntdev_dmabuf_priv {int lock; int exp_wait_list; } ;
struct TYPE_3__ {int refcount; } ;
struct TYPE_4__ {TYPE_1__ exp; } ;
struct gntdev_dmabuf {TYPE_2__ u; } ;


 int VAR_0 ;
 struct gntdev_dmabuf_wait_obj* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct gntdev_dmabuf_wait_obj* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct gntdev_dmabuf_wait_obj *
FUNC_7(struct gntdev_dmabuf_priv *VAR_3,
   struct gntdev_dmabuf *VAR_4)
{
 struct gntdev_dmabuf_wait_obj *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->completion);
 VAR_5->gntdev_dmabuf = VAR_4;

 FUNC_5(&VAR_3->lock);
 FUNC_4(&VAR_5->next, &VAR_3->exp_wait_list);

 FUNC_2(&VAR_4->u.exp.refcount, VAR_2);
 FUNC_6(&VAR_3->lock);
 return VAR_5;
}
