
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_dmabuf_priv {struct file* filp; int imp_list; int exp_wait_list; int exp_list; int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct gntdev_dmabuf_priv* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct gntdev_dmabuf_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct gntdev_dmabuf_priv *FUNC_4(struct file *VAR_2)
{
 struct gntdev_dmabuf_priv *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->exp_list);
 FUNC_1(&VAR_3->exp_wait_list);
 FUNC_1(&VAR_3->imp_list);

 VAR_3->filp = VAR_2;

 return VAR_3;
}
